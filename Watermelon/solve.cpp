#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    /* cause even = even + even
        if n is even then it can be devided into two even numbers
    */

    if(n>2 && n%2==0){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }

    return 0;
}