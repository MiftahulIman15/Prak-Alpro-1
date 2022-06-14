#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
class hitung{
	public:
		int SatuDimensi();
		int DuaDimensi();
	private:
		int buku[24] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
		int rak[4][6]={{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24}};
};

int hitung::SatuDimensi(){
	int i;
	cout<<"Jumlah buku di kamar Andi : "<<endl;
	for(i=0;i<24;i++){
		cout<<buku[i]<<" ";
	}
	cout<<endl;
}

int hitung::DuaDimensi(){
	int j,k;
	cout<<"Jumlah buku yang tertata di dalam rak : "<<endl;
	for(j=0;j<4;j++){
		for(k=0;k<6;k++)
			cout<<rak[j][k]<<" ";
			cout<<endl;
		
	}
}

int main(){
	hitung x;
	x.SatuDimensi();
	x.DuaDimensi();
}
