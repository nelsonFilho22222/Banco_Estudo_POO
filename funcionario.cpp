#include "funcionario.hpp"


//construtor
Funcionario::Funcionario(Cpf cpf, std::string nome,float salario)
	:Pessoa(cpf, nome),salario(salario)
{
}
std::string Funcionario::recuperaNome() const
{
	return Pessoa::nome;
}
float Funcionario::recuperaSalario() const
{
	return salario;
}