#include <iostream>

using namespace std;

class Queue{
    int *arr;
    int qFront;
    int qRear;
    int size;


    public:

    Queue(int size){
        this->size = size;
        arr = new int(this->size);
        qFront = 0;
        qRear = 0;
    }

    void push(int ele){
        if(qRear == this->size){
            cout<<qFront<<" "<<qRear;
            cout<<"Queue is full\n";
        }
        else{
            arr[qRear++] = ele;
        }
    }

    void pop(){
        if(qFront == qRear){
            cout<<"Queue is empty\n";
        }
        else{
            cout<<"Element at front is: "<<arr[qFront]<<"\n";
            ++qFront;
            if(qFront == qRear){
                qFront = 0;
                qRear = 0;
            }
        }
    }

    void front(){
        if(qFront == qRear){
            cout<<"Queue is Empty\n";
        }
        else{
            cout<<arr[qFront]<<"\n";
        }
    }

    bool empty(){
        return qFront == qRear;
    }

    ~Queue(){
        delete arr;
    }

};

int main(){
    Queue q(5);
    q.push(1);
    q.push(2);
    q.pop();
    q.push(3);
    q.push(4);
    q.front();
    q.pop();
    q.pop();
    q.front();
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    return 0;
}