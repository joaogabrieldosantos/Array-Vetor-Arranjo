#include <iostream>
using namespace std;

int main(){
float notas[4];

for(int i = 0; i < 4; i++){
	cout << "Informe a nota " << i+1 << ": ";
	cin >> notas[i];
	
	float soma;
	
	soma = notas[0] + notas[1] + notas[2] + notas[3];
	
	cout << soma << endl;
	
}
return 0;

}

______________________________/0/_____________________________________ /0/___________________________________

#include <iostream>
using namespace std;

int main(){
float * notas;
int n;
int soma = 0;

    cout << "Me informe quantas notas: " << endl;
    cin >> n;
    
    notas = new float [n];
    
for (int i = 0; i < n; i++){
	
    
	cout << "Sua Nota " << i+1 << ": ";
	
	cin >> notas[i];
	
	cout << notas[i] << endl;
	
    soma = soma + notas[i];
	
	}
	
	float div = soma/ n;
	
	cout << div << endl;
	
return 0;
}
