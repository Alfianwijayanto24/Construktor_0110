#include <iostream>
#include <string>
using namespace std;
class Barang{
    public:

    int kodeBarang;
    string namaBarang;




    Barang(int k, string n);
    void tampilkan();


};


Barang::Barang(int k, string n){
    namaBarang = n;
    kodeBarang = k;
}
void Barang::tampilkan(){
    cout << "namaBarang = " << namaBarang << endl;
    cout << "kodeBarang = " << kodeBarang << endl;
}
int main(){
    
    Barang nbr(100, "buku");
    nbr.tampilkan();

}

