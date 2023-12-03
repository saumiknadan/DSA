#include<iostream>
using namespace std;

// define the type of a character

int main(){
    char ch;
    cout<<"enter the value of Ch :"<<endl;
    cin>>ch;

    if(ch>='A' && ch<='Z'){
        cout<<"character is uppercase"<<endl;
    }
    else if(ch>='a' && ch<='z'){
        cout<<"character is lowercase"<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<"character is a number"<<endl;
    }
    else{
        cout<<"unknown character"<<endl;
    }






}








