#include<iostream>
using namespace std;
/*
1 1 1 1
  2 2 2
    3 3
      4

*/

int main(){
    int n;
    cin>>n;
    int row=1;
    int number = 1;


    while(row<=n){
        int col = 1;
        int space = 1;

         // print number
        while(space<=(row-1)){
            cout<<"  ";
            space = space+1;
        }

             // print star
        while(col<=(n-row+1)){
            cout<<number<<" ";
            col = col+1;
        }


        row=row+1;
        number = number +1;
        cout<<endl;
    }
}

