#include <iostream>
using namespace std;

double luas, alas, tinggi;

void procedurInput(){
    cout << "Masukkan Nilai alas : ";
    cin >> alas;

    cout << "Masukkan Nilai tinggi";
    cin >> tinggi;
}

void procedurHitungLuas(){
    luas = 0.5 * alas * tinggi;
}

void procedurOutput(){
    cout << "Luas Segitiga = " << luas << endl;
}

int main(){
    procedurInput();
    procedurHitungLuas();
    procedurOutput();
}
