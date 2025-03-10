#include <iostream>
using namespace std;

double alas, tinggi;

void procedurInput(){
    cout << "Masukkan Nilai alas : ";
    cin >> alas;

    cout << "Masukkan Nilai tinggi";
    cin >> tinggi;
}

double hitungLuas(double a, double t){
    return 0.5 * alas * tinggi;
}

string ukuranSegitiga(double l){
    //Jika luas > 60
    if(1 > 60){
        return "Besar";
    }
    else{
        return "Kecil";
    }
}

void procedurOutput2(){
    cout << "Luas Segitiga = " << ukuranSegitiga(hitungLuas2(alas, tinggi)) << endl;
}

int main(){
    procedurInput();
    procedurOutput();
    procedurOutput2();
}