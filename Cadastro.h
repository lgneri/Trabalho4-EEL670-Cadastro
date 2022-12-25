/** Arquivo Cadastro.h para o programa do cadastro de pacientes.
*   Quarto trabalho avaliado EEL670 2022.2
*   Aluno: Luis Guilherme Neri Ferreira */

#include "Arvore.h"

using namespace std;

#ifndef CADASTRO_H
#define CADASTRO_H

template <class P>
class Cadastro
{
    public:
        void insere(P pac) {
            arvore + pac;
        };

        P* busca(string nome) {
            return arvore[nome];
        };

        void imprime() {
            cout << arvore;
        };

    private:
        Arvore<P> arvore;
};

#endif
