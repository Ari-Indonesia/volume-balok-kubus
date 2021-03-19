/*
Nama  : Ari Setiawan
Prodi : Teknik Informatika
Dosen : Ida Farida, S.T., M.Kom.
UMB Warung Buncit
*/

#include <iostream>
#include <conio.h>

using namespace std;

//Volume Kubus :  s x s x s
//Volume Balok :  P X L X T

int sisi, panjang, lebar, tinggi, jumlah; //Variabel Global

int kubus(){
	
	cout<<"Masukkan sisi : ";
	cin>>sisi;
	cout<<endl;
	cout<<"-------------------------------------------------"<<endl;
	jumlah = sisi*sisi*sisi;
	cout<<"Volume = sisi x sisi x sisi"<<endl;
	cout<<"Volume = " <<sisi <<" X " <<sisi <<" X " <<sisi <<" = " <<jumlah;
	
	return 0;
	
}

int balok(){
	
	cout<<"Masukkan Panjang : ";
	cin>>panjang;
	cout<<"Masukkan Lebar   : ";
	cin>>lebar;
	cout<<"Masukkan Tinggi  : ";
	cin>>tinggi;
	cout<<endl;
	cout<<"----------------------------------------------"<<endl;
	cout<<"Volume = Panjang X Lebar X Tinggi"<<endl;
	jumlah = panjang*lebar*tinggi;
	cout<<"Volume = " <<panjang <<" X " <<lebar <<" X " <<tinggi <<" = " <<jumlah;
	
	return 0;
}

int main(){
	
	int pilihan;
	cout<<"1. Menghitung Volume Kubus "<<endl;
	cout<<"2. Menghitung Volume Balok "<<endl;
	cout<<"------------------------"<<endl;
	cout<<"Silahkan Pilih Menu : ";
	cin>>pilihan;
	
	if (pilihan == 1){
		kubus();
	}else if(pilihan == 2){
		balok();
	}else{
		cout<<"Maaf, Gunakan kode lainnya !"<<endl;
	}
	
}
