#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int angka;

    cout<<"\n\tMasukkan sembarang angka: ";
    cin>> angka;

    if(angka&(0x01)){
        printf("\n\t %d adalah angka ganjil\n", angka);
    }else{
        printf("\n\t %d adalah angka genap\n", angka);
    }
    return 0;
}
