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
