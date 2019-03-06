/*
Nama Program 	: exercise-03
Nama 			: Sharashena Chairani
NPM 			: 140810180022
Kelas 			: B
Tanggal Buat 	: 06 Maret 2019
Deskripsi 		: Menghitung rata-rata gaji, Gaji Tertinggi, Gaji Terendah, dan mengurutkan daftar pegawai berdasarkan NIP secara ascending
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Pegawai{
 char NIP[12];
 char nama[30];
 int gol;
 int gaji;
};

Pegawai pgwai[20];

void banyakData(int &n){
 cout<<"Masukkan jumlah pegawai : ";
 cin>>n;
}
void inputPegawai(Pegawai pgwai[],int &n){
 for (int i=0;i<n;i++){
        cout<<"Masukkan data pegawai " <<i+1<<endl;
        cout<<"NIP	: "; cin>>pgwai[i].NIP;
        cout<<"Nama	: "; cin>>pgwai[i].nama;
        cout<<"Gol	: "; cin>>pgwai[i].gol;
        cout<< endl;
    }
}

void sortingGol(Pegawai pgwai[], int &n){
 int i;
 Pegawai temp;
 for(i=1; i<n; i++){
        temp = pgwai[i];
        while(i>0 && pgwai[i-1].gol>temp.gol){
            pgwai[i]= pgwai[i-1];
            i = i-1;
        }
        pgwai[i]= temp;
    }
}

void sortingNIP(Pegawai pgwai[], int &n){
 int i;
 Pegawai temp;
 for(i=1; i<n; i++){
        temp = pgwai[i];
        while(i>0 && pgwai[i-1].NIP>temp.NIP){
            pgwai[i] = pgwai[i-1];
            i = i-1;
        }
        pgwai[i]= temp;
    }

}

void cariGaji(Pegawai pgwai[], int &n){
 for (int i=0; i<n; i++){
  if (pgwai[i].gol == 1){
   pgwai[i].gaji=2000000;
  }
  else if (pgwai[i].gol== 2){
   pgwai[i].gaji=3000000;
  }
  else if (pgwai[i].gol== 3){
   pgwai[i].gaji=5000000;
  }
  else if (pgwai [i].gol== 4){
   pgwai[i].gaji=8000000;
  }
 }
}

int rataRata (Pegawai pgwai [], int &n, int& rataGaji){
 int gajiTotal=0;
 for (int i=0 ; i<n ; i++){
  gajiTotal= gajiTotal+pgwai[i].gaji;
 }
 rataGaji=gajiTotal/n;
 return(rataGaji);
}

void outputPegawai (Pegawai pgwai[], int n, int rataGaji){
    sortingNIP(pgwai,n);
    cariGaji(pgwai,n);
    for (int i=0; i<n;i++){
   cout<<"NIP	: "<<pgwai[i].NIP<<endl;
   cout<<"Nama	: "<<pgwai[i].nama<<endl;
   cout<<"Gaji	: "<<pgwai[i].gaji<<endl;
   cout<<"Gol	: "<<pgwai[i].gol<<endl;
   cout<<endl;
  }
    rataRata(pgwai, n, rataGaji);
    cout<<"Rata-rata Gaji Pegawai : " <<rataGaji<<endl;
    sortingGol(pgwai, n);
}
void gajiTerendah(Pegawai pgwai[], int n){
    cout<<"Pegawai dengan gaji tertinggi : "<<pgwai[n-1].nama<<endl;
}
void gajiTertinggi(Pegawai pgwai[], int n){
    cout<<"Pegawai dengan gaji terendah : "<<pgwai[0].nama<<endl;
}

int main(){
 int n, rataGaji;
 banyakData(n);
 inputPegawai(pgwai,n);
 
 cout << "DAFTAR PEGAWAI\n";
    outputPegawai(pgwai, n, rataGaji);
    gajiTerendah(pgwai,n);
    gajiTertinggi(pgwai,n);
}
