
#include<iostream>
using namespace std;


// A A A
// B B B
// C C C

int main() {
    int n;
    cin>>n;
    int row=1;

    while(row<=n){

        int col=1;

        while(col<=n){
            char ch = 'A' + row -1;
            cout<<ch<<" ";

            col = col+1;
        }
        cout<<endl;
        row=row+1;

    }

}

