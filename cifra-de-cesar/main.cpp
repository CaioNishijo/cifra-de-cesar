#include "CaesarCipher.h"
#include <iostream>
#include <vector>

int main(){
    
    CaesarCipher obj;
    std::vector<std::string> vetor = obj.decifrarFrase("rl vrx fdlr", 3);
    for(int i = 0; i < vetor.size(); i++){
        std::cout << vetor[i] << std::endl;
    }

    return 0;
}
