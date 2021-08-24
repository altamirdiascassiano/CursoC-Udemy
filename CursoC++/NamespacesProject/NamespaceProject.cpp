#include <iostream>
#include "root.hh"
//exclui a necessidade de usar o prefico root::
using namespace root;

int main(int argc, char** argv) {	
	//exemplo sem using
	root::Terminal term;
	term.terminal();

	//exemplo com using
	Terminal t2;
	t2.root();
	return 0;
}