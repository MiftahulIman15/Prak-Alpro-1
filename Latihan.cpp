#include <iostream>
using namespace std;
class perulangan {
public:
perulangan() { n = 4; }
void ulang_for(int);
void ulang_rekursif(int);
private:
int n; };
void perulangan::ulang_for(int n) {
for (int i = 1; i <=n; i++);
}
void perulangan::ulang_rekursif(int n) {
int i = 4;
while (i >= n) {
cout << i << " ";
i--; }
}
int main() {
perulangan X;
cout << "Menggunakan cara iteratif\n";
X.ulang_for(4);
cout << "\nMenggunakan cara rekursif\n";
X.ulang_rekursif(4);
}
