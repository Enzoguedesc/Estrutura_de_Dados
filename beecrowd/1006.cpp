#include <iostream>
#include <cstdio>
#include <iomanip> // Biblioteca para manipulação de formatação de saída, como setprecision e fixed

using namespace std;
int main(){

    double A, B, C, MEDIA;

    cin >> A;
    cin >> B;
    cin >> C;
    MEDIA = (A * 2 + B * 3 + C * 5) / 10;

    cout << fixed << setprecision(1) << "MEDIA = " << MEDIA << endl;

    return 0;

}