
#include<iostream>
using namespace std;


// right angle number

int main() {
    int n;
    cin>>n;
    int row=1;

    int number = 0;
    while(row<=n){

        int col=1;
        number = row;
        while(col<=row){

            cout<<number<<" ";
            col=col+1;
            number = number-1;
        }
        cout<<endl;
        row=row+1;

    }

}

