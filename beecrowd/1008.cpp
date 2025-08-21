#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main(){

    int num, hora; 
    double SALARIO_por_HORA, SALARIO;

    cin >> num;
    cin >> hora;
    cin >> SALARIO_por_HORA;

    SALARIO = hora * SALARIO_por_HORA;

    cout << "NUMBER = " << num << endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << SALARIO << endl;

    return 0;

}