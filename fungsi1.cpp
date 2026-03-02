#include <iostream>
using namespace std;

float Phi = 3.14159

//prosedur input
void Input(float &r0
    cout <<"masukkan jarijari: ";
    cin >> r;
}

//fungsi menghitung luas
float hitungluas(float r) {
    return Phi * r * r;
}

//output
void Output(float luas) {
    cout <<"LuasLingkaran = " << luas << endl;
}

int main(){
    float r, luas;

    Input(r);
    luas = hitungluas(r);
    Output(luas);

    return 0;
}