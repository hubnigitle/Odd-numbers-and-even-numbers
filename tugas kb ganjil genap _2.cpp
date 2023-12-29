#include<iostream>
using namespace std;

int main (){
    int bilangan ;

    cout<< "Masukkan sembarang bilangan : ";
    cin>> bilangan;

    if ((bilangan/2)*2== bilangan ){
        cout<<"\nBilangan tersebut adalah genap";
    }else {
    cout<<"\nBilangan tersebut adalah ganjil";}
    return 0;
}
