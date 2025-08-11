#include <iostream>
#include <cstdio>

using namespace std;

// int dobro(int x){
//     return 2*x;
// }

// Funçao recursiva
int fatorial(int x){
    if( x == 0){
        return 1;
    }
    return x * fatorial(x-1);
}

int main(){
    // cout << dobro(5) << endl; // Chamada de função para calcular o dobro de 5

    cout << fatorial(5) << endl; // Chamada de função para calcular o fatorial de 5

    return 0;
}

// A função dobro recebe um número inteiro x como parâmetro e retorna o dobro desse número.
// A linha cout << dobro(5) << endl; chama a função dobro com o argumento 5 e imprime o resultado na tela.