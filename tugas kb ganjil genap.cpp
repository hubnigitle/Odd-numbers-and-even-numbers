#include<iostream>

using namespace std;

int main(){
    int bilangan;

    cout<<"\t\nMasukkan sembarang bilangan : ";
    cin>> bilangan;

    if(bilangan & 1){
        cout<<"\t\nBilangan "<<bilangan <<" adalah ganjil";
    }else{
        cout<<"\t\nBilangan "<<bilangan <<" adalah genap";
    }
    return 0;
}
