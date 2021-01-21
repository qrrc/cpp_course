#ifndef FUNCTIONS_H
#define FUNCTIONS_H

namespace my_functions{
    template <class var_type> 
    var_type max(var_type a, var_type b){
        if(a>b){
            return a;
        } else {
            return b;
        }
    }
    
    template <class var_type> 
    var_type min(var_type a, var_type b){
        if(a<b){
            return a;
        } else {
            return b;
        }
    }
}

#endif

