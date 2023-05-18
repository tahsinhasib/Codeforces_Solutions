#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    string str;
    cin >> str;

    int up = 0;
    int low = 0;

    //counting the number of uppercase and lower
    for(int i=0; i<str.length(); i++){
        if(isupper(str[i])){
            up++;
        }
        else{
            low++;
        }
    }


    if(up == low){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout << str;
    }
    if(up > low){
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout << str;
    }
    if(low > up){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout << str;
    }


    return 0;
}