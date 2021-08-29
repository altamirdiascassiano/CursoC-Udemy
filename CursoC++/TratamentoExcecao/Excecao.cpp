#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>

void funcao(int*, int);
float division(float, float);

int main(int argc, char **argv) {

	int num = 10;
	int* ptr = &num;

	try {
		std::vector<int> vInt(5);

		
		std::cout << "Resultado da divis�o �:" << division(10, 3) << "\n";

		// Erro de regra de neg�cio
		std::cout << "Resultado da divis�o �:" << division(10, 100) << "\n";


		//Divis�o por zero
		std::cout << "Resultado da divis�o �:" << division(10, 0) << "\n";


		//tentativa de inser��o fora do range
		vInt.at(6) = 6;

		funcao(ptr, num);
		int zero = 0;
		int result = 10 / zero;
		funcao(NULL, num);
		funcao(ptr, num);
	}
	catch (const std::runtime_error& rex)
	{
		std::cout << "Runtime error: " << rex.what() << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cout << "Error occurred: " << ex.what() << std::endl;
	}
	catch (std::string exMessage)
	{
		std::cout << exMessage << std::endl;
	}
	catch (int errorCode)
	{
		std::cout <<"Error code= "<< std::to_string(errorCode) << std::endl;
	}
	catch (...)
	{
		std::cout << "Unknown failure occurred. Possible memory corruption" << std::endl;
	}
	system("PAUSE");
	return 0;
}

void funcao(int* ptr, int numero) {
	if (ptr == NULL || numero == 0) {
		throw ptr;
		//std::cout << "Ocorreu um erro na fun��o";
	}
	else {
		std::cout << "O ponteiro �: " << *ptr << " e o n�mero �: " << numero << "\n";
	}
}

float division(float val, float divisor) {
	if (divisor == 0) {
		std::string erro = "N�o � poss�vel dividir o n�mero " + std::to_string(val) + " por zero. \n";
		throw std::string(erro);
	}
	else if (divisor > val) {
		throw 2021002021;
	}
	return val / divisor;
}
