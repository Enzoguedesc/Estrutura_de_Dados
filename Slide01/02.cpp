/*
Façam um programa que leia um valor N e em seguida leia N valores e informe o maior, 
menor e as respectivas posições
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int N, valor, maior, menor, posicaoMaior, posicaoMenor;
    cin >> N;

    if (N <= 0) {
        cout << "A quantidade de valores (N) deve ser um numero positivo." << endl;
        return 1; // Termina o programa se N não for válido
    }

    // Lê o primeiro valor para inicializar as variáveis
    cin >> valor;
    maior = valor;
    menor = valor;
    posicaoMaior = 1;
    posicaoMenor = 1;

    // Loop para ler os N-1 valores restantes
    for (int i = 2; i <= N; i++) {
        cin >> valor;

        if (valor > maior) {
            maior = valor;
            posicaoMaior = i;
        }

        if (valor < menor) {
            menor = valor;
            posicaoMenor = i;
        }
    }

    cout << "Maior valor: " << maior << " na posicao " << posicaoMaior << endl;
    cout << "Menor valor: " << menor << " na posicao " << posicaoMenor<< endl;

    return 0;
}
