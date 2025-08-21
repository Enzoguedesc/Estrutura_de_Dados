#include <iostream>
#include <cstdio>


using namespace std;

int main(){

    int distancia, min;
    
    cin >> distancia;

    min = (distancia * 120) / 60;

    cout << min << " minutos" << endl;

    return 0;
}