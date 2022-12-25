# Arquivo makefile para o programa do cadastro de pacientes.
# Quarto trabalho avaliado EEL670 2022.2
# Aluno: Luis Guilherme Neri Ferreira

CPP = g++
CPPFLAGS = -Wall -std=c++11

all:
	$(CPP) $(CPPFLAGS) -o cadastro main.cpp Paciente.cpp PacienteComEmail.cpp PacienteComIdade.cpp

clean:
	rm cadastro