/** Arquivo Paciente.cpp para o programa do cadastro de pacientes.
*   Quarto trabalho avaliado EEL670 2022.2
*   Aluno: Luis Guilherme Neri Ferreira */

#include "Paciente.h"

using namespace std;

Paciente::Paciente(string nome) {
    setNome(nome);
}

string Paciente::getNome() {
    return nome;
}

void Paciente::setNome(string nome) {
    this->nome = nome;
}

ostream& operator<< (ostream& out, Paciente pac) {
    pac.imprime();
    return out;
}

void Paciente::imprime() {
    cout << nome;
}
