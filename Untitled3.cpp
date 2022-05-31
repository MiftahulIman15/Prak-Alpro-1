#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class sorting{
	public:
		void proses();
	private:
	typedef struct{
int kode;
char nama[20];
int stock;
}
   brg;
   brg barang[5];
   brg temp;
   int n,i, cari, ada;	
};

void sorting::proses(){
cout<<"Masukan banyak data = ";

cin>>n;

 for(i=0;i<n;i++){

     cout<<endl;

      cout<<"Data ke-"<<(i+1)<<":"<<endl;

      cout<<"Input Kode Barang : ";cin>>barang[i].kode;

      cout<<"Input Nama Barang: ";cin>>gets(barang[i].nama);

      cout<<"Input Stock Barang : ";cin>>barang[i].stock;

      cout<<endl;

      }



 cout<<"\t\t\t"<<"Masukan Kode Barang Untuk Mencari : ";

        cin>>cari;

        ada = 0;

        for(i=0;i<n;i++)

            {

            if(barang[i].kode==cari)

                {

                    ada=1;



                    cout<<"\t\t\t"<<"=============================================="<<endl;

                    cout<<"\t\t\t"<<"|      Kode Barang     |       Stock Barang   |"<<endl;

                    cout<<"\t\t\t"<<"==============================================="<<endl;

                    cout<<"\t\t\t"<<"|         "<<barang[i].kode<<"\t\t        "<<barang[i].stock<<"\t\t       |"<<endl;

                }

 } cout<<"\t\t\t"<<"===================================================================="<<endl;

        if (ada == 0)

            {

                cout<<"Data Tidak ditemukan"<<endl;

            }

            }


int main(){
	sorting sort;
	sort.proses();
}
