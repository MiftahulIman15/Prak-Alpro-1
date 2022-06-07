#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
class pr{
	public:
void hitung();
void input();
void output();
	private:
int kode;
char nama[20];
int total;
int jml[5][5];
int hr[5][5];
int jml2[5];
int hr2[5];
   int n,m,i,b;};
void pr::input(){
	cout << " Input jumlah baris : ";cin >> n;
	cout << " Input jumlah kolom : "; cin >> m;
for(int j=0;j<n;j++){
cout<<"Nama :"; 
cin.getline(nama,20);
	
}
	for (int i=0; i<n; i++)
	{for (int j=0; j<m; j++)
	{cout << " Data ke "<<i<<","<<j<<" = "; cin >> jml[i][j];}
	}
		for (int i=0; i<n; i++)
	{for (int j=0; j<m; j++)
	{cout << " Data ke "<<i<<","<<j<<" = "; cin >> hr[i][j];}
	}	
}
void pr::hitung(){
int k=0;
	for (int i=0; i<n; i++)
	{for (int j=0; j<m; j++)
	{jml2[k]= jml[i][j];
	k++;}
	}	
for (int i=0; i<n; i++)
	{for (int j=0; j<m; j++)
	{hr2[k]= hr[i][j];
	k++;}
	}
for(int i=0; i<5; i++){              
total+=hr2[i]*jml2[i];
 } 
}
int main(){
	pr x;
	x.input();
	x.hitung();
}
