#ifndef STRING_METHODS_H
#define STRING_METHODS_H

#include <iostream>
#include <vector>

class StringMethods{
    public:
        StringMethods();
        std::vector<std::string> split(std::string frase) const;
}; 


#endif