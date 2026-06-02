1) Ler um vetor Q de 20 posições (aceitar somente números positivos). Escrever a seguir o valor do maior elemento de Q e a respectiva posição que ele ocupa no vetor.
_____________________________________________________________________________________________________________________________________________________________________________________
  
  #include <iostream>
using namespace std;

int main(){
	int vet[20];
	int maior = 0;
	int sim;
	
	for(int i = 0; i <= 5; i++){
		
		cout << "Me de o numero " << i + 1 << ": " << endl;
		    cin >> vet[i];
		    
		if(vet < 0){
			cout << "ERRO NUMERO NEGATIVO NAO PODE!!! " << endl;
			return 0;
			
		}else{

	    }
	    if(vet[i] > maior){
	    	
	    	maior = vet[i];
	    	sim = i + 1;
	}
		
	}
	
	cout << "O maior numero eh: " << maior << " Sua posicao eh: " << sim << endl;
	
	return 0;
}
