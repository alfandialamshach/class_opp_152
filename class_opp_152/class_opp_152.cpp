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
        out << "\nMasukkan jumlah Kode MK= ";
        cin >> kode;
        out << "\nMasukkan jumlah Nama MK= ";
        cin >> namaMK;

    }
    void tampilMK() {
        cout << "\nJumlah SKS= " << sks;
        out << "\nJumlah Kode MK= " kode;
        cout << "\nJumlah Nama MK= "namaMK;
};

int main()
{
   
}

