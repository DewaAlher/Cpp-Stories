/*
Nama = Dede Wahyu Aldiana
Kelas = IT102
*/

#include <iostream>

using namespace std;

int main()
{
    int pilihan, uang;
    char jawaban;

    do {
        cout << "Silahkan pilih (1-3) jumlah uang yang akan anda ambil: " << endl;
        cout << "1. 100.000" << endl;
        cout << "2. 250.000" << endl;
        cout << "3. 500.000" << endl;
        cin >> pilihan;

        switch(pilihan) {
            case 1:
                uang = 100000;
                break;
            case 2:
                uang = 250000;
                break;
            case 3:
                uang = 500000;
                break;
            default:
                cout << "Pilihan tidak valid" << endl;
                continue;
        }

        cout << "Silahkan ambil uang " << uang << " anda" << endl;
        cout << "Apakah anda ingin melakukan transaksi lagi (Y/N): ";
        cin >> jawaban;

    } while (jawaban == 'Y' || jawaban == 'y');

    cout << "Terima kasih telah menggunakan ATM ini." << endl;

    return 0;
}
