#include <iostream>
using namespace std;


float luasLingkaran (float r){
    return 3.14 * r * r;
}

float kelilingLingkaran (float r){
    return 2 * 3.14 * r;
}

int main(){
    float jari2;
    cout << "Masukan Jari-jari : ";
    cin >> jari2;
    cout << "Luas lingkaran adalah " << luasLingkaran(jari2)<<endl;
    cout << "Keliling lingkaran adalah " << kelilingLingkaran(jari2);
    return 0;
}