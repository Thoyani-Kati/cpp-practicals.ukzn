#ifndef QUESTION2_H
#define QUESTION2_H

template<typename T>
class MyQueue
{
    typedef unsigned int uint;
    T* elem;
    uint size_elem, capacity,head,tail;


    public:
        MyQueue(size_t sz);
        virtual ~MyQueue();

        T deque_();
        void add(T& data);
        T last(T& data);
        T first(T& data);



};

#endif // QUESTION2_H
