//isso evita declara��o dupla de cabe�alhos
#ifndef ROOT_H
#define ROOT_H

//declara o namespace
namespace root {
	class Terminal {
		public:
			void terminal() {
				std::cout << "Minha fun��o membro n�mero - terminal" << "\n";
			}

			void root() {
				std::cout << "Minha fun��o membro n�mero - root" << "\n";
			}
		};
}
#endif 