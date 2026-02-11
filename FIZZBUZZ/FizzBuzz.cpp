/*
 * Escribe un programa que muestre por consola (con un print) los
 * números de 1 a 100 (ambos incluidos y con un salto de línea entre
 * cada impresión), sustituyendo los siguientes:
 * - Múltiplos de 3 por la palabra "fizz".
 * - Múltiplos de 5 por la palabra "buzz".
 * - Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
 */

#include <iostream>

int main (){
	std::cout << "\nBienvenido al programa de FizzBuzz" << std::endl;
	
	for(int i = 1;i <= 100; i++){
		if(i % 3 == 0 & i % 5 == 0){
		std::cout << "\nFizzBuzz con los multilos de 3 y 5\t" << i << std::endl;
		}else if(i % 3 == 0){
		std::cout << "\nFizz para los multiplos de 3\t" << i << std::endl;
		}else if(i % 5 == 0){
		std::cout << "\nBuzz para los multiplos de 5\t" << i << std::endl;
		}
	
	}
	return 0;
}
