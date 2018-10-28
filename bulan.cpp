#include <iostream>
using namespace std;

int main()
{
    int pilih;
    cout<<"Masukkan kode bulan yang ingin anda pilih?   :";
    cin>>pilih;
    if(pilih==1){
        cout<<"Kode bulan 1 : Bulan Januari";
    }else if(pilih==2){
        cout<<"Kode bulan 2 : Bulan Februari";
    }else if(pilih==3){
        cout<<"Kode bulan 3 : Bulan Maret";
    }else if(pilih==4){
        cout<<"Kode bulan 4 : Bulan April";
    }else if(pilih==5){
        cout<<"Kode bulan 5 : Bulan Mei";
    }else if(pilih==6){
        cout<<"Kode bulan 6 : Bulan Juni";
    }else if(pilih==7){
        cout<<"Kode bulan 7 : Bulan Juli";
    }else if(pilih==8){
        cout<<"Kode bulan 8 : Bulan Agustus";
    }else if(pilih==9){
        cout<<"Kode bulan 9 : Bulan September";
    }else if(pilih==10){
        cout<<"Kode bulan 10: Bulan Oktober";
    }else if(pilih==11){
        cout<<"Kode bulan 11: Bulan November";
    }else if(pilih==12){
        cout<<"Kode bulan 12: Bulan Desember";
    }else{
        cout<<"Maaf anda salah memasukkan kode bulan 1-12";
    }
}
