1) Faça um programa que cria um vetor com 5 elementos inteiros, lê 5 números do teclado, armazena os números no vetor e imprime o vetor na ordem inversa.
_____________________________________________________________________________________________________________________________________________________________________________

#include <iostream>
using namespace std;

int main(){
	int vet[5];
	
	for (int i = 0; i < 5; i++){
		cout << "Digite o numero " << i + 1 << ": " << endl;
		cin >> vet[i];
		
	}
	
	cout << "Agora modificando para a ordem inversa! " << endl;
	
	for (int j = 4; j >= 0; j--){
		cout << vet[j] << endl;
	}
	
	return 0;
	
}
