#include "StringMethods.h"
#include <iostream>
#include <vector>

StringMethods::StringMethods(){};

std::vector<std::string> StringMethods::split(std::string frase) const{
    std::vector<int> indices;
    indices.push_back(0);
    std::vector<std::string> fraseSplitada;
    for(int i = 0; i < frase.length(); i++){
        if(isblank(frase[i])){
            indices.push_back(i);
        }
    }

    indices.push_back(frase.length());

    for(int i = 0; i < indices.size(); i++){
        if(indices[i] == frase.length()){
            break;
        }else if(i == 0){
            std::string parte = frase.substr(indices[i], indices[i + 1] - indices[i]);
            fraseSplitada.push_back(parte);
        }
        else{
            std::string parte = frase.substr(indices[i] + 1, indices[i + 1] - indices[i] - 1);
            fraseSplitada.push_back(parte);
        }
    }

    return fraseSplitada;
}