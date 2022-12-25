/** Arquivo PacienteComIdade.cpp para o programa do cadastro de pacientes.
*   Quarto trabalho avaliado EEL670 2022.2
*   Aluno: Luis Guilherme Neri Ferreira */

#include "PacienteComIdade.h"

using namespace std;

ostream& operator<< (ostream& out, PacienteComIdade pac) {
    pac.imprime();
    return out;
}

PacienteComIdade::PacienteComIdade(string nome, int idade) {
    setNome(nome);
    this->idade = idade;
}

void PacienteComIdade::imprime() {
    cout << nome << ", Idade: " << to_string(idade);
}
