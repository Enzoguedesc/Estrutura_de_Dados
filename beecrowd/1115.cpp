#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int x, y;

    while (true){
        cin >> x >> y;

        if (x > 0 && y > 0){
            cout << "primeiro" << endl;
        }
        if (x < 0 && y > 0){
            cout << "segundo" << endl;
        }
        if (x < 0 && y < 0){
            cout << "terceiro" << endl;
        }
        if (x > 0 && y < 0){
            cout << "quarto" << endl;
        } 
        if(x == 0 || y == 0)
        break;
    }

    return 0;
}