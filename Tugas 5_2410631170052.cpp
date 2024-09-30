#include <iostream>
using namespace std;

// Fungsi untuk menghitung gaji pokok
double pokok(int jamKerja) {
    double gajiPokok = 7500;
    if (jamKerja <= 8) {
        return gajiPokok * jamKerja;
    }
    return gajiPokok * 8;
}

// Fungsi untuk menghitung lembur
double lembur(int jamKerja) {
    double gajiPokok = 7500;
    if (jamKerja > 8) {
        return (jamKerja - 8) * (gajiPokok * 1.5);
    }
    return 0;
}

// Fungsi untuk menghitung uang makan
double makan(int jamKerja) {
    if (jamKerja >= 9) {
        return 10000;
    }
    return 0;
}

// Fungsi untuk menghitung uang transport lembur
double transport(int jamKerja) {
    if (jamKerja >= 10) {
        return 13000;
    }
    return 0;
}

// Fungsi utama untuk menghitung gaji harian
int main() {
    string NIP, nama;
    int jamKerja;

    // Input data karyawan
    cout << "Masukkan NIP: ";
    cin >> NIP;
    cout << "Masukkan Nama: ";
    cin >> nama;
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jamKerja;

    // Menghitung komponen gaji
    double gajiPokok = pokok(jamKerja);
    double lemburPay = lembur(jamKerja);
    double uangMakan = makan(jamKerja);
    double uangTransport = transport(jamKerja);

    // Output hasil perhitungan
    cout << "\nNIP: " << NIP;
    cout << "\nNama: " << nama;
    cout << "\nGaji Pokok: Rp. " << gajiPokok;
    cout << "\nLembur: Rp. " << lemburPay;
    cout << "\nUang Makan: Rp. " << uangMakan;
    cout << "\nUang Transport: Rp. " << uangTransport << endl;
}
