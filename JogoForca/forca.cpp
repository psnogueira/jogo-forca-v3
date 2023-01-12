#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "naoAcertou.hpp"
#include "letraExiste.hpp"
#include "imprimeCabecalho.hpp"
#include "leArquivo.hpp"
#include "sorteiaPalavra.hpp"
#include "imprimeChutesErrados.hpp"
#include "imprimePalavraSecreta.hpp"
#include "chuta.hpp"
#include "adicionaPalavra.hpp"

using namespace std;

string palavra_secreta;
map<char, bool> chutou;
vector<char> chutes_errados;

int main() {
    imprime_cabecalho();

    palavra_secreta = sorteia_palavra();

    while(nao_acertou(palavra_secreta, chutou) && chutes_errados.size() < 5) {
        imprime_chutes_errados(chutes_errados);

        imprime_palavra_secreta(palavra_secreta, chutou);

        chuta(chutou, chutes_errados, palavra_secreta);
    }
    
    cout << "Fim de Jogo!" << endl;
    cout << "A palavra secreta era: " << palavra_secreta << endl;
    
    if(nao_acertou(palavra_secreta, chutou)){
        cout << "Voce perdeu! Tente novamente!" << endl;
    }
    else{
        cout << "Parabens! Voce acertou a palavra secreta!" << endl;

        cout << "Voce deseja adicionar uma nova palavra? (S/N): " << endl;
        char resposta;
        cin >> resposta;
        if(resposta == 'S'){
            adiciona_palavra();
        }
    }
}