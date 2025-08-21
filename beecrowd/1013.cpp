#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int a, b, c, maior;

    cin >> a >> b >> c;

    if(a > b){
        maior = a;
    } else {
        maior = b;
    }

    if(c > maior){
        maior = c;
    }

    cout << maior << " eh o maior" << endl;
    
    return 0;
}