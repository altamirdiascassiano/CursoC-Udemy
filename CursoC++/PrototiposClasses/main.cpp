//#include <iostream>
#include "Exemplo.hh"

int main(int argc, char** argv) {
	int valorQualquer = 30;
	Exemplo exemplo;
	Exemplo exemploComConstrutor(10, &valorQualquer);
	return 0;
}
