/*
Nama = Dede Wahyu Aldiana
Kelas = IT102

*\
#include <iostream>

using namespace std;

int main() {
    char repeat = 'Y';

    while (repeat == 'Y' || repeat == 'y') {
        int rows;
        cout << "Jumlah baris? ";
        cin >> rows;

        if (rows % 2 == 0) {
            cout << "Jumlah baris harus bilangan ganjil." << endl;
            continue;
        }

        cout << "Bintang(" << rows << "):" << endl;

        int mid_row = rows / 2;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rows; j++) {
                if (i == mid_row || j == mid_row || i == j || i + j == rows - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }

        cout << "Apakah anda ingin mengulang Program (Y/N): ";
        cin >> repeat;
    }

    cout << "Terima kasih telah menggunakan Program ini." << endl;

    return 0;
}
