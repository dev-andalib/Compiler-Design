#include<bits/stdc++.h>
using namespace std;


// we are creating objects of symbol_info so that we can store the ids in the compiler symbol table
class symbol_info
{
private: // all the attributes are private
    string name; // stores actual text line x of int x
    string type; // stores the type x is as a token defined in lex file, like "ID" or "CONST_INT"

    string ID_type; //identy whether it is var type,  arr type or function? so tells us role of ID
    string var_type; // (int/float/void/...) what type of data does it store
    int array_size; // to store the size of the array where defined
    vector<string> param_type; // para type of func
    vector<string> param_name; // para name of func

    // vector<string> is a dynamic array of strings
    
public:
    symbol_info(string name, string type)
    {
        this->name = name;
        this->type = type; // not include all the private attributes as the whole declaration too lengthy
        this->array_size = -1;
    }

    /* Write necessary functions to set and 
       get the attributes as they are private and cannot be directly manipulated  */


    // GET FUNCTIONS
    string get_name()
    {
        return name;
    }
    string get_type()
    {
        return type;
    }
    string get_ID_type()
    {
        return ID_type;
    }
    string get_var_type()
    {
        return var_type;
    }
    vector<string> get_param_type()
    {
        return param_type;
    }
    vector<string> get_param_name()
    {
        return param_name;
    }
    int get_arr_size()
    {
        return array_size;
    }

    // SET FUNCTIONS
    void set_name(string name)
    {
        this->name = name;
    }
    void set_type(string type)
    {
        this->type = type;
    }
    void set_ID_type( string id_type)
    {
        this->ID_type = id_type;
    }
    void set_var_type(string var_type)
    {
        this->var_type = var_type;
    }
    void set_param_type(vector<string> param_type)
    {
        this->param_type = param_type;
    }
    void set_param_name(vector<string> param_name)
    {
        this->param_name = param_name;
    }
    void set_arr_size (int size)
    {
        this->array_size = size;
    }

    ~symbol_info()
    {
        param_type.clear();
        param_name.clear(); // to free the array and make them empty
    }
};