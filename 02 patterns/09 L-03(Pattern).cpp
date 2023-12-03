
#include<iostream>
using namespace std;


// right angle increasing number

int main() {
    int n;
    cin>>n;
    int row=1;

    int number = 0;
    while(row<=n){

        int col=1;
        while(col<=row){
            number = number+1;
            cout<<number<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;

    }

}
