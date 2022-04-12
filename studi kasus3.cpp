#include <iostream>
using namespace std;

class Operator {
	public:
		long pengeluaran();
    long totalsemua();
    long tabungan();
	private:
  long int input1;
  long int total;
};

long Operator::pengeluaran(){
 int i,n,input1,input2;
  for(int i=1; i<=n; i++){
    input1= 10000-5000;
  }
  return input1;
};
long Operator::totalsemua(){
 int i,n,total;
  total=5000*30;
  for(int i=1; i<=n; i++){
   total=5000*30;
  }
return total;
};
long Operator::tabungan(){
 int n,totaltabungan;
  for(int i=1; i<=n; i++){
   totaltabungan=5000*30;
  }
return totaltabungan;
};
int main(){
  Operator x;
  cout<<"Pengeluaran Tiap Bulan : "<<x.pengeluaran();
  cout<<endl;
  cout<<"Total Pengeluaran\t : "<<x.totalsemua();
  cout<<endl;
  cout<<"Tabungan\t\t\t : "<<x.tabungan();
  cout<<endl;
}
