#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

float add(float a, float b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

float subtract(float a, float b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

float multiply(float a, float b){
    return a * b;
}

int divide(int a, int b){
    if(b == 0){
        cout<<"Error: Division by zero";
        return 0;
    }
    return a / b;
}

float divide(float a, float b){
    if(b == 0){
        cout<<"Error: Division by zero";
        return 0;
    }
    return a / b;
}

int main(){

    int choice;

    cout<<"Choose operation:\n";
    cout<<"1 Add\n";
    cout<<"2 Subtract\n";
    cout<<"3 Multiply\n";
    cout<<"4 Divide\n";

    cin>>choice;

    float a,b;
    cout<<"Enter two numbers:\n";
    cin>>a>>b;

    if(choice==1)
        cout<<"Result = "<<add(a,b);

    else if(choice==2)
        cout<<"Result = "<<subtract(a,b);

    else if(choice==3)
        cout<<"Result = "<<multiply(a,b);

    else if(choice==4)
        cout<<"Result = "<<divide(a,b);

    else
        cout<<"Invalid choice";

}
