//Given a stack with push(), pop(), empty() operations, delete the middle of the stack without using any additional data structure.

#include <iostream>
#include <stack>


using namespace std;

void deleteMid(stack<int>&s, int sizeOfStack)
    {
        stack<int> s2;
        
        for(int i = 0;i < sizeOfStack;i++){
            if(i == (sizeOfStack/2)){
                s.pop();
                break;
            }
            else{
                int num = s.top();
                s2.push(num);
                s.pop();
            }
        }
        
        while(!s2.empty()){
            s.push(s2.top());
            s2.pop();
        }
    }

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<<"Before deleting middle element"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n";

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    deleteMid(s, s.size());

    cout<<"After deleting middle element"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    cout<<"\n";

    return 0;
}