#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"How many elemnts you want: ";
    cin>> n;
    int stack[n];
    int top =-1;
    for(int i=0; i<n; i++){
        top++;
        int value;
        cout<< "Enter your value " << i+1 << " : ";
        cin>> value;
        stack[top] = value;
    }
    cout<< "Here are your full elements: \n";
    for(int val: stack){
        cout<< val << " ";
    }
    return 0;
}
