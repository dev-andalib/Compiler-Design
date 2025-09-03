#include "symbol_info.h"
#include <iostream>
#include <string>
#include <vector>
#include <list>

extern ofstream outlog;

class scope_table
{
private:
    int bucket_count;
    int unique_id;
    scope_table *parent_scope = NULL;
    vector<list<symbol_info *>> table;

    int hash_function(string name)
    {
        int total = 0;
        for (int i = 0; i<name.length();i++)
        {
            total += name[i];
        }
        return total % bucket_count;
    }

public:
    //Default constractor
    scope_table(){
        bucket_count = 10;
        unique_id = 1;
        parent_scope = NULL;
        table.resize(bucket_count);
        outlog << "New ScopeTable with ID " << unique_id << " created" <<endl<<endl;
    }

    //Parameterized constructor
    scope_table(int bucket_count, int unique_id, scope_table *parent_scope){
        this->bucket_count = bucket_count;
        this->unique_id = unique_id;
        this->parent_scope = parent_scope;
        table.resize(bucket_count);
        outlog << "New ScopeTable with ID " << unique_id << " created" <<endl<<endl;
    }

    scope_table *get_parent_scope(){
        return parent_scope;
    }

    int get_unique_id(){
        return unique_id;
    }

    symbol_info *lookup_in_scope(symbol_info* symbol){
        int hash_val = hash_function(symbol->getname());

        // Search in the appropriate bucket
        for (auto& current : table[hash_val])
        {
            if (current->getname() == symbol->getname())
            {
                return current;
            }
        }
        return NULL;
    }

    bool insert_in_scope(symbol_info* symbol){
        if (lookup_in_scope(symbol) != NULL)
        {
            return false;
        }

        int hash_val = hash_function(symbol->getname());
        table[hash_val].push_back(symbol);
        return true;
    }

    bool delete_from_scope(symbol_info* symbol){
        int hash_val = hash_function(symbol->getname());

        auto& li_head = table[hash_val];
        for (auto it = li_head.begin(); it != li_head.end(); ++it)
        {
            if ((*it)->getname() == symbol->getname())
            {
                li_head.erase(it);
                return true;
            }
        }
        return false;
    }

    void print_scope_table(ofstream& outlog){
        outlog << "ScopeTable # " << unique_id <<endl;
        for (int i = 0; i < bucket_count; i++)
        {
            if (!table[i].empty())
            {
                outlog << i << " --> " << endl; 
                for (auto& current : table[i])
                {
                    
                    outlog << "< " << current->getname() << " : " << current->gettype() << " >" << endl;

                    if (current->get_is_function())
                    {
                        // Print function details
                        outlog << "Function Definition" << endl;
                        outlog << "Return Type: " << current->get_return_type() << endl;
                        vector<pair<string, string>> params = current->get_parameters();
                        outlog << "Number of Parameters: " << params.size() << endl;
                        outlog << "Parameter Details: ";
                        for (int j = 0; j < params.size(); j++)
                        {
                            outlog << params[j].first << " " << params[j].second;
                            if (j < params.size() - 1)
                                outlog << ", ";
                        }
                        outlog <<endl;
                    }
                    else if (current->get_is_array())
                    {
                        // Print array details
                        outlog << "Array" << endl;
                        outlog << "Type: " << current->get_symbol_type() << endl;
                        outlog << "Size: " << current->get_array_size() << endl;
                    }
                    else
                    {
                        // Print variable details
                        outlog << "Variable" << endl;
                        outlog << "Type: " << current->get_symbol_type() << endl;
                    }
                }
            }
        }
        outlog <<endl; 
    }

    ~scope_table(){
        outlog << "Scopetable with ID " << unique_id << " removed" <<endl<<endl;
        for (auto& indx : table)
        {
            for (auto smbl : indx)
            {
                delete smbl;
            }
            indx.clear();
        }
        table.clear();
    }

    // you can add more methods if you need
};

// // complete the methods of scope_table class
// void scope_table::print_scope_table(ofstream& outlog)
// {
//     outlog << "ScopeTable # "+ to_string(unique_id) << endl;

//     //iterate through the current scope table and print the symbols and all relevant information
// }