#include <iostream>

using namespace std;

class TwoStack{
    int* m_Arr;
    int m_Size;
    int m_Top1;
    int m_Top2;

    public:

    TwoStack(int size){
        m_Size = size;
        m_Arr = new int(m_Size);
        m_Top1 = -1;
        m_Top2 = m_Size;
    }

    void push1(int element){
        if(m_Top2 - m_Top1 == 1){
            cout<<"Stack Overflow! "<<endl;
        }
        else{
            m_Arr[++m_Top1] = element;
        }
    }

    void push2(int element){
        if(m_Top2 - m_Top1 == 1){
            cout<<"Stack Overflow! "<<endl;
        }
        else{
            m_Arr[--m_Top2] = element;
        }
    }

    void pop1(){
        if(m_Top1 == -1){
            cout<<"Stack Underflow! "<<endl;
        }else{
            --m_Top1;
        }
    }

    void pop2(){
        if(m_Top1 == m_Size){
            cout<<"Stack Underflow! "<<endl;
        }else{
            ++m_Top2;
        }
    }

    int peek1(){
        if(m_Top1 >= 0){
            return m_Arr[m_Top1];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    int peek2(){
        if(m_Top2 < m_Size){
            return m_Arr[m_Top2];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty1(){
        return m_Top1 == -1;
    }

    bool isEmpty2(){
        return m_Top2 == m_Size;
    }

};

int main(){
    TwoStack st(5);
    st.push1(10);
    st.push1(20);
    st.push1(30);
    st.push2(40);
    st.push2(50);
    cout<<"Peek element of stack is: "<<st.peek1()<<endl;
    st.pop1();
    cout<<"Peek element of stack is: "<<st.peek2()<<endl;
    st.pop2();
    cout<<"Peek element of stack is: "<<st.peek1()<<endl;
    st.pop1();
    cout<<"Peek element of stack is: "<<st.peek2()<<endl;
    st.pop2();
    if(st.isEmpty1()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    st.pop1();
    if(st.isEmpty2()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    return 0;
}