/** Arquivo Arvore.h para o programa do cadastro de pacientes.
*   Quarto trabalho avaliado EEL670 2022.2
*   Aluno: Luis Guilherme Neri Ferreira */

#include <iostream>
#include "Paciente.h"

using namespace std;

#ifndef ARVORE_H
#define ARVORE_H

template <class P>
struct No
{
    P paciente;
    No<P>* esquerda;
    No<P>* direita;
    No<P>* pai;
};

template <class P>
class Arvore
{
    public:
        Arvore() {
            raiz = NULL;
        };

        No<P>* raiz;

        Arvore<P> operator+ (P pac) {
            if (raiz == NULL) {
                raiz = new No<P>;
                raiz->paciente = pac;
                return *this;
            }
            else
                return adiciona(pac, raiz);
        };

        P* operator[] (string nome) {
            return procura(nome, raiz);
        };

        friend ostream& operator<< (ostream& out, Arvore<P> arv) {
            No<P>* no = arv.maisDireita(arv.raiz);

            while(no != NULL) {
                out << no->paciente << endl;
                no = arv.proximoNo(no);
            }

            return out;
        };

    private:
        Arvore<P> adiciona(P pac, No<P>* no) {
            if (pac.getNome() > no->paciente.getNome()) {
                if (no->esquerda == NULL) {
                    no->esquerda = new No<P>;
                    no->esquerda->paciente = pac;
                    no->esquerda->pai = no;
                    return *this;
                }
                else
                    adiciona(pac, no->esquerda);
            }
            else if (pac.getNome() < no->paciente.getNome()) {
                if (no->direita == NULL) {
                    no->direita = new No<P>;
                    no->direita->paciente = pac;
                    no->direita->pai = no;
                    return *this;
                }
                else
                    adiciona(pac, no->direita);
            }

            return *this;
        };

        P* procura(string nome, No<P>* no) {
            if (no == NULL)
                throw runtime_error("Paciente nao encontrado.");

            if (nome == no->paciente.getNome())
                return &no->paciente;

            if (nome > no->paciente.getNome())
                no = no->esquerda;

            else
                no = no->direita;

            return procura(nome, no);
        };

        No<P>* maisDireita(No<P>* no) {
            if (raiz == NULL)
                return NULL;

            while (no->direita != NULL)
                no = no->direita;

            return no;
        };

        No<P>* proximoNo(No<P>* no) {
            if (no->esquerda != NULL)
                return maisDireita(no->esquerda);

            else {
                while (no->pai != NULL && no == no->pai->esquerda)
                    no = no->pai;

                return no->pai;
            }
        };
};

#endif
