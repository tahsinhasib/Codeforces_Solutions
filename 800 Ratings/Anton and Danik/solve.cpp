#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int a=0;
    int d=0;

    for(int i=0; i<n; i++){
        if(arr[i] == 'A'){
            a++;
        }
        if(arr[i] == 'D'){
            d++;
        }
    }

    if(a > d){
        cout << "Anton";
    }
    else if(d > a){
        cout << "Danik";
    }
    else{
        cout << "Friendship";
    }

    return 0;
}