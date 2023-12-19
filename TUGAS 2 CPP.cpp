#include <iostream>

using namespace std;

const double PI = 3.14159;

// luas persegi panjang
double hitungLuasPersegiPanjang(double p, double l) {
    return p * l;
}

// luas persegi
double hitungLuasPersegi(double s) {
    return s * s;
}

// luas lingkaran
double hitungLuasLingkaran(double r) {
    return PI * r * r;
}

int main() {
    double p, l, s, r;
    
    cout << "PERHITUNGAN LUAS " << endl;
    cout << "================="<< endl;
    cout << "Masukkan panjang persegi panjang: ";
    cin >> p;

    cout << "Masukkan lebar persegi panjang: ";
    cin >> l;

    cout << "Masukkan panjang sisi persegi: ";
    cin >> s;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;

    double luas_persegi_panjang = hitungLuasPersegiPanjang(p, l);
    double luas_persegi = hitungLuasPersegi(s);
    double luas_lingkaran = hitungLuasLingkaran(r);
    
    cout << "HASIL DARI PERHITUNGAN : " << endl;
   
    cout << "Luas persegi panjang adalah: " << luas_persegi_panjang << endl;
    cout << "Luas persegi adalah: " << luas_persegi << endl;
    cout << "Luas lingkaran adalah: " << luas_lingkaran << endl;

    return 0;
}
