#include <iostream>

using namespace std;

int main() {
    int batasbawah = 50;
    int batasatas = 100;

    int* ptr = &batasbawah ;

    cout<<"\n\tBilangan genap antara 50 dan 100 adalah :"<<endl;

    while (*ptr < batasatas-2) {
        if (*ptr % 2 == 0) {
            cout << "\n\t"<<*ptr+2 << " ";
        }
        (*ptr)++;
    }

    cout << endl;

    return 0;
}


