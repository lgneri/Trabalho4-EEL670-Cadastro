/** Arquivo PacienteComIdade.h para o programa do cadastro de pacientes.
*   Quarto trabalho avaliado EEL670 2022.2
*   Aluno: Luis Guilherme Neri Ferreira */

#include "Paciente.h"

using namespace std;

#ifndef PACIENTECOMIDADE_H
#define PACIENTECOMIDADE_H

class PacienteComIdade: public Paciente
{
    public:
        friend ostream& operator<< (ostream&, PacienteComIdade);
        PacienteComIdade() {};
        PacienteComIdade(string, int);
        void imprime();
    private:
        int idade;
};

#endif