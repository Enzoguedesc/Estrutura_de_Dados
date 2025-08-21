#include <iostream>
#include <cstdio>

using namespace std;    

int main(){

    int centavos;
    double N;

    cin >> N;
    centavos = round(N * 100), 2; // Calcula a parte decimal
    
    cout << "NOTAS:" << endl;
    cout << x << " nota(s) de R$ 100,00" << endl;
    cout << y << " nota(s) de R$ 50,00" << endl;
    cout << z << " nota(s) de R$ 20,00" << endl;
    cout << w << " nota(s) de R$ 10,00" << endl;
    cout << a << " nota(s) de R$ 5,00" << endl;
    cout << b << " nota(s) de R$ 2,00" << endl;
    
    cout << "MOEDAS:" << endl;
    cout << c << " moeda(s) de R$ 1,00" << endl;
    cout << d << " moeda(s) de R$ 0,50" << endl;
    cout << e << " moeda(s) de R$ 0,25" << endl;
    cout << f << " moeda(s) de R$ 0,10" << endl;
    cout << g << " moeda(s) de R$ 0,05" << endl;
    cout << h << " moeda(s) de R$ 0,01" << endl;

    return 0;
}

