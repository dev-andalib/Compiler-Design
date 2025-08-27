#include<bits/stdc++.h>
#include <string>
#include <vector>
#include <iostream>
#include <list>
using namespace std;

class symbol_info
{
private:
    string name;
    string type;
    symbol_info *next;
    string symbol_type;

    // Write necessary attributes to store what type of symbol it is (variable/array/function)
    // Write necessary attributes to store the type/return type of the symbol (int/float/void/...)
    // Write necessary attributes to store the parameters of a function
    // Write necessary attributes to store the array size if the symbol is an array

    // array
    bool is_array;
    int array_size;

    // function
    bool is_function;
    string return_type;
    vector<pair<string, string> > parameters;

public:
    symbol_info(string name, string type)
    {
        this->name = name;
        this->type = type;
        this->next = NULL;
        this->is_array = false;
        this->is_function = false;

    }

    //variables
    symbol_info(string name, string type, string symbol_type)
    {
        this->name = name;
        this->type = type;
        this->symbol_type = symbol_type;
        this->next = NULL;
        this->is_array = false;
        this->is_function = false;
    }

    //arrays
    symbol_info(string name, string type, string symbol_type, int array_size)
    {
        this->name = name;
        this->type = type;
        this->symbol_type = symbol_type;
        this->is_array = true;
        this->array_size = array_size;
        this->next = NULL;
        this->is_function = false;
    }

    //functions
    symbol_info(string name, string type, string return_type, vector<pair<string, string> > params)
    {
        this->name = name;
        this->type = type;
        this->is_function = true;
        this->return_type = return_type;
        this->parameters = params;
        this->next = NULL;
        this->is_array = false;
    }

    string getname()
    {
        return name;
    }

    string gettype()
    {
        return type;
    }

    string get_symbol_type()
    { 
        return symbol_type; 
    }

    symbol_info *get_next()
    {
        return next; 
    }

    bool get_is_array()
    { 
        return is_array; 
    }

    int get_array_size()
    { 
        return array_size; 
    }

    bool get_is_function()
    { 
        return is_function; 
    }

    string get_return_type()
    { 
        return return_type; 
    }

    vector<pair<string, string> > get_parameters()
    { 
        return parameters; 
    }



    void set_name(string name)
    {
        this->name = name;
    }

    void set_type(string type)
    {
        this->type = type;
    }

    void set_next(symbol_info *next)
    { 
        this->next = next; 
    }

    void set_symbol_type(string symbol_type)
    { 
        this->symbol_type = symbol_type; 
    }

    void set_array_size(int size)
    {
        this->is_array = true;
        this->array_size = size;
    }

    void set_as_function(string return_type, vector<pair<string, string> > params)
    {
        this->is_function = true;
        this->return_type = return_type;
        this->parameters = params;
    }
    // Write necessary functions to set and get the attributes

    ~symbol_info()
    {
        if (next){
            delete next;
        }
    }
};