//library
#include <iostream>
using namespace std;
//deklarasi variabel global
int p, l;
//implementasi fungsi dan prosedur
void input(){
    cout << "Masukkan panjang: ";
    cin >> p;
    cout << "Masukkan lebar: ";
    cin >> l;
}
int luasPersegi(){
    return p * l;
}
void output(){
    cout << "Hasilnya : " << luasPersegi() << endl;
}
int main(){ //mulai
    input();
    output();
}//selesai