#include <iostream>
using namespace std;
int main(){
    char minuman;
    float uang, harga, lembar5000, lembar1000;
    int kembalian;

    cout<<"Daftar minum dengan kode"<<endl;
    cout<<"A.Air mineral\nB.Teh botol\nC.Kopi susu"<<endl;
    cout<<"Pilih minuman: ";
    cin>>minuman;

    switch(toupper(minuman)){
        case 'A':
        harga=4000;
        cout<<"Air mineral= Rp.4,000"<<endl;
        break;

        case 'B':
        harga=6000;
        cout<<"Teh botol= Rp.6,000"<<endl;
        break;

        case 'C':
        harga=10000;
        cout<<"Kopi susu= Rp.10,000"<<endl;

        default:
        cout<<"Error"<<endl;
    }
    cout<<"Masukkan uang anda: Rp. ";
    cin>>uang;

    if(uang<harga){
        cout<<"Transaksi gagal"<<endl;
        cout<<"Uang anda kurang: Rp. "<<harga-uang<<endl;
    }else{
        kembalian=uang-harga;
        cout<<"Uang kembalian anda: Rp. "<<kembalian<<endl;

        lembar5000= kembalian/5000;
        lembar1000=kembalian/1000;

        cout<<"Uang kembali anda: "<<endl;
        cout<<"Uang pecahan 5.000: "<<lembar5000<<endl;
        cout<<"uang pecahan 10000: "<<lembar1000<<endl;
    }
    return 0;
}