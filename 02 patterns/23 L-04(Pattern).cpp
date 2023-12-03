#include<iostream>
using namespace std;
/*
fibonacci series

      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

*/

int main(){
    int n;
    cin>>n;
    int row=1;
    int number = 1;


    while(row<=n){
        int col = 1;
        int space = 1;
        int it = 1;

         // print left Triangle
        while(space<=(n-row)){
            cout<<"  ";
            space = space+1;
        }

             // print number
        while(col<=row){
            cout<<col<<" ";
            col = col+1;
        }


            // print right triangle
        /*int b = row-1;
        while(it<=row-1){
            cout<<b<<" ";
            it = it+1;
            b= b-1;
        } */

        // nicher tar time complexity kom
       col = row-1;
        while(col>=1){
            cout<<col<<" ";
            col = col-1;
        }



        row=row+1;

        cout<<endl;
    }
}

