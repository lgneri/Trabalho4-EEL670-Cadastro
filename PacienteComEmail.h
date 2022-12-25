/** Arquivo PacienteComEmail.h para o programa do cadastro de pacientes.
*   Quarto trabalho avaliado EEL670 2022.2
*   Aluno: Luis Guilherme Neri Ferreira */

#include "Paciente.h"

using namespace std;

#ifndef PACIENTECOMEMAIL_H
#define PACIENTECOMEMAIL_H

class PacienteComEmail: public Paciente
{
    public:
        friend ostream& operator<< (ostream&, PacienteComEmail);
        PacienteComEmail() {};
        PacienteComEmail(string, string);
        void imprime();
    private:
        string email;
};

#endif