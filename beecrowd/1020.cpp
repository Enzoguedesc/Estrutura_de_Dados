#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int DIAS, anos, mes, dias_do_ano;
    
    cin >> DIAS;
    
    anos = DIAS / 365;
    mes = (DIAS % 365) / 30;
    dias_do_ano = (DIAS % 365) % 30;
    
    cout << anos << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dias_do_ano << " dia(s)" << endl;
    
    return 0;
}