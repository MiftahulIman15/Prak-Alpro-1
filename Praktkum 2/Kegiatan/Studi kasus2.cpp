#include <iostream>
using namespace std;

int main()
{
    int pilihan;
    
    cout << "Pilih menu yang anda inginkan\n";
    cout << "1. Ayam Geprek dengan harga 21.000\n";
    cout << "2. Ayam Goreng dengan harga 17.000\n";
    cout << "3. Udang Goreng dengan harga 19.000\n";
    cout << "4. Cumi Goreng dengan harga 20.000\n";
    cout << "5. Ayam Bakar dengan harga 25.000\n";
    
    cout << "Masukkan pilihan anda: ";
    cin >> pilihan;
    
    int jumlah;
    int jarak;
    
    if (pilihan == 1)
    {
        cout << "Berapa banyak ayam geprek yang ingin anda beli = ";
        cin >> jumlah;
        cout << "Berapa jarak rumah anda dari restoran dalam bentuk km = ";
        cin >> jarak;
        int harga = 21000;
        int ongkir;
        
        if (jarak <= 3)
        {
            ongkir = 15000;
        }
        else
        {
            ongkir = 25000;
        }
        
        int total = (harga * jumlah) + ongkir;
        printf("Anda membeli %d ayam geprek dengan harga %d.000\n", jumlah, harga);
        printf("Anda dikenakan biaya ongkir %d.000\n", ongkir);
        printf("%d ayam geprek dikali %d.000 ditambah %d.000 biaya ongkir\n", jumlah, harga, ongkir);
        printf("Total anda adalah %d.000\n", total);
        cout<<endl;
        cout<<"================================================"<<endl;
        cout<<"Rumah Makan Dahlan Muda"<<endl;
        cout<<"================================================"<<endl;
        cout<<endl;
        cout<<"Jenis Pesanan\t\t: "<<pilihan<<endl;
        cout<<"Jumlah Pesanan\t\t: "<<jumlah<<endl;
        cout<<"Jarak Rumah(KM)\t\t: "<<jarak<<endl;
        cout<<"Harga total\t\t: "<<total<<endl;
    }
    else if (pilihan == 2)
    {
        cout << "Berapa banyak ayam goreng yang ingin anda beli = ";
        cin >> jumlah;
        cout << "Berapa jarak rumah anda dari restoran dalam bentuk km = ";
        cin >> jarak;
        int harga = 17000;
        int ongkir;
        
        if (jarak <= 3)
        {
            ongkir = 15000;
        }
        else
        {
            ongkir = 25000;
        }
        
        int total = (harga * jumlah) + ongkir;
        printf("Anda membeli %d ayam goreng dengan harga %d.000\n", jumlah, harga);
        printf("Anda dikenakan biaya ongkir %d.000\n", ongkir);
        printf("%d ayam goreng dikali %d.000 ditambah %d.000 biaya ongkir\n", jumlah, harga, ongkir);
        printf("Total anda adalah %d.000\n", total);
        cout<<endl;
         cout<<"================================================"<<endl;
        cout<<"Rumah Makan Dahlan Muda"<<endl;
        cout<<"================================================"<<endl;
        cout<<endl;
        cout<<"Jenis Pesanan\t\t: "<<pilihan<<endl;
        cout<<"Jumlah Pesanan\t\t: "<<jumlah<<endl;
        cout<<"Jarak Rumah(KM)\t\t: "<<jarak<<endl;
        cout<<"Harga total\t\t: "<<total<<endl;
    }
    else if (pilihan == 3)
    {
        cout << "Berapa banyak udang goreng yang ingin anda beli = ";
        cin >> jumlah;
        cout << "Berapa jarak rumah anda dari restoran dalam bentuk km = ";
        cin >> jarak;
        int harga = 19000;
        int ongkir;
        
        if (jarak <= 3)
        {
            ongkir = 15000;
        }
        else
        {
            ongkir = 25000;
        }
        
        int total = (harga * jumlah) + ongkir;
        printf("Anda membeli %d udang goreng dengan harga %d.000\n", jumlah, harga);
        printf("Anda dikenakan biaya ongkir %d.000\n", ongkir);
        printf("%d udang goreng dikali %d.000 ditambah %d.000 biaya ongkir\n", jumlah, harga, ongkir);
        printf("Total anda adalah %d.000\n", total);
        cout<<endl;
         cout<<"================================================"<<endl;
        cout<<"Rumah Makan Dahlan Muda"<<endl;
        cout<<"================================================"<<endl;
        cout<<endl;
        cout<<"Jenis Pesanan\t\t: "<<pilihan<<endl;
        cout<<"Jumlah Pesanan\t\t: "<<jumlah<<endl;
        cout<<"Jarak Rumah(KM)\t\t: "<<jarak<<endl;
        cout<<"Harga total\t\t: "<<total<<endl;
    }
    else if (pilihan == 4)
    {
        cout << "Berapa banyak cumi goreng yang ingin anda beli = ";
        cin >> jumlah;
        cout << "Berapa jarak rumah anda dari restoran dalam bentuk km = ";
        cin >> jarak;
        int harga = 20000;
        int ongkir;
        
        if (jarak <= 3)
        {
            ongkir = 15000;
        }
        else
        {
            ongkir = 25000;
        }
        
        int total = (harga * jumlah) + ongkir;
        printf("Anda membeli %d cumi goreng dengan harga %d.000\n", jumlah, harga);
        printf("Anda dikenakan biaya ongkir %d.000\n", ongkir);
        printf("%d cumi goreng dikali %d.000 ditambah %d.000 biaya ongkir\n", jumlah, harga, ongkir);
        printf("Total anda adalah %d.000\n", total);
        cout<<endl;
         cout<<"================================================"<<endl;
        cout<<"Rumah Makan Dahlan Muda"<<endl;
        cout<<"================================================"<<endl;
        cout<<endl;
        cout<<"Jenis Pesanan\t\t: "<<pilihan<<endl;
        cout<<"Jumlah Pesanan\t\t: "<<jumlah<<endl;
        cout<<"Jarak Rumah(KM)\t\t: "<<jarak<<endl;
        cout<<"Harga total\t\t: "<<total<<endl;
    }
    else if(pilihan == 5)
    {
        cout << "Berapa banyak ayam bakar yang ingin anda beli = ";
        cin >> jumlah;
        cout << "Berapa jarak rumah anda dari restoran dalam bentuk km = ";
        cin >> jarak;
        int harga = 25000;
        int ongkir;
        
        if (jarak <= 3)
        {
            ongkir = 15000;
            int total = (harga * jumlah) + ongkir;
        printf("Anda membeli %d ayam bakar dengan harga %d.000\n", jumlah, harga);
        printf("Anda dikenakan biaya ongkir %d.000\n", ongkir);
        printf("%d ayam bakar dikali %d.000 ditambah %d.000 biaya ongkir\n", jumlah, harga, ongkir);
        printf("Total anda adalah %d.000\n", total);
        cout<<endl;
        cout<<"================================================"<<endl;
        cout<<"Rumah Makan Dahlan Muda"<<endl;
        cout<<"================================================"<<endl;
        cout<<endl;
        cout<<"Jenis Pesanan\t\t: "<<pilihan<<endl;
        cout<<"Jumlah Pesanan\t\t: "<<jumlah<<endl;
        cout<<"Jarak Rumah(KM)\t\t: "<<jarak<<endl;
        cout<<"Harga total\t\t: "<<total<<endl;
        }
        else
        {
            ongkir = 25000;
            int total = (harga * jumlah) + ongkir;
            if(50000>total>25000){
            	int total2= total-3000;
            	 printf("Anda membeli %d ayam bakar dengan harga %d.000\n", jumlah, harga);
        printf("Anda dikenakan biaya ongkir %d.000\n", ongkir);
        printf("%d ayam bakar dikali %d.000 ditambah %d.000 biaya ongkir\n", jumlah, harga, ongkir);
        printf("Total anda adalah %d.000\n", total2);
         cout<<endl;
         cout<<"================================================"<<endl;
        cout<<"Rumah Makan Dahlan Muda"<<endl;
        cout<<"================================================"<<endl;
        cout<<endl;
        cout<<"Jenis Pesanan\t\t: "<<pilihan<<endl;
        cout<<"Jumlah Pesanan\t\t: "<<jumlah<<endl;
        cout<<"Jarak Rumah(KM)\t\t: "<<jarak<<endl;
        cout<<"Harga total\t\t: "<<total2<<endl;
			}
			if(150000>total>25000){
			int	diskon= (total-ongkir)*15/100;
			int	total2= diskon+20000;
			printf("Anda membeli %d ayam bakar dengan harga %d.000\n", jumlah, harga);
        printf("Anda dikenakan biaya ongkir %d.000\n", ongkir);
        printf("%d ayam bakar dikali %d.000 ditambah %d.000 biaya ongkir\n", jumlah, harga, ongkir);
        printf("Total anda adalah %d.000\n", total2);
         cout<<endl;
         cout<<"================================================"<<endl;
        cout<<"Rumah Makan Dahlan Muda"<<endl;
        cout<<"================================================"<<endl;
        cout<<endl;
        cout<<"Jenis Pesanan\t\t: "<<pilihan<<endl;
        cout<<"Jumlah Pesanan\t\t: "<<jumlah<<endl;
        cout<<"Jarak Rumah(KM)\t\t: "<<jarak<<endl;
        cout<<"Harga total\t\t: "<<total2<<endl;
			}
			else{
				int diskon=(total-ongkir)*35/100;
				int total2=diskon+17000;
				printf("Anda membeli %d ayam bakar dengan harga %d.000\n", jumlah, harga);
        printf("Anda dikenakan biaya ongkir %d.000\n", ongkir);
        printf("%d ayam bakar dikali %d.000 ditambah %d.000 biaya ongkir\n", jumlah, harga, ongkir);
        printf("Total anda adalah %d.000\n", total2);
         cout<<endl;
         cout<<"================================================"<<endl;
        cout<<"Rumah Makan Dahlan Muda"<<endl;
        cout<<"================================================"<<endl;
        cout<<endl;
        cout<<"Jenis Pesanan\t\t: "<<pilihan<<endl;
        cout<<"Jumlah Pesanan\t\t: "<<jumlah<<endl;
        cout<<"Jarak Rumah(KM)\t\t: "<<jarak<<endl;
        cout<<"Harga total\t\t: "<<total2<<endl;
			}
        }
    return 0;
}
}
