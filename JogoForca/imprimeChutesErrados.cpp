#include <iostream>
#include "imprimeChutesErrados.hpp"

void imprime_chutes_errados(const std::vector<char>& chutes_errados){
    std::cout << "Chutes Errados: ";
    for(char letra : chutes_errados){
        std::cout << letra << " ";
    }
    std::cout << std::endl;
}