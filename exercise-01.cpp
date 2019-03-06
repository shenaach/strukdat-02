/*
Nama Program 	: exercise-01
Nama 			: Sharashena Chairani
NPM 			: 140810180022
Kelas 			: B
Tanggal Buat 	: 06 Maret 2019
Deskripsi 		: Menginput dan mengoutput Nama, Jenis Kelamin, Goldar, Umur
*/

#include <iostream>
#include <string.h>
using namespace std;

struct Orang{
	int umur;
	char nama[30];
	char jk[10];
	char goldar[10];
	
};

int main(){
	Orang orang;
	orang.umur = 18;
	strcpy(orang.nama, "Sharashena Chairani");
	strcpy(orang.jk, "P");
	strcpy(orang.goldar, "O");
	
	cout<<orang.umur<<endl;
	cout<<orang.nama<<endl;
	cout<<orang.jk<<endl;
	cout<<orang.goldar<<endl;
}


