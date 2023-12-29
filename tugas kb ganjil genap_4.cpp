#include<iostream>
using namespace std;

int main (){

    int angka;

    cout<<"\n\tMasukkan angka: ";
    cin>>angka;

    if(angka == 0){
        cout<<"Angka 0 adalah genap";
    }else{
        while(angka<0){
            angka +=2;
        }
        while(angka>0){
            angka -=2;
        }
        if(angka==0){
            cout<<"\n\tAngka tersebut adalah genap"<<endl;
        }else{
            cout<<"\n\tAngka tersebut adalah ganjil"<<endl;
        }
    }
    return 0;
}
