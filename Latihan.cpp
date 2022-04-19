#include <iostream>
using namespace std;

void matkul(string nama,string nim,string nmat){
    cout <<"Nama anda\t\t\t\t:"<<nama<<endl;
  cout <<"Nim anda\t\t\t\t:"<<nim<<endl;
  cout<<"Nama mata kuliah\t:"<<nmat<<endl;
}
void total(int sks){
  int biaya,diskon,total;
  int a=0;
  if ( a<sks){
  biaya= sks*120000;
  diskon=biaya*10/100;
  total= diskon*5/100;
  cout<<"Jumlah sks\t\t\t\t:"<<sks<<endl;
  cout<<"Total\t\t\t\t\t:"<<total<<endl;
    a=sks;
}else{
    return 1;
}}

int main(){
	string nim1,nmat;
  	std::string nama;
  int sks1;
  cout<<"Masukkan nama anda:"<<endl;
    std::getline (std::cin,nama);
  cout<<"Masukkan nim anda:"<<endl;
    cin>>nim1;
   cout<<"Masukkan mata kuliah anda:"<<endl;
    cin>>nmat;
  cout<<"Masukkan jumlah sks anda:"<<endl;
  cin>>sks1;
   matkul(nama,nim1,nmat);
  total(sks1);
    return 0;}
