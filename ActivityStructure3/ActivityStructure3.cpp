#include <iostream>
using namespace std;

struct DetailAlamat
{
	char desa[20];
	char kota[20];
};

struct Mahasiswa
{
	char nim[20];
	char nama[20];
	DetailAlamat alamat;
	int umur;
};

int main() {
	Mahasiswa mhs[3];

    for (int i = 0; i < 3; i++) {
        cout << "Masukkan NIM : ";
        cin.getline(mhs[i].nim, 12);
        cout << "Masukkan Umur : ";
        cin >> mhs[i].umur;
        cin.ignore(1, '\n');
        cout << "\nMasukkan Nama : ";
        cin.getline(mhs[i].alamat.desa, 20);
        cout << "\tMasukkan Kota : ";
        cin.getline(mhs[i].alamat.kota, 20);
    }

