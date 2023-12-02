#include <iostream>
#include <string>
#include "conta.hpp"
#include "titular.hpp"
#include "funcionario.hpp"
#include "contaPoupanca.hpp"
#include "contaCorrente.hpp"
using namespace std;

void exibeSaldo(const Conta& conta)
{
	cout << "O saldo da conta "<< " e : " << conta.recuperaSaldo() << endl;
}

void realizaSaque(Conta& conta) {
	return  conta.sacar(200);
}

void fazLogin(Autenticavel& alguem, string senha)
{
	if (alguem.autentica(senha)) {
		cout << "Longin realizado com sucesso" << endl;
	}
	else {
		cout << "Senha invalida" << endl;
	}
}

int main()
{
	Titular titularV(Cpf("123.456.789-10"), "Vinicios", "UmaSenha");
	contaPoupanca conta("123456", titularV);
	conta.depositar(500);
	realizaSaque(conta);

	Titular titularM(Cpf("987.654.321-19"), "Marcao", "OutraSenha");
	contaCorrente outraConta("654321", titularM);
	outraConta.depositar(300);
	
	outraConta.transferePara(conta, 250);

	

	cout << "Saldo PP conta " << conta.recuperaSaldo()  << endl;
	cout << "Saldo CC outraConta " << outraConta.recuperaSaldo() << endl;
	//exibeSaldo(conta);
	cout << "Numero de contas: " << Conta::recuperaNumeroDeContas() << endl;
	

	
	return 0;
}