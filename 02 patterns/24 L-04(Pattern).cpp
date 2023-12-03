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



    while(row<=n){
        int col = 1;

        while(col<=(n-row+1))
        {
            cout<<col<<" ";
            col=col+1;
        }

        int star = row-1;
        while(star>=1)
        {
            cout<<"* ";
            star = star-1;
        }

        star = row-1;
         while(star>=1)
        {
            cout<<"* ";
            star = star-1;
        }

        int number = n;
        col = 1;
        while(col<=n-row+1)
        {
            cout<<number<<" ";
            number= number-1;
            col=col+1;
        }



        row=row+1;

        cout<<endl;
    }
}


