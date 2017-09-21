#ifndef QUEUE_HPP
#define QUEUE_HPP
#include <iostream>
    class queue{
    public:
    queue();
    ~queue();
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