#include<iostream>
using namespace std;


void process(int n, int k){
    if(k != 0){
        int temp = 0;
        temp = (n % 10);

        if(temp == 0){
            n = (n / 10);
            k--;
            process(n, k);
        }
        else{
            n--;
            k--;
            process(n, k);
        }
    }
    else{
        cout << n;
    }
}


int main()
{
    int n, k;
    cin >> n >> k;

    process(n, k);

    return 0;
}