//Nama Program : T - Tutor - Soal 1
//Nama         : Mutiara Afifah
//NPM          : 140810260022
//Tanggal Buat : 15 Agustus 2026
//Deskripsi    : Membuat program kasir untuk menghitung diskon dan total bayar berdasarkan jumlah belanjaan pembeli

#include <iostream>
using namespace std;

int main(){

    double belanja;
    double total, diskon;

    cout<<"Masukkan total belanja: ";
    cin>>belanja;

    if(belanja<100000){
        cout<<"Diskon: 0%"<<endl;
        cout<<"Total belanja: "<<belanja<<endl;
    }
    else if(belanja>=100000||belanja<=299999){
        diskon=belanja*0.1;
        total=belanja-diskon;
        cout<<"Diskon: 10%"<<endl;
        cout<<"Total setelah diskon: "<<total<<endl;
    }
    else{
        diskon=belanja*0.2;
        total=belanja-diskon;
        cout<<"Diskon: 20%"<<endl;
        cout<<"Total setelah diskon: "<<total<<endl;
    }
    
    return 0;
}