#include <iostream>
using namespace std;


int hitungGajiPokok(int jamKerja) {
    return 7500 * jamKerja;
}

int hitungLembur(int jamKerja) {
    if (jamKerja > 8) {
        return (jamKerja - 8) * 7500 * 1.5;
    }
    return 0;
}

int hitungUangMakan(int jamKerja) {
    if (jamKerja >= 9) {
        return 10000;
    }
    return 0;
}

int hitungUangTransport(int jamKerja) {
    if (jamKerja >= 10) {
        return 13000;
    }
    return 0;
}

int main() {
    string NIP, nama;
    int jamKerja;

    cout << "Masukkan NIP: ";
    cin >> NIP;
    cout << "Masukkan Nama: ";
    cin >> nama;
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jamKerja;

    int gajiPokok = hitungGajiPokok(jamKerja);
    int lembur = hitungLembur(jamKerja);
    int uangMakan = hitungUangMakan(jamKerja);
    int uangTransport = hitungUangTransport(jamKerja);

    cout << "\nNIP: " << NIP << endl;
    cout << "Nama: " << nama << endl;
    cout << "Gaji Pokok: Rp. " << gajiPokok << endl;
    cout << "Lembur: Rp. " << lembur << endl;
    cout << "Uang Makan: Rp. " << uangMakan << endl;
    cout << "Uang Transport: Rp. " << uangTransport << endl;

    return 0;
}
