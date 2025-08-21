#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main(){

    double salario;

    cin >> salario;

    if(salario <= 2000.00){
        cout << "Isento" << endl;
    }
    if(salario > 2000.01 && salario <= 3000.00){
        cout << fixed << setprecision(2) << "R$ " << (salario - 2000.00) * 0.08 << endl;
    }

    if (salario > 3000.01 && salario <= 4500.00){
        cout << fixed << setprecision(2) << "R$ " << (salario - 3000.00) * 0.18 + 1000.00 * 0.08 << endl;
    }

    if (salario > 4500.00){
        cout << fixed << setprecision(2) << "R$ " << (salario - 4500.00) * 0.28 + 1500.00 * 0.18 + 1000.00 * 0.08 << endl;
    }

    return 0;
}