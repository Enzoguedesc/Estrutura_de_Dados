#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int N, maior, posicao;

    cin >> N;
    posicao = 1;
    maior = N; // Inicializa o maior número com o primeiro valor lido (1)
    
    for(int i = 2; i <= 100; i++) {
        cin >> N;
        if (N > maior){
        maior = N; // Atualiza o maior número encontrado
        posicao = i; // Atualiza a posição do maior número encontrado
        }
    }

    cout << maior << endl;
    cout << posicao << endl;

    return 0;
}