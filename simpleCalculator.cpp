#include<iostream>
using namespace std;

int calculator(int num1, int num2, char ch){
    if(ch == '+'){
        return num1 + num2;
    } else if(ch == '-'){
        return num1 - num2;
    } else if(ch == '*'){
        return num1*num2;
    }
    return num1/num2;
}

int main(){

    int num1, num2;
    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;
    
    char ch;
    cout<<"Enter symbol of operation that you want to perform: ";
    cin>>ch;

    cout<<"Answer: "<<calculator(num1 , num2 ,ch)<<endl;

    return 0;
}