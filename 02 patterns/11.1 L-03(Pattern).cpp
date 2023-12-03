
#include<iostream>
using namespace std;


// right angle number
//1
//2 1
//3 2 1

int main() {
    int n;
    cin>>n;
    int row=1;

    //int number = 0;
    while(row<=n){

        int col=1;
      //  number = row;
        while(col<=row){

            cout<<row-col+1<<" ";
            col=col+1;
            //number = number-1;
        }
        cout<<endl;
        row=row+1;

    }

}

