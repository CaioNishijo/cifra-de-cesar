#include "CaesarCipher.h"
#include "StringMethods.h"
#include <iostream>
#include <vector>

CaesarCipher::CaesarCipher() : alfabeto("abcdefghijklmnopqrstuvwxyz"){}

std::vector<std::string> CaesarCipher::cifrarFrase(std::string frase, int chave) const{
    StringMethods str;

    std::string cifradoUm = alfabeto.substr(chave, 26 - chave);
    std::string cifradoDois = alfabeto.substr(0, chave);
    std::string cifrado = cifradoUm.append(cifradoDois);

    std::vector<std::string> fraseCripto;
    std::vector<std::string> palavras = str.split(frase);

    for(int i = 0; i < palavras.size(); i++){
        char cifra[palavras[i].length()];

        for(int j = 0; j < palavras[i].length(); j++){
            int pos = alfabeto.find(palavras[i][j]);
            cifra[j] = cifrado[pos];
        }

        cifra[palavras[i].length()] = '\0';

        std::string mensagem(cifra);
        fraseCripto.push_back(mensagem);
    }


    return fraseCripto;
} 

std::string CaesarCipher::decifrarFrase(std::string frase, int chave) const{
    std::string cifradoUm = alfabeto.substr(chave, 26 - chave);
    std::string cifradoDois = alfabeto.substr(0, chave);
    std::string cifrado = cifradoUm.append(cifradoDois);

    char cifra[frase.length()];

    for(int i = 0; i < frase.length(); i++){
        int pos = cifrado.find(frase[i]);
        cifra[i] = alfabeto[pos];
    }

    std::string mensagem(cifra);

    return mensagem;
}

void CaesarCipher::decifrarPorForcaBruta(std::string frase) const{
    for(int i = 0; i < 25; i++){
        std::string cifradoUm = alfabeto.substr(i);
        std::string cifradoDois = alfabeto.substr(0, i);
        std::string cifrado = cifradoUm.append(cifradoDois);

        char cifra[frase.length()];

        for(int j = 0; j < frase.length(); j++){
            int pos = cifrado.find(frase[j]);
            cifra[j] = alfabeto[pos];
        }

        std::string mensagem(cifra);

        std::cout << mensagem << " chave: " << i << std::endl;
    }
}