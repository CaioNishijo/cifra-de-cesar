#ifndef CAESAR_CIPHER_H
#define CAESAR_CIPHER_H

#include <iostream>
#include <vector>

class CaesarCipher{
    public:
        CaesarCipher();
        std::vector<std::string> cifrarFrase(std::string frase, int chave) const;
        std::string decifrarFrase(std::string frase, int chave) const;
        void decifrarPorForcaBruta(std::string frase) const;
    private:
        std::string alfabeto;
};

#endif