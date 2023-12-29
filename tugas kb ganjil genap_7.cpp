#include<iostream>

using namespace std;

int main (){
    int n;

    cout<<"\n\tMasukkan sembarang bilangan: ";
    cin>> n;

    switch(n){
    case 0:
    case 2:
    case 4:
    case 6:
    case 8:
        cout<< "\n\tBilangan tersebut adalah genap"<<endl;
    break;
    default:
         cout<< "\n\tBilangan tersebut adalah ganjil"<<endl;

    }
}
