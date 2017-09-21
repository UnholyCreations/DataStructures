#include "stack.hpp"
stack::Node::Node(): m_data(0),m_next(NULL),m_previous(NULL) {std::cout<<"node created\n";};
stack::Node::~Node() {std::cout<<"node deleted\n";};
stack::stack():m_size(0),m_head{NULL},m_tail{NULL} {m_size=0; std::cout<<"stack created.\n";}
stack::~stack() {while(m_size>0) {pop();} }


int stack::size() const
{
return m_size;
}

void stack::push(int f_data)
{
		std::cout<<f_data<<" pushed.\n";
		stack::Node* newnode =new stack::Node();
		newnode->m_data=f_data;
		if (m_size==0)
		{
		newnode->m_next=NULL;
		m_head=m_tail=newnode;
		m_size+=1;
		}
		else
		{
		newnode->m_next=m_tail;
		m_tail->m_previous=newnode;
		m_tail=newnode;
		m_size+=1;
		}
}

void stack::pop()
{
	if (m_size>1)
	{
		m_size--;
		stack::Node* p=m_head;
		if (m_size>0)
		{
		m_head=m_head->m_previous;
		}
		else
		{
		m_head=m_tail=NULL;
		m_head->m_previous=NULL;
		}
		m_head->m_next=NULL;
		delete p;
	}
	else if (m_size==1)
	{
		m_size-=1;
		stack::Node* p=m_head;
		m_head=NULL;
		m_tail=NULL;
		delete p;
	}
}
void stack::print()
{
if (m_size==0) {return;}
stack::Node* p=m_tail;
std::cout<<"stack:";
while (p!=NULL)
	{
		std::cout<<p->m_data<<" ";
		p=p->m_next;
	}
std::cout<<"\n";
std::cout<<"head:"<<m_head->m_data<<"\n";
std::cout<<"tail:"<<m_tail->m_data<<"\n";
}