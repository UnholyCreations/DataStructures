#ifndef STACK_HPP
#define STACK_HPP
#include <iostream>
    class stack{
    public:
    stack(); //default
    stack(const stack &input); //copy constructor
    stack(stack &&input); //move constructor
    ~stack();
    private:
        struct Node{
            int m_data;
            Node* m_next;
            Node* m_previous;
        Node();
        ~Node();
        };
    int m_size;
    Node* m_head;
    Node* m_tail;
    public:
    void push(int f_data);
    void pop();
    void pop_reverse();
    int size() const;
    void print();
    //int get_data();



    };
#endif