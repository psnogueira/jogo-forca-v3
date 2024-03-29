#include <iostream>
#include "imprimePalavraSecreta.hpp"

void imprime_palavra_secreta(std::string& palavra_secreta, const std::map<char, bool>& chutou){
    for(char letra : palavra_secreta){
        if(chutou.find(letra) != chutou.end() && chutou.at(letra)) {
            std::cout << letra << " ";
        }
        else{
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}