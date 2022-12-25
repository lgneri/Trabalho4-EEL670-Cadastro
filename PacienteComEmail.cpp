/** Arquivo PacienteComEmail.cpp para o programa do cadastro de pacientes.
*   Quarto trabalho avaliado EEL670 2022.2
*   Aluno: Luis Guilherme Neri Ferreira */

#include "PacienteComEmail.h"

using namespace std;

ostream& operator<< (ostream& out, PacienteComEmail pac) {
    pac.imprime();
    return out;
}

PacienteComEmail::PacienteComEmail(string nome, string email) {
    setNome(nome);
    this->email = email;
}

void PacienteComEmail::imprime() {
    cout << nome << ", Email: " << email;
}
