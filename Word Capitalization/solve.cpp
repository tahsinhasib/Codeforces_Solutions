#include<iostream>
#include<string.h>
using namespace std;


int main()
{
    string str;
    cin >> str;

    string strarr[] = {str};
    char ch;

    for(int i=0; i<strarr->length(); i++) {
        if(i==0){
            ch = toupper(str[i]);
            cout << ch;
        }
        else{
            ch = str[i];
            cout << ch;
        }
    }
    return 0;
}