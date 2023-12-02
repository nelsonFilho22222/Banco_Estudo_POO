#include "pessoa.hpp"
#include <iostream>

//construtor
Pessoa::Pessoa(Cpf cpf, std::string nome)
	:cpf(cpf),nome(nome)
{
	verificaTamanhoDoNome();
}
//metodos
void Pessoa::verificaTamanhoDoNome()
{
	if (nome.size() < 5) {
		std::cout << "deu erro" << std::endl;
		exit(1);
	}
}