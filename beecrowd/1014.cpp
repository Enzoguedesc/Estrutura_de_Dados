#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main(){

    double KM, L, consumo;

    cin >> KM >> L;

    consumo = KM / L;

    cout << fixed << setprecision(3) << consumo << " km/l" << endl;

    return 0;
}