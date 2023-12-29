#include<iostream>

using namespace std;

bool isEven(int n){
    bool isEven = true;
    for (int i = 1; i<=n; i++)
        isEven = !isEven;
    return isEven;
}

int main(){
    int n;

    cout<<"\n\tMasukkan angka : ";
    cin>>n;

    isEven(n) ? cout<<"\n\tAngka tersebut adalah genap"<<endl : cout<<"\n\tAngka tersebut adalah ganjil"<<endl;
}
