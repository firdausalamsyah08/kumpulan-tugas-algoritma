#include <iostream>
using namespace std;

int main() {
    char pilihan;
    double hargaTiket, totalHarga, potongan, jumlahtiket;
    
    cout << "TIKET KERETA TRAVELOKA" <<endl;
    cout << "======================" <<endl;

    cout << "Pilihan tiket: " <<endl;
    cout << "1 - Ekonomi (100ribu/tiket)" <<endl;
    cout << "2 - Bisnis (200ribu/tiket)" <<endl;
    cout << "3 - Eksekutif (300ribu/tiket)" <<endl;
    cout << "Pilih tiket (1/2/3): ";
    cin >> pilihan;
    cout << "masukan jumlah tiket : ";
    cin >> jumlahtiket;

    switch(pilihan) {
        case '1':
            hargaTiket = 100000*jumlahtiket;
            cout << "ekonomi dengan harga RP.100.000" << endl << jumlahtiket << "harga RP."<<hargaTiket<<endl;
            break;
        case '2':
            hargaTiket = 200000*jumlahtiket;
            cout << "Bisnis dengan harga RP.200.000" << endl<< jumlahtiket << "harga RP."<<hargaTiket<<endl;
            break;
        case '3':
            hargaTiket = 300000*jumlahtiket;
            cout << "Eksekutif dengan harga RP.300.000" << endl<< jumlahtiket << "harga RP."<<hargaTiket<<endl;
            break;
        default:
            cout << "Pilihan anda tidak tersedia:(" <<endl;
            return 0;
    }

    totalHarga = hargaTiket;
    
    if (totalHarga >= 500000) {
        potongan = totalHarga * 10/100;
    } else if (totalHarga >= 300000) {
        potongan = totalHarga * 5/100;
    } else if (totalHarga >= 200000) {
        potongan = totalHarga * 2/100;
    } else {
        potongan = 0;
    }

    totalHarga -= potongan;

    cout << "Harga tiket sebelum diskon: " << hargaTiket << " rupiah" <<endl;
    cout << "Total harga setelah diskon: " << totalHarga << " rupiah" <<endl;

    return 0;
}
