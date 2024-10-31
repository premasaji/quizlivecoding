#include <iostream>

using namespace std;

void main() {
    double beratApel, beratJeruk, beratSemangka;
    const double hargaApel_perKg = 24000;
    const double hargaJeruk_perKg = 16250;
    const double hargaSemangka_perKg = 8000;

    cout << "Masukkan berat apel (kg): ";
    cin >> beratApel;
    cout << "Masukkan berat jeruk (kg): ";
    cin >> beratJeruk;
    cout << "Masukkan berat semangka (kg): ";
    cin >> beratSemangka;

    double totalBerat = beratApel + beratJeruk + beratSemangka;
    double totalHarga = (beratApel * hargaApel_perKg) + (beratJeruk * hargaJeruk_perKg) + (beratSemangka * hargaSemangka_perKg);
    double diskon = 0;
    if (totalBerat > 10) {
        diskon = 0.05;
    }
    else if (totalBerat > 8) {
        diskon = 0.02;
    }
    double totalHarga_setelahDiskon = totalHarga * (1 - diskon);
    cout << "Total yang harus dibayar Okarun: Rp " << totalHarga_setelahDiskon << endl;
}