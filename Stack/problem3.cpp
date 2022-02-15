#include <iostream>
#include <stack>


using namespace std;

void reverse(stack<int> & s){
    stack<int> st;
    while(!s.empty()){
        st.push(s.top());
        s.pop();
    }

    s = st;

}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<<"Original Stack"<<endl;
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

    reverse(s);

    cout<<"After reversing stack"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    cout<<"\n";

    return 0;
}