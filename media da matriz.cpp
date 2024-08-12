/*
Dado o código abaixo:
1) qual a soma dos elementos da matriz gerada? 112
2) qual a média dos elementos da matriz gerada? 4,48
3) qual o maior elemento da matriz gerada? 8
4) qual a soma dos elementos da diagonal principal da matriz gerada? 29
5) qual a soma dos elementos da primeira linha da matriz gerada? 15
6) qual a soma dos elementos da última coluna da matriz gerada? 29
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define TAMANHO 5

int main() {
    system("cls");
    int matriz[TAMANHO][TAMANHO];

    srand(time(NULL));
    int soma = 0;

    // Preenchendo a matriz e calculando a soma dos elementos
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            matriz[i][j] = rand() % 10;
            soma += matriz[i][j];
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    float media = static_cast<float>(soma) / (TAMANHO * TAMANHO);
    cout << "Media dos elementos: " << media << endl;

    return 0;
}