#include <iostream>
#include <cstdio>

using namespace std;    

int main(){

    int N,  x, y, z, w, a, b, c;

    cin >> N;

    int notas[7] = {100, 50, 20, 10, 5, 2, 1}; // Valores das notas

    x = N / 100;
    y = (N % 100) / 50;
    z = ((N % 100) % 50) / 20;
    w = (((N % 100) % 50) % 20) / 10;
    a = ((((N % 100) % 50) % 20) % 10) / 5;
    b = (((((N % 100) % 50) % 20) % 10) % 5) / 2;
    c = (((((N % 100) % 50) % 20) % 10) % 5) % 2;

    cout << N << endl;
    cout << x << " nota(s) de R$ 100,00" << endl;
    cout << y << " nota(s) de R$ 50,00" << endl;
    cout << z << " nota(s) de R$ 20,00" << endl;
    cout << w << " nota(s) de R$ 10,00" << endl;
    cout << a << " nota(s) de R$ 5,00" << endl;
    cout << b << " nota(s) de R$ 2,00" << endl;
    cout << c << " nota(s) de R$ 1,00" << endl;

    return 0;
}
