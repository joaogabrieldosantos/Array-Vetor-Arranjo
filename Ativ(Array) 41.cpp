Faça uma função que receba uma matriz de números inteiros e retorne a soma das diagonais principais e secundárias da matriz. A diagonal principal é definida pelos elementos onde a linha é igual à coluna, e a diagonal secundária é definida pelos elementos onde a soma da linha com a coluna é igual ao tamanho da matriz menos um.

_____________________________________________

#include <iostream>
using namespace std;

const int TAM = 4;

int somaDiagonais(int matriz[TAM][TAM]) {
    int soma = 0;

    for (int i = 0; i < TAM; i++) {
        soma += matriz[i][i];               // Diagonal principal
        soma += matriz[i][TAM - 1 - i];     // Diagonal secundária
    }

    return soma;
}

int main() {
    int matriz[TAM][TAM];

    cout << "Digite os elementos da matriz 4x4:\n";

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << "\nSoma das diagonais: "
         << somaDiagonais(matriz) << endl;

    return 0;
}