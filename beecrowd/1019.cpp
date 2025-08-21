#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int N, horas, min, seg;

    cin >> N;

    horas = N / 3600;
    min = (N % 3600) / 60;
    seg = N % 60;

    cout << horas << ":" << min << ":" << seg << endl;

    return 0;
}