#include<iostream>
using namespace std;
int main(){
	int p=7000,p2=9000,jml,tot;
	char A,B;
	char jen;
	string pel;
	cout<<"DAFTAR HARGA"<<endl;
	cout<<"A:Pertalite : 7000/liter"<<endl;
	cout<<"B:Pertamax : 9000/liter"<<endl;
	cout<<endl;
	cout<<"Masukkan nama pembeli : ";
	getline(cin,pel);
	cout<<"Masukkan jenis bensin[A/B] : ";
	cin>>jen;
	switch(jen){
		case 'A':
	cout<<"Masukkan jumlah liter : ";
	cin>>jml;
	tot= p*jml;
	cout<<endl;
	cout<<"KWITANSI"<<endl;
	cout<<"======================="<<endl;
	cout<<"total liter		: "<<jml<<endl;
	cout<<"jenis bensin		: Pertalite"<<endl;
	cout<<"Nama pelanggan		: "<<pel<<endl;
	cout<<"Jumlah pembayaran	: "<<tot<<endl;
	break;
	case 'B':
	cout<<"Masukkan jumlah liter : ";
	cin>>jml;
	tot= p2*jml;
	cout<<endl;
	cout<<"KWITANSI"<<endl;
	cout<<"========================"<<endl;
	cout<<"total liter		: "<<jml<<endl;
	cout<<"jenis bensin		: Pertamax"<<endl;
	cout<<"Nama pelanggan		: "<<pel<<endl;
	cout<<"Jumlah pembayaran	: "<<tot<<endl;
	}
	
	
}
