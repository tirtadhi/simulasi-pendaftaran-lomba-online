#include <iostream>
#include <stdio.h>
using namespace std;

int x[100],a,b,semester[100],pilihan,uang,tambahan,kurang,kembalian,bayar=30000,kembalian2;
string nm_siswa[100],kelas[100];
char ulang = 'iya';

void menu(){
	cout<<"============================================================"<<endl;
	cout<<"                  Pendaftaran Lomba 17 Agustus              "<<endl;
	cout<<"                      UNIVERSITAS PAMULANG                  "<<endl;
	cout<<"============================================================"<<endl;
	cout<<"1. Catur\n"<<endl;
	cout<<"2. Pidato\n"<<endl;
	cout<<"3. Video Creative\n"<<endl;
	cout<<"Biaya pendaftaran Rp.30000\n"<<endl;
	cout<<"============================================================"<<endl;
	cout<<"Masukkan pilihan: ";
	cin>>pilihan;
}

void biodata(){
	cout<<"Masukkan jumlah perwakilan: ";
	cin>>b;
	for(a=1;a<=b;a++){
	cout<<"Input perwakilan ke: ";
	cin>>x[a];
	cout<<"Masukkan Nama: ";
	cin>>nm_siswa[a];
	cout<<"Masukkan Kelas: ";
	cin>>kelas[a];
	cout<<"Masukkan Semester: ";
	cin>>semester[a];
	cout<<"========================================================="<<endl;
	}
	cout<<"Masukkan Uang Pendaftaran: Rp.";
	cin>>uang;
	uang = kembalian2+uang;
	cout<<"========================================================="<<endl;
}

void pembayaran(){
	for(int x; uang<bayar;){
	cout<<"Uang kamu kurang"<<endl;
	cout<<"Uang yang kamu bayar: Rp."<<uang<<endl;
	kurang = bayar - uang;
	cout<<"Kekurangan uang kamu Rp."<<kurang<<endl;
	cout<<"Silahkan masukkan uang pendaftaran kembali: Rp.";
	cin>>tambahan;
	cout<<"========================================================="<<endl;
	uang = tambahan + uang;
	}
	system("cls");
}

void cetak(){
	cout<<"========================================================="<<endl;
	cout<<"==============           Biodata           =============="<<endl;
	cout<<"========================================================="<<endl;
	for(a=1;a<=b;a++){
	cout<<"Nama: "<<nm_siswa[a]<<endl;
	cout<<"Kelas: "<<kelas[a]<<endl;
	cout<<"Semester: "<<semester[a]<<endl;
	cout<<"========================================================="<<endl;
	}
	kembalian = uang - bayar;
	cout<<"Total uang kamu Rp."<<uang<<endl;
	cout<<"Kembalian uang kamu: Rp."<<kembalian<<endl;
	cout<<"========================================================="<<endl;
	cout<<"==============     Pendaftaran Berhasil     ============="<<endl;
	cout<<"========================================================="<<endl;
	cout<<"1. Iya"<<endl;
	cout<<"2. Tidak"<<endl;
	cout<<"Ingin daftar kembali? ";
	cin>>ulang;
	system("cls");
}

main (){
	menu();
	
	switch(pilihan){
		case 1:
			//biodata
			biodata();
			
			//pembayaran
			pembayaran();
			
			//cetak
			cetak();
			
			while(ulang=='1'){
				menu();
				biodata();
				pembayaran();
				cetak();
			}
			cout<<"========================================================="<<endl;
			cout<<"=======     TERIMA KASIH TELAH MENDAFTAR       =========="<<endl;
			cout<<"=========================================================";
			break;
		case 2:
			//biodata
			biodata();
			
			//pembayaran
			pembayaran();
			//cetak
			cetak();
			
			while(ulang=='1'){
				menu();
				biodata();
				pembayaran();
				cetak();
			}
			cout<<"========================================================="<<endl;
			cout<<"=======     TERIMA KASIH TELAH MENDAFTAR       =========="<<endl;
			cout<<"=========================================================";
			break;
		case 3:
			//biodata
			biodata();
			
			//pembayaran
			pembayaran();
			
			//cetak
			cetak();
			
			while(ulang=='1'){
				menu();
				biodata();
				pembayaran();
				cetak();
			}
			cout<<"========================================================="<<endl;
			cout<<"=======     TERIMA KASIH TELAH MENDAFTAR       =========="<<endl;
			cout<<"=========================================================";
	}
}
