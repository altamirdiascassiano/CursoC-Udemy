// Templates são utililizados para a parametrização de tipos
// Como exemplo podemos pensar no template  como se fosse o genéricos do C#/Java
#include <iostream>

template <class T>
class MinhaPilha {
	public:
		void mostrar(T array, int max) {
			int i = 0;
			while (i < max) {
				std::cout << "Os elementos do array são: " << array[i] << "\n";
				i++;
			}
		}
};

int main(int argc, char** argv) {
	std::cout << "--------------- STRING ---------------\n";
	MinhaPilha<const std::string*> stackString;
	std::string mArray[] = { "Altamir","Dias", "Cassiano" };
	//para obter quantas posições existe no array, dividi o tamanho total em bytes pela o valor de bytes de um elemento do tipo utilizado no array
	int sizeArray = sizeof(mArray) / sizeof(mArray[0]); 
	stackString.mostrar(mArray, sizeArray);

	std::cout << "--------------- INT ---------------\n";
	MinhaPilha<const int*> stackInt;
	int mArrayInt[] = { 12,54, 98,105,987612};
	int sizeArrayInt = sizeof(mArrayInt) / sizeof(mArrayInt[0]);
	int * pParrayInt = mArrayInt;
	stackInt.mostrar(pParrayInt, sizeArrayInt);

	std::cout << "--------------- CHAR ---------------\n";
	MinhaPilha<char*> stackChar;
	char arrayChar[] = { 'A','B','C','D','e','f','g' };
	int sizeArrayChar = sizeof(arrayChar) / sizeof(arrayChar[0]);
	stackChar.mostrar(arrayChar, sizeArrayChar);
	return 0;
}
