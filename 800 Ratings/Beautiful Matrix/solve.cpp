#include<iostream>
using namespace std;

int main()
{
    int r = 5;
    int c = 5;

    int i;
    int j;

    int arr[r][c];

    int moves = 0;

    for(i=1; i<=r; i++){
        for(j=1; j<=c; j++){
            cin >> arr[i][j];
        }
    }

    for(i=1; i<=r; i++){
        for(j=1; j<=c; j++){
            if(arr[i][j] == 1){
                while(j>3){
                    arr[i][j] = 0;
                    j--;
                    arr[i][j] = 1;
                    moves++;
                }
                while(j<3){
                    arr[i][j] = 0;
                    j++;
                    arr[i][j] = 1;
                    moves++;
                }
            }
        }
    }

    for(i=1; i<=r; i++){
        for(j=1; j<=c; j++){
            if(arr[i][j] == 1){
                while(i>3){
                    arr[i][j] = 0;
                    i--;
                    arr[i][j] = 1;
                    moves++;
                }
                while(i<3){
                    arr[i][j] = 0;
                    i++;
                    arr[i][j] = 1;
                    moves++;
                }
            }
        }
    }

    cout << moves << "\n";

    return 0;
}