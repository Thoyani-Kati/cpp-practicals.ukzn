#include "Question2.h"
#include <iostream>

MyQueue::MyQueue(size_t sz):elem(new T[sz]),capacity(sz),head(0),size_elem(0),tail(0)
{

}

MyQueue::~MyQueue()
{
    delete[] elem;
}


    T MyQueue::last(){
        if(size_elem==0){
            std::cout<<"Queue empty";
            return T();

        }
        return elem[tail];


}
    T MyQueue::first(){
        if(size_elem==0){
            std::cout<<"Queue empty";
             return T();

        }
        return elem[head];

    }

    void MyQueue::add(T& d){
        if(capacity==size_elem){
            std::cout<<"Queue full";
            return;
        }
        elem[tail++]=d;

    }

    T MyQueue::deque_(){
        if(size_elem==0){
            std::cout<<"Queue empty";
            return T();
        }else if(capacity==(head+1){
             T d = elem[head];
             size_elem=head=0;
             return d;
        }
         --size_elem;
        return elem[head++];

    }




