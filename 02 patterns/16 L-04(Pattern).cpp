
#include<iostream>
using namespace std;


// A
// B C
// C D E

int main() {
    int n;
    cin>>n;
    int row=1;

    while(row<=n){

        int col=1;


        while(col<=row){
            char ch = 'A' + col + row -2;

            cout<<ch<<" ";

            col = col+1;
        }
        cout<<endl;
        row=row+1;

    }

}




