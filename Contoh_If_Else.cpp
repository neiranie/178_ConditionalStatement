#include <iostream>
using namespace std;

double alas, tinggi;

void procedurInput(){
    cout << "Masukan Nilai alas : ";
    cin >> alas;

    cout << "Masukan Nilai tinggi : ";
    cin >> tinggi;
}

double hitungLuas2(double a, double t){
    return 0.5 * a * t;
}

string ukuransegitiga(double L){
    if(L > 60) {
        return "Besar";
    }
    else{
        return "Kecil";
    }
}
void procedurOutput2(){
    cout << "Luas Segitiga = " << ukuransegitiga(hitungLuas2(alas, tinggi)) << endl;
}

int main(){
    procedurInput();
    procedurOutput2();
}