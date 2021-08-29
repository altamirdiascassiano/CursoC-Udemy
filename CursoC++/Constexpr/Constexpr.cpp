#include <iostream>

long fib(int n) {
	return (n <= 1) ? n : fib(n - 1) + fib(n - 2);
}

constexpr long fibConstexpr(int n) {
	return (n <= 1) ? n : fib(n - 1) + fib(n - 2);
}

int main(int argc, char **argv) {
	long int valorFib = fib(30);
	long int valorFib2 = fib(30);
	std::cout << "O Fibonacci de 30 é " << valorFib << "\t" << valorFib2 << "\n";
	return 0;
}