#include <iostream>
using namespace std;

class mahasiswa{
    public:
    mahasiswa();//Construktor mahasiswa

};
mahasiswa::mahasiswa(){
    cout <<"Constructor Terpanggil"<<endl;//definisi Construktor

};
int main(){
    mahasiswa mhs;//pembuatan Objek
    return 0;

}