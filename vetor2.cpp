#include <iostream>
#include <cstdio>

using namespace std;

// Vamos fazer agora com Fibonacci

// RECURSIVO

// int fibo_recursivo(int x){
//     if (x <= 1){
//         return 1; // Temos que inicializar o Fibonacci como 1, pois fibo(0) = 1 e fibo(1) = 1
//     }
//     return fibo_recursivo(x-1) + fibo_recursivo(x-2); // fibo de x é a soma dos dois anteriores
// }

// int main(){
//     int x;
//     cin >> x;
//     cout << fibo_recursivo(x) << endl; // Chama a função para calcular o Fibonacci de x
//     return 0;
// }

// OU


// INTERATIVO

long long int fibo[1000]; // tamanho do vetor 

void fibo_efic(int N){
    fibo[0] = 1; // Inicializa o primeiro elemento do vetor como 1, pois fibo(0) = 1
    fibo[1] = 1; // Inicializa o segundo elemento do vetor como 1, pois fibo(1) = 1
    for(int i = 2; i <= N; i++){   // i = 2 pois já inicializamos os dois primeiros valores
        fibo[i] = fibo[i-1] + fibo[i-2]; // fibo de i é a soma dos dois anteriores
    }
    // return fibo[N]; // Retorna o Fibonacci calculado
}

int main(){
    int N,M;
    fibo_efic(1000);
    cin >> M; // Lê dois valores, mas só usaremos N
    while(M--){
        cin >> N; // Lê o valor de N
        cout << fibo[N] << endl; // Chama a função para calcular o Fibonacci de N
    }

    return 0;
}