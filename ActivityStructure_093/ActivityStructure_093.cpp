#include <iostream>
using namespace std;

struct Mahasiswa
{
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main() {
	Mahasiswa mhs, mhs2;

	mhs.nim = "20210140019";
	mhs.umur = 20;
	mhs.nama = "Ardian Mulya";
	mhs.alamat = "Wonosobo";
