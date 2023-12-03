#include<iostream>
using namespace std;


// 1 2 3
// 4 5 6
// 7 8 9

int main() {
    int n;
    cin>>n;
    int i=1;

    int number = 0;
    while(i<=n){

        int j=1;
        while(j<=n){
            number = number+1;
            cout<<number<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }

}
