#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main(){

    int temp_hora, km_litro;
    double km, litros;

    cin >> temp_hora >> km_litro;

    km = km_litro * temp_hora;
    
    litros = km / 12;
    
    cout << fixed << setprecision(3) << litros << endl;


    return 0;
}