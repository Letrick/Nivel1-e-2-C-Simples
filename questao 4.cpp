#include<iostream>

int main () {
	
	int numero1,numero2, soma;
	
	std::cout << "Digite o primeiro numero: ";
	std::cin  >> numero1;
	std::cout << "Digite o segundo numero: ";
	std::cin  >> numero2;
	
	soma = numero1 + numero2;
	if(soma > 20){
	soma = numero1 + numero2;

	std::cout << soma + 8;
		
		
	}
	else if(soma <= 20){
	std::cout << soma - 5;
		
	}

	
}