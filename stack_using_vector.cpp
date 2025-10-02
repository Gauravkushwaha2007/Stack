

#include <iostream>
#include <vector>
using namespace std;

class stack {
    vector<int> vec;
public:
    void push(int value){
        vec.push_back(value);
    }

    void pop(){
        cout <<  vec[vec.size()];
        vec.pop_back();
    }
    
    int top (){
        return vec[(vec.size())-1];
    }

    void user_input(){
        do{
            int val;
            cout<< "Enter your element : ";
            cin>> val;
            vec.push_back(val);
        }while(cin);
    }

    void display(){
        for(int i=(vec.size())-1; i>=0; i--){
            cout<< vec[i] << " ";
        }
        cout<< endl;
    }

};

int main(){
    stack s;
    s.push(20);
    s.push(40);
    s.push(50);
    s.pop();
    s.display();
    s.user_input();
    s.display();
    return 0;
}

