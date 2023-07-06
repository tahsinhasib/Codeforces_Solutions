#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;




int main()
{
    string n;
    cin >> n;


    unordered_set<char> s;

    for(int i=0; i<n.size(); i++){
        s.insert(n[i]);
    }
    
    int size = s.size();
    if(size%2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }


    return 0;
}