#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;


int main()
{
    string str;
    cin >> str;

    int i, j;
    int n;
    char ch;

    n = str.size();

    for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++){
            if(str[j] > str[j+1]){
                swap(str[j], str[j+1]);
            }
        }
    }


    for(i=0; i<n; i++){
        if(str[i] == '+'){
            continue;
        }
        cout << str[i];
        if(i != n-1){
            cout << "+";
        }
    }

    return 0;
}
