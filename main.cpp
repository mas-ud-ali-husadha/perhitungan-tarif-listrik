#include <iostream>

using namespace std;

// Fungsi iteratif untuk menghitung tarif listrik
int hitungTarifIteratif(int kWh) {
    int tarif = 0;
    for (int i = 1; i <= kWh; i++) {
        if (i <= 50) tarif += 1000;
        else if (i <= 100) tarif += 1500;
        else tarif += 2000;
    }
    return tarif;
}

// Fungsi rekursif untuk menghitung tarif listrik
int hitungTarifRekursif(int kWh) {
    if (kWh == 0) return 0;
    if (kWh <= 50) return 1000 + hitungTarifRekursif(kWh - 1);
    if (kWh <= 100) return 1500 + hitungTarifRekursif(kWh - 1);
    return 2000 + hitungTarifRekursif(kWh - 1);
}

int main() {
    int pilihan, kWh;

    cout << "=== Menu Perhitungan Tarif Listrik ===" << endl;
    cout << "1. Hitung tarif secara iteratif" << endl;
    cout << "2. Hitung tarif secara rekursif" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilih menu (1-3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1: {
            cout << "Masukkan jumlah kWh: ";
            cin >> kWh;

            int tarif = hitungTarifIteratif(kWh);

            cout << "Tarif listrik: Rp. " << tarif << endl;
            break;
        }

        case 2: {
            cout << "Masukkan jumlah kWh: ";
            cin >> kWh;

            int tarif = hitungTarifRekursif(kWh);

            cout << "Tarif listrik: Rp. " << tarif << endl;
            break;
        }
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
    }

    cout << endl;


    return 0;
}
