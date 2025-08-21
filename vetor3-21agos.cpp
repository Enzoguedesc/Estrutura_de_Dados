#include <iostream>
#include <cstdio>

using namespace std;

// Declarando o vetor v na função local:
// Possuem um tamanho reduzido 
// Nesse codigo vai dar erro de segmentation fault, pois a memora stack está cheia, nao suporta a quatidade de variaveis declaradas neste codigo

// int main (){
//     int v [1000000000]; // tamanho do vetor

//     for (int i = 0; i < 1000000000; i++) 
//     {
//         v[i] = i * 2; 
//     }
//     for (int i = 0; i < 1000000000; i++)
//     {
//         cout << v[i] << endl;
//     }

//     return 0;
// }




// Declarando o vetor v na funcao global:
// Possuem um tamanho maior, mas ocupam mais memória

 int v [10000000]; // tamanho do vetor 

int main(){
    for (int i = 0; i < 10000000; i++) 
    {
        v[i] = i * 2; 
    }
    for (int i = 0; i < 10000000; i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}

// Explicando as duas formas de fazer o codigo:
// O primeiro codigo usa uma funcao local, onde o vetor tem um tamanho menor, pois ele tem o escopo da funcao, ou seja, ele fica disponivel apenas dentro da funcao, e nao pode ser acessado fora dela.
// O segundo codigo usa uma funcao global, onde o vetor tem um tamanho maior, pois ele fica disponivel fora da funcao, ou seja, ele pode ser acessado dentro e fora da funcao. Ocupando mais memória.