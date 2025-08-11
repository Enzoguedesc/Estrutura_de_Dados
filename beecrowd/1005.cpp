#include <iostream>
#include <cstdio>
#include <iomanip> // Biblioteca para manipulação de formatação de saída, como setprecision e fixed

using namespace std;

int main(){

    double A, B, MEDIA;

    cin >> A;
    cin >> B;
    MEDIA = (A * 3.5 + B * 7.5) / 11;

    cout << fixed << setprecision(5) << "MEDIA = " << MEDIA << endl;

    return 0;
}
// A média ponderada é calculada com os pesos 3.5 e 7.5 para A e B, respectivamente.
// O resultado é impresso com 5 casas decimais de precisão.
// A função setprecision é usada para definir a precisão da saída, e fixed garante que o número seja impresso em notação decimal fixa.