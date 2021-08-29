#include <iostream>
#include <string>

enum class Cores {
	color_blue,
	color_purple
};

enum class Frutas {
	laranja,
	pessego,
	banana,
	uva
};

static const char* enum_str_frutas[] = { "laranja", "pessego", "banana", "uva" };

int main(int argc, char** argv) {
	Cores cores{ Cores::color_blue };
	Frutas frutas{ Frutas::laranja };


	std::cout << "O número de cores é: " << static_cast<int>(cores) << '\n';
	std::cout << "Fruta: " << enum_str_frutas[static_cast<int>(Frutas::uva)] << '\n';



	return 0;
}

