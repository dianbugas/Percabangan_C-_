#include <iostream>
using namespace std;

int main()
{
    char kelamin;
    cout<<"Masukkan jenis kelamin anda?  :  ";
    cin>>kelamin;

    if(kelamin=='L'){
        cout<<"Jenis kelamin anda Pria";
    }else if(kelamin=='P'){
        cout<<"Jenis kelamin anda Wanita";
    }
}
