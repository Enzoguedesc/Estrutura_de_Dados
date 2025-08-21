#include <iostream>
#include <cstdio>

using namespace std;

int fat[1000]; // tamanho do vetor
int fatorial_ineficiente(int x){
    int fat = 1; // Temos que inicializar o fatorial como 1, pois 0! = 1 e 1! = 1
    for(int i = 1; i <= x ; i++){  // Começamos de 1, pois 0! = 1
        fat = fat * i; // fatorial de x é o produto de todos os números de 1 até x
    } 
    return fat; // Retorna o fatorial calculado
}

void fatorial_eficiente(int N){
    fat[0] = 1; // Inicializa o primeiro elemento do vetor como 1, pois 0! = 1
    for(int i = 1; i <= N; i++){  
        fat[i] = i * fat[i-1]; // fatorial de i é i vezes o fatorial de i-1
    }
}

// fat = vetor
int main(){
    int N; 
    cin >> N;
    fatorial_eficiente(N); // Chama a função para preencher o vetor com os fatoriais de 0 até N
    cout << fat[N] << endl; // Imprime o fatorial de N armazenado no vetor

    return 0;
}

// Tive que criar o vetor fora da funcao main, pois se eu criar dentro da função, o vetor só existirá dentro do escopo da função e não poderá ser acessado fora dela.
// A função fatorial_eficiente calcula o fatorial de 0 até N e armazena os resultados no vetor fat, permitindo acesso rápido aos valores já calculados.
// O vetor fat é usado para armazenar os valores do fatorial de forma eficiente, evitando cálculos repetidos.
// A função fatorial_ineficiente calcula o fatorial de x de forma ineficiente, recalculando o fatorial a cada chamada.
// A função fatorial_ineficiente é menos eficiente, pois recalcula o fatorial a cada chamada, enquanto a fatorial_eficiente usa um vetor para armazenar os resultados já calculados.
