#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath> // Biblioteca para funções matemáticas, como pow, sqrt, etc. (expoente e raiz quadrada)

using namespace std;

int main(){

    double x1, x2, y1, y2, distancia;

    cin >> x1 >> y1 >> x2 >> y2;

    distancia = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    cout << fixed << setprecision(4) << distancia << endl;
    
    return 0;
}