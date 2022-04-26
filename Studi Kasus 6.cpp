#include <iostream>
using namespace std;
class hitung{
  public:
    void proses();
    void input();
  private:
    int n,i,nilai[5],jumlah;
    string namados,namamk;
    float dn,min,max,rata;
    
};
void hitung::input(){
  for(i=1;i<=5;i++){
  cout<<"masukkan nilai ke "<<i<<" = ";
  cin>>nilai[i];
  cout<<endl;}
cout<<"Masukkan nama dosen:";
    cin>>namados;
    cout<<endl;
  
cout<<"Masukkan nama mata kuliah:";
    cin>>namamk;
  
}

void hitung::proses(){
	int max= nilai[0];
for(int i=1;i<=5;i++){
    if(nilai[i]>max){
      max=nilai[i];    
    }cout<<"Nilai maximum = "<< max<<endl;
  }
  cout<<endl;
     int min= nilai[0];
for(int i=1;i<=5;i++){
    if(nilai[i]<min){
      min=nilai[i];
    }cout<<"Nilai minimum = "<< min<<endl;
  }
  cout<<endl;
for(int i=1;i<=5;i++){
int jumlah = nilai[i];
} int rata= jumlah/5;
  cout<<"rata-rata = "<<rata<<endl;
}
int main(){
  hitung x;
  x.input();
  cout<<endl;
  x.proses();
}
