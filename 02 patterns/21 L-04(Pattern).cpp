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

        // print space
        while(space<=(row-1)){
            cout<<"  ";
            space = space+1;
        }
            // print star
        while(col<=(n-row+1)){
            cout<<"*"<<" ";
            col = col+1;
        }
        row=row+1;
        cout<<endl;
    }
}
