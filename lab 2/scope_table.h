#include "symbol_info.h"
#include <string.h>


// the data structure which will actually store the ids or symbol info objects


class scope_table  
{
private:
    int bucket_count; // number of slots in each table
    int unique_id; // to identify scope table
    scope_table *parent_scope = NULL; // to point to parent scope, global scope has to parent so points to null
    vector<list<symbol_info *>> table; 
    // dynamic array/vector of linked lists/buckets.
    // each list stores symbols whose names hash to the same index.
    // so if two identifiers have the same hash value/collision,
    // they are chained together in the same bucket.

    int hash_function(string name)
    {
        int sum = 0;
        for (int i = 0; i < name.length(); i++)
        {
            sum += (int) name[i];   // add ASCII value of each char
        }
        
        return sum % bucket_count; // mod by bucket_count to generate and index
    }

public:
    scope_table();
    scope_table(int bucket_count, int unique_id, scope_table *parent_scope);
    scope_table *get_parent_scope();
    int get_unique_id();
    symbol_info *lookup_in_scope(symbol_info* symbol);
    bool insert_in_scope(symbol_info* symbol);
    bool delete_from_scope(symbol_info* symbol);
    void print_scope_table(ofstream& outlog);
    ~scope_table();

    // you can add more methods if you need
};

// complete the methods of scope_table class
scope_table::scope_table()
    {   // when no arguments given initiate to default value
        this->bucket_count = 0;
        this->unique_id = 0;
        this->parent_scope = nullptr; // basically null
        table = vector<list<symbol_info*>>(bucket_count); //making a vector of size bucketcount
    }
scope_table::scope_table(int bucket_count, int unique_id, scope_table *parent_scope)
    {   // when  arguments given initiate to given value
        this->bucket_count = bucket_count;
        this->unique_id = unique_id;
        this->parent_scope = parent_scope; // follow parent provided
        table = vector<list<symbol_info*>>(bucket_count); //making a vector of size bucketcount
    }

scope_table * scope_table::get_parent_scope() // a scope table pointer will be returned, second scope_table tells compiler that it belongs to scope class
{             
    return this->parent_scope;
}
int scope_table::get_unique_id()
{
    return this->unique_id;
}

symbol_info * scope_table::lookup_in_scope(symbol_info* symbol)
{   
    string name = symbol->get_name();//arrow as symbol is a ptr

    int index = this->hash_function(name); 
    for (symbol_info* sym : table[index]) //looping over the table[index] / linked list and storing them in sym
        { 
            if (sym->get_name() == name) // since sym is an object symbol info, use get_name 
            {
                return sym;  // found the symbol, return its pointer
            }
        }
    return nullptr;  // not found
}

bool scope_table::insert_in_scope(symbol_info* symbol)
{   
    // check first
    if (symbol == nullptr) return false; //symbol check to ensure it is not nullptr
    if (this->bucket_count == 0) return false; /// bucket 0 chech to avoid 0 division
    symbol_info* dup = this->lookup_in_scope(symbol); /// duplicate check
    if (dup != nullptr) return false;

    string name = symbol->get_name();
    int index = this->hash_function(name);
    table[index].push_back(symbol);
    return true;
    
}

bool scope_table::delete_from_scope(symbol_info* symbol)
{
    
    symbol_info* sym = this->lookup_in_scope(symbol); // check if it exists
    if (!sym) return false;

    int index = this->hash_function(sym->get_name());

    std::list<symbol_info*>& bucket = table[index];

    for (auto it = bucket.begin(); it != bucket.end(); ++it) {
        if (*it == sym) {          // pointer equality: delete exactly this entry
            delete *it;               // free memory IF scope_table owns the symbols
            bucket.erase(it);         // unlink from the list
            return true;
        }
    }
    return false; // should be rare if lookup succeeded


}
    
void scope_table::print_scope_table(ofstream& outlog)
{
    outlog << "ScopeTable # "+ to_string(unique_id) << endl;

    for (int i = 0; i < bucket_count; ++i) 
    { // loop over all the buckets and print them in a scope table   
        if (table[i].empty()) continue;          // print only non-empty buckets

        outlog << i << " -->" << '\n';           //7 -->

        for (symbol_info* sym : table[i]) {
            // printing the token
            outlog << "< " << sym->get_name() << " : " << sym->get_type() << " >" << '\n'; 

            
            const string& t = sym->get_ID_type();   // "variable", "array", "function", ...

            if (t == "variable") 
            {
                outlog << "Variable" << '\n';
                outlog << "Type: " << sym->get_var_type() << '\n';  
            } 
            
            else if (t == "array") 
            {
                outlog << "Array" << '\n';
                outlog << "Type: " << sym->get_var_type() << '\n';
                outlog << "Size: " << sym->get_arr_size() << '\n';
            } 
            
            else if (t == "function") 
            {
                outlog << "Function Definition" << '\n';
                outlog << "Return Type: " << sym->get_var_type() << '\n';
                const std::vector<std::string>& pt = sym->get_param_type();
                const std::vector<std::string>& pn = sym->get_param_name();

                 outlog << "Parameter Details: ";
                if (pt.empty())
                 {
                    outlog << "(None)\n";
                 } 
                 else 
                 {      //size_t used for unsigned types
                       // see if there are more than 1 parameters and print them accordingly
                    for (size_t j = 0; j < pt.size(); ++j) {
                        outlog << pt[j];
                        if (j < pn.size() && !pn[j].empty()) outlog << " " << pn[j];
                        if (j + 1 < pt.size()) outlog << ", ";
                    }
                 }
                outlog << '\n';
            }     
        }

    }
} 

scope_table::~scope_table()
{
    for(list<symbol_info*>& bucket: table) // loop over each bucket in scope table
    {
        for (symbol_info * s: bucket) delete s; // delete it and clear bucket
        bucket.clear();
    }
}