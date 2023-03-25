#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str1[n];

    for(int i=0; i<n; i++){
        cin >> str1[i];
    }

    for(int i=0; i<n; i++){
        if(str1[i].length() > 10){
            cout << str1[i].at(0) << str1[i].length() - 2 << str1[i].at(str1[i].length()-1) << "\n";
        }
        else{
            cout << str1[i] << "\n";
        }
    }

    return 0;
}