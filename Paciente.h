/** Arquivo Paciente.h para o programa do cadastro de pacientes.
*   Quarto trabalho avaliado EEL670 2022.2
*   Aluno: Luis Guilherme Neri Ferreira */

#include <iostream>
#include <string>

using namespace std;

#ifndef PACIENTE_H
#define PACIENTE_H

class Paciente
{
    public:
        friend ostream& operator<<(ostream&, Paciente);
        Paciente() {};
        Paciente(string);
        string getNome();
        void setNome(string);
        virtual void imprime();
    protected:
        string nome;
};

#endif
