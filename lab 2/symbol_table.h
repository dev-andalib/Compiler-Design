#include "scope_table.h"

class symbol_table
{
private:
    scope_table *current_scope;
    int bucket_count;
    int current_scope_id;

public:
    symbol_table(int bucket_count);
    ~symbol_table();
    void enter_scope();
    void exit_scope();
    bool insert(symbol_info* symbol);
    bool remove(symbol_info* symbol); 
    symbol_info* lookup(symbol_info* symbol);
    void print_current_scope();
    void print_all_scopes(ofstream& outlog);

    
};


symbol_table::symbol_table(int bucket_count)
{
    this->bucket_count = bucket_count;
    this->current_scope_id = 1;
    // the code starts from symbol table where we initiate space creation for symbols info object
    // we use the scope table to create space
    this->current_scope = new scope_table(bucket_count, current_scope_id, nullptr);
    // log like the sample
    ofstream outlog("log.txt", ios::app);
    outlog << "New ScopeTable with ID " << current_scope_id << " created\n\n";
}

void symbol_table::enter_scope() 
{   // increase scope id, create a new scope link it to parent scope
    this->current_scope_id++;
    scope_table* new_scope = new scope_table(bucket_count, current_scope_id, current_scope);
    this->current_scope = new_scope;
    ofstream outlog("log.txt", ios::app);
    outlog << "New ScopeTable with ID " << current_scope_id << " created\n\n";
}

void symbol_table::exit_scope() {
    if (current_scope == nullptr) return;  // no scope to remove

    scope_table* temp = this->current_scope;
    int removed_id = temp->get_unique_id();
    this->current_scope = current_scope->get_parent_scope(); // store parent's scope
    delete temp;
    
    ofstream outlog("log.txt", ios::app);
    outlog << "Scopetable with ID " << removed_id << " removed\n\n";
}

bool symbol_table::insert(symbol_info* symbol) 
{
    if (!symbol) return false; // if symbol not given
    return this->current_scope->insert_in_scope(symbol);
}

bool symbol_table::remove(symbol_info* symbol) 
{
    if ( !symbol) return false; // if symbol not given
    return this->current_scope->delete_from_scope(symbol);
}

symbol_info* symbol_table::lookup(symbol_info* symbol) 
{
    if (!symbol) return nullptr;
    scope_table* temp = this->current_scope;
    while (temp) 
    {  // look inside current scope
        if (symbol_info* sym = temp->lookup_in_scope(symbol)) return sym;
        //return if found else go to parent scope
        temp = temp->get_parent_scope();
    }
    return nullptr;
}

void symbol_table::print_current_scope() 
{
    if (!current_scope) return;                  // nothing to print
    ofstream outlog("log.txt", ios::app);        // or use a reference passed in
    // use the function defined in scope table to print current scope
    this->current_scope->print_scope_table(outlog);
    outlog.close();
}

void symbol_table::print_all_scopes(ofstream& outlog) 
{
    outlog << "################################" << endl << endl;
    scope_table* temp = current_scope;
    // loop over scopes and print them
    while (temp) {
        temp->print_scope_table(outlog);
        temp = temp->get_parent_scope();
    }
    outlog << "################################" << endl << endl;
}



symbol_table::~symbol_table()
{
    delete this->current_scope;
}