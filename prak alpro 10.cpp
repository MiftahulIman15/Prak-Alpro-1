#include<iostream>
using namespace std;
const int nim =5;
class hitung{
	public:
		void proses();
	private:
	int A [nim];
	string nama[10];
};

void hitung::proses(){
		int *pInt=A;
	 for (int i=0; i<nim; i++)
    {
        cout<<"Input nim : ";cin>>A[i];
        cout<<"Input Nama : ";cin>>nama[i];
    }
	
    for (int n=0; n<nim; n++)
    {
    	cout<<"Nama Mahasiswa : "<<nama[n]<<endl;
        cout<<"Nim Mahasiswa :" <<*(pInt)<<endl;
        pInt++;
    }
}

int main(){
	hitung x;
	x.proses();
}
