/** Arquivo main.cpp para o programa do cadastro de pacientes.
*   Quarto trabalho avaliado EEL670 2022.2
*   Aluno: Luis Guilherme Neri Ferreira */

#include "Paciente.h"
#include "PacienteComIdade.h"
#include "PacienteComEmail.h"
#include "Cadastro.h"
#include "Arvore.h"

using namespace std;

int main()
{
    Cadastro<Paciente> cadastroPaciente;
    Cadastro<PacienteComEmail> cadastroPacienteComEmail;
    Cadastro<PacienteComIdade> cadastroPacienteComIdade;

    cout << "\nEntre com o numero correspondente a acao que deseja realizar:"
         << "\n1: Criar um cadastro de pacientes."
         << "\n2: Criar um cadastro de pacientes com email."
         << "\n3: Criar um cadastro de pacientes com idade."
         << endl;
    int escolha;
    cin >> escolha;

    while (true) {
        cout << "\nEntre com o numero correspondente a acao que deseja realizar:"
             << "\n1: Inserir um paciente."
             << "\n2: Buscar um paciente."
             << "\n3: Imprimir todos os pacientes registrados."
             << endl;
        int escolha2;
        cin >> escolha2;

        string nome;

        if (escolha2 == 1) {
            cout << "Nome do paciente: ";
            cin.ignore();
            getline(cin, nome);

            if (escolha == 1)
                cadastroPaciente.insere(Paciente(nome));

            else if (escolha == 2) {
                string email;
                cout << "Email do paciente: ";
                cin >> email;
                cadastroPacienteComEmail.insere(PacienteComEmail(nome, email));
            }

            else if (escolha == 3) {
                int idade;
                cout << "Idade do paciente: ";
                cin >> idade;
                cadastroPacienteComIdade.insere(PacienteComIdade(nome, idade));
            }
        }

        if (escolha2 == 2) {
            cout << "Nome do paciente: ";
            cin.ignore();
            getline(cin, nome);

            try {
                if (escolha == 1)
                    cout << *cadastroPaciente.busca(nome);

                else if (escolha == 2)
                    cout << *cadastroPacienteComEmail.busca(nome);

                else if (escolha == 3)
                    cout << *cadastroPacienteComIdade.busca(nome);
            }
            catch(const exception &e) {
                cerr << "Erro: " << e.what() << endl;
            }
        }

        if (escolha2 == 3) {
            if (escolha == 1)
                cadastroPaciente.imprime();

            else if (escolha == 2)
                cadastroPacienteComEmail.imprime();

            else if (escolha == 3)
                cadastroPacienteComIdade.imprime();
        }

        int escolha3;
        cout << "\nDigite 0 para continuar ou qualquer coisa para sair: ";
        cin >> escolha3;
        if (escolha3 != 0)
            break;

    }

    return 0;
}
