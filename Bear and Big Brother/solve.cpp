#include<iostream>
using namespace std;


void check(int a, int b, int x, int y, int yrs){
    if(a > b){
       cout << yrs;
    }
    else{
        x = a*3;
        y = b*2;
        yrs++;
        check(x,y,x,y,yrs);
    }
}



int main()
{
    int a, b;
    cin >> a >> b;

    int x, y;
    int yrs=0;

    check(a,b,0,0,0);



    return 0;
}