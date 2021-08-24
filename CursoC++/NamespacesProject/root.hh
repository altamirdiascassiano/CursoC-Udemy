//isso evita declaração dupla de cabeçalhos
#ifndef ROOT_H
#define ROOT_H

//declara o namespace
namespace root {
	class Terminal {
		public:
			void terminal() {
				std::cout << "Minha função membro número - terminal" << "\n";
			}

			void root() {
				std::cout << "Minha função membro número - root" << "\n";
			}
		};
}
#endif 