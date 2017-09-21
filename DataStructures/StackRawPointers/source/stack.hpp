#ifndef STACK_HPP
#define STACK_HPP
#include <iostream>
    class stack{
    public:
    stack();
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
    int size() const;
    void print();
    };
#endif