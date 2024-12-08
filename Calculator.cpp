#include <iostream>
#include<cmath>

using namespace std;

int main(){
    int num1, num2;
    char operation;
    cout << "Enter First Number:";
    cin >> num1;
   
    cout << "Enter Second Number:";
    cin >> num2; 
   
    cout << "Enter Operation:";
    cin >> operation;
    
    switch(operation){
        case '+':
            cout << num1+num2;
            break;
        case '-':
            cout << num1-num2;
            break;
        case '/':
            cout << num1/num2;
            break;
        case '*':
            cout << num1*num2;
            break;
    }
    return 0;
}