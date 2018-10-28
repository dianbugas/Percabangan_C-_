#include <iostream>
using namespace std;

int main()
{
    int uang=100000;
    int baju=25000;
    int celana=30000;
    int jus=15000;
    int hasil;
    cout<<"====>Percabangan if else <===="<<endl;
    cout<<"------------------------------"<<endl;
        if(uang>baju){
        cout<<"Baju di beli ^_^"<<endl;
        hasil=uang-baju;
        cout<<"Baju terbeli seharga "<<baju<<endl;
        if(hasil>=celana*2){
        cout<<"Celana di beli ^_^"<<endl;
        int sisa=hasil-celana*2;
        cout<<"Celana tebeli seharga "<<celana*2<<endl;
            if(sisa>=jus){
                cout<<"Jus di beli ^_^"<<endl;
                int sisa1=sisa-jus;
                cout<<"Jus terbeli seharga "<<jus<<endl;
            }else{
                cout<<"tidak kembali";
            }
        }else{
            cout<<"Uangnya kurang";
        }
    }
    cout<<"------------------------------";
}
