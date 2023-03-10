#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;

    cout << "Masukkan bilangan: ";
    cin >> num;

    // Cek bilangan ganjil/genap
    if (num % 2 == 0) {
        cout << num << " adalah bilangan genap." << endl;
    } else {
        cout << num << " adalah bilangan ganjil." << endl;
    }

    // Cek bilangan positif/negatif
    if (num > 0) {
        cout << num << " adalah bilangan positif." << endl;
    } else if (num < 0) {
        cout << num << " adalah bilangan negatif." << endl;
    } else {
        cout << num << " adalah nol." << endl;
    }

    // Cek bilangan prima
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime && num > 1) {
        cout << num << " adalah bilangan prima." << endl;
    } else {
        cout << num << " bukan bilangan prima." << endl;
    }

    return 0;
}
