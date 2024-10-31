#include <iostream>
using namespace std;

void hitungEK(double massa1, double massa2, double kecepatan) {
    double ek = 0.5 * (massa1 + massa2) * kecepatan * kecepatan;
    cout << "Energi Kinetik : " << ek << " Joule";
}

int main() {
    double massa1, massa2, kecepatan;

    cout << "Massa Benda (kg): ";
    cin >> massa1;
    cout << "Massa Sepeda (kg): ";
    cin >> massa2;
    cout << "Kecepatan (m/s): ";
    cin >> kecepatan;

    hitungEK(massa1, massa2, kecepatan);
}