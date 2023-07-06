#include<iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;

    int arr[n][3];

    int i;
    int j;
    int k;

    for(i=0; i<n; i++){
        for(j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }

    int total = 0;
    for(i=0; i<n; i++){
        int count = 0;
        for(j=0; j<3; j++){                 
            if(arr[i][j] == 1){
                count++;
            }
            if(count == 2){
                total++;
                break;
            }
        }
    }

    cout << total << "\n";

    return 0;
}
