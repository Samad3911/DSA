#include <iostream>

using namespace std;

class Stack{
    int* m_Arr;
    int m_Size;
    int m_Top;

    public:

    Stack(int size){
        m_Size = size;
        m_Arr = new int(m_Size);
        m_Top = -1;
    }

    void push(int element){
        if(m_Top == m_Size - 1){
            cout<<"Stack Overflow! "<<endl;
        }
        else{
            m_Arr[++m_Top] = element;
        }
    }

    void pop(){
        if(m_Top == -1){
            cout<<"Stack Underflow! "<<endl;
        }else{
            --m_Top;
        }
    }
    int peek(){
        if(m_Top >= 0){
            return m_Arr[m_Top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        return m_Top == -1;
    }

};

int main(){
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<"Peek element of stack is: "<<st.peek()<<endl;
    st.pop();
    cout<<"Peek element of stack is: "<<st.peek()<<endl;
    st.pop();
    cout<<"Peek element of stack is: "<<st.peek()<<endl;
    st.pop();
    cout<<"Peek element of stack is: "<<st.peek()<<endl;
    st.pop();
    if(st.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    st.pop();
    if(st.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    return 0;
}