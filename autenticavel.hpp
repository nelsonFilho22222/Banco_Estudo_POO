#pragma once
#include <string>
class Autenticavel
{
public:
    Autenticavel(std::string senha);
	bool autentica(std::string senha);
private:
	std::string senha;
};

