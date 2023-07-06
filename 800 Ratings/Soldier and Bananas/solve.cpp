#include<iostream>
using namespace std;


int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int i;
    int price = 0;
    int borrow;
    for(i=1; i<=w; i++){
        price += i * k;
    }

    borrow = price - n;
    if(borrow < 0){
        cout << "0";
    }
    else{
        cout << borrow;
    }
}