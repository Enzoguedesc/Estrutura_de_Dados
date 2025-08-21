// Façam um programa que leia dois valores e retorne o maior

#include <iostream>
#include <cstdio>

using namespace std;

int main(){ 
    int A, B;

    cin >> A;
    cin >> B;

    if (A > B){
        cout << A << endl;
    }else{
        cout << B << endl;
    }

    return 0;
}