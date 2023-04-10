#include <iostream>
using namespace std;


class Mahasiswa {
public:
    int nim;
    string nama; 
    void tampil() {
        cout << "NIM= " << nim;
        cout << "Nama= " << nama;
    }
};

class Matakuliah {
private:
    int sks;
    string kode;
    string namaMK;
public:
    void InputMK() {
        cout << "\nMasukkan jumlah SKS= ";
        cin >> sks;
        cout << "\nMasukkan jumlah Kode MK= ";
        cin >> kode;
        cout << "\nMasukkan jumlah Nama MK= ";
        cin >> namaMK;

    }
    void tampilMK() {
        cout << "\nJumlah SKS= " << sks;
        cout << "\nJumlah Kode MK= " << kode;
        cout << "\nJumlah Nama MK= " << namaMK;
    }
    };


    int main()
    {
        Mahasiswa mhs;
        Matakuliah mk;

        cout << "Nim mahasiswa = ";
        cin >> mhs.nim;
        cout << "Nama mahasiswa + ";
        cin >> mhs.nama;

        mk.InputMK();
        mhs.tampil() ;
        mk.tampilMK();

    }

