#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;


    int var1 = s1.length();
    int j = var1 - 1;
    int count = 0;


    int var2 = s2.length();

    if(var1 == var2){
        // cout << "Var: " << var << "\n";
        // cout << "s2 var: " << s2.at(j) << "\n";

        for(int i=0; i<s1.length(); i++){
            if(s2.at(j) == s1.at(i)){
                count++;
            }
            j--;
        }

        // cout << "Var last: " << var << "\n";
        // cout << "Count last: " << count << "\n";

        if(count == var1){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    else{
        cout << "NO";
    }


    return 0;
}