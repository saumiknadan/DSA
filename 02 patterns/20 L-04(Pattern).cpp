#include<iostream>
using namespace std;

/*
* * * *
* * *
* *
*

*/

int main(){
    int n;
    cin>>n;
    int row=1;


    while(row<=n){
        int col = 1;
        int space = 1;

            // print star
        while(col<=(n-row+1)){
            cout<<"*"<<" ";
            col = col+1;
        }
       // ekhane space to auto e portece tai alada kore space print korte hbe na

        row=row+1;
        cout<<endl;
    }
}
