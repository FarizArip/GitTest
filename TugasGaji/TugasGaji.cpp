#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nama,didik;
    char jabat;
    int jam=0;
    long tunjab = 0,tundik = 0,hon = 0;
    cout << "PROGRAM HITUNG GAJI KARYAWAN" << endl;
    cout << endl;
    cout << "Nama Karyawan: "; getline(cin, nama);
    cout << " Golongan Jabatan : "; cin >> jabat; cin.ignore();
    cout << " Pendidikan       : "; getline(cin, didik);
    cout << " Jumlah jam kerja : "; cin >> jam;
    switch (jabat) {
        case '1':
            tunjab = 300000 * 0.05;
            break;
        case '2':
            tunjab = 300000 * 0.1;
            break;
        case '3':
            tunjab = 300000 * 0.15;
            break;
        default:
            tunjab;
            break;
        }
    if (didik == "SMA" || didik == "sma") {
        tundik = 300000 * 0.025;
    }
    else if (didik == "D1" || didik == "d1") {
        tundik = 300000 * 0.05;
    }
    else if (didik == "D3" || didik == "d3") {
        tundik = 300000 * 0.2;
    }
    else if (didik == "S1" || didik == "s1") {
        tundik = 300000 * 0.3;
    }
    else {
        tundik;
    }
    if (jam > 8) {
        hon = 3500 * (jam - 8);
    }
    else {
        hon;
    }

    system("cls");

    cout << "Karyawan yang bernama " << nama << endl;
    cout << "Honor yang diterima" << endl;
    cout << "   Tunjangan Jabatan      Rp" << tunjab << endl;
    cout << "   Tunjangan Pendidikan   Rp" << tundik << endl;
    cout << "   Honor Lembur           Rp" << hon << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Total Gaji                Rp" << 300000 + tunjab + tundik + hon;

    system("pause > 0");
}