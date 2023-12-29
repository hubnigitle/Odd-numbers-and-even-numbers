#include<iostream>
#include<string.h>

using namespace std;

int main(){
    string bilangan;

    cout<<" Masukkan sembarang bilangan : ";
    cin>>bilangan;

    if ((bilangan.back()== '1') || (bilangan.back()== '3') || (bilangan.back()== '5') || (bilangan.back()=='7') || (bilangan.back()== '9')){
        cout<<"\nBilangan tersebut adalah ganjil";

    }else {
    cout<<"\nBilanagan tersebut adalah genap";}
    return 0;

}
