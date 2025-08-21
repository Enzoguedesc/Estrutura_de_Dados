#include <iostream>
#include <cstdio>

using namespace std;

// int dobro(int x){
//     return 2*x;
// }

bool par(int x){    // Verifica se o número é par
    if(x % 2 == 0){
        return true;
    }
    return false;
}


// Funçao recursiva
int fatorial(int x){
    if( x == 0){
        return 1;
    }
    return x * fatorial(x-1);
} // 5! = 5 * 4!


int main(){
    // cout << dobro(5) << endl; // Chamada de função para calcular o dobro de 5

    cout << fatorial(5) << endl; // Chamada de função para calcular o fatorial de 5

    return 0;
}

// tipo do retorno nomeDaFuncao (parametros para seus repectivos tipos)

// A função dobro recebe um número inteiro x como parâmetro e retorna o dobro desse número.
// A linha cout << dobro(5) << endl; chama a função dobro com o argumento 5 e imprime o resultado na tela.