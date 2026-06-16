#include <iostream>
using namespace std;

int main() {
    const int REGIOES = 4;
    const int SEMANAS = 5;

    float vendas[REGIOES][SEMANAS];
    float totalRegiao[REGIOES] = {0};
    float totalSemana[SEMANAS] = {0};

    // Leitura da matriz
    cout << "Digite as vendas das 4 regioes nas 5 semanas:\n";

    for (int i = 0; i < REGIOES; i++) {
        cout << "\nRegiao " << i + 1 << ":\n";
        for (int j = 0; j < SEMANAS; j++) {
            cout << "Semana " << j + 1 << ": ";
            cin >> vendas[i][j];

            totalRegiao[i] += vendas[i][j];
            totalSemana[j] += vendas[i][j];
        }
    }

    // 1. Total de vendas por regiao
    cout << "\n=== TOTAL DE VENDAS POR REGIAO ===\n";
    for (int i = 0; i < REGIOES; i++) {
        cout << "Regiao " << i + 1 << ": " << totalRegiao[i] << endl;
    }

    // 2. Semana com menor total de vendas
    int menorSemana = 0;
    for (int j = 1; j < SEMANAS; j++) {
        if (totalSemana[j] < totalSemana[menorSemana]) {
            menorSemana = j;
        }
    }

    cout << "\nSemana com menor total de vendas: "
         << menorSemana + 1
         << " (Total = " << totalSemana[menorSemana] << ")" << endl;

    // 3. Media de vendas das regioes por semana
    cout << "\n=== MEDIA DE VENDAS POR SEMANA ===\n";
    for (int j = 0; j < SEMANAS; j++) {
        float media = totalSemana[j] / REGIOES;
        cout << "Semana " << j + 1 << ": " << media << endl;
    }

    return 0;
}