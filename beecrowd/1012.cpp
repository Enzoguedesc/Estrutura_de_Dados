#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main(){

    double A, B, C, areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;

    cin >> A >> B >> C;

    areaTriangulo = (A * C)/2;
    areaCirculo = 3.14159 * C * C;
    areaTrapezio = (A + B) * C/2;
    areaQuadrado = B * B;
    areaRetangulo = A * B;
    
    cout << fixed << setprecision(3) << "TRIANGULO: " << areaTriangulo << endl;
    
    cout << fixed << setprecision(3) << "CIRCULO: " << areaCirculo << endl;
    
    cout << fixed << setprecision(3) << "TRAPEZIO: " << areaTrapezio << endl;
    
    cout << fixed << setprecision(3) << "QUADRADO: " << areaQuadrado << endl;
    
    cout << fixed << setprecision(3) << "RETANGULO: " << areaRetangulo << endl;

    return 0;
}