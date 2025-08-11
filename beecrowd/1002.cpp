#include <cstdio> // #include <stdio.h>
#include <iostream>
#include <iomanip> // Biblioteca para manipulação de formatação de saída, como setprecision e fixed
// #include <cmath> // Biblioteca para funções matemáticas, como pow, sqrt, etc. (expoente e raiz quadrada)


using namespace std;

int main() {
 
    double π = 3.14159, raio;
    cin >> raio;
    
    cout << fixed << setprecision(4) << "A=" << π * raio * raio << endl;

    // printf("o valor= %.4f\n", x);  isso vai impreir o valor com 4 casas decimais em C
    // cout << fixed << setprecision(4) << "Valor = " << x << endl; isso vai imprimir o valor com 4 casas decimais em C++
 
    return 0;
}