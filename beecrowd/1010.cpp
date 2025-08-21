#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main(){

    int x, y, z, w;
    double valor1, valor2, ValorTotal;

    cin >> x >> y >> valor1; // Lê o código do produto, a quantidade e o valor unitário do primeiro produto
    cin >> z >> w >> valor2;

    ValorTotal = (y * valor1) + (w * valor2); // Calcula o valor total da compra

    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << ValorTotal << endl;

    return 0;
}