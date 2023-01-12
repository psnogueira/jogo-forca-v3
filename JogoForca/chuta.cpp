#include <iostream>
#include "letraExiste.hpp"
#include "chuta.hpp"


void chuta(std::map<char, bool>& chutou, std::vector<char>& chutes_errados, std::string& palavra_secreta){
    std::cout << "Chute: ";
    char chute;
    std::cin >> chute;

    // * variavel ou & variavel
    // (*variavel) ou variavel->

    chutou[chute] = true;

    if(letra_existe(chute, palavra_secreta)){
        std::cout << "Voce acertou! Seu chute esta na palavra." << std::endl;
    }
    else {
        std::cout << "Voce errou! Seu chute nao esta na palavra." << std::endl;
        chutes_errados.push_back(chute);
    }

    std::cout << std::endl;
}