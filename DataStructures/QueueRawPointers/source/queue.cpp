#include "queue.hpp"
queue::Node::Node(): m_data(0),m_next(NULL),m_previous(NULL) {std::cout<<"node created\n";};
queue::Node::~Node() {std::cout<<"node deleted\n";};
queue::queue():m_size(0),m_head{NULL},m_tail{NULL} {m_size=0; std::cout<<"queue created.\n";}
queue::~queue() {while(m_size>0) {pop();} }

int queue::size() const
{
return m_size;
}

void queue::push(int f_data)
{
		std::cout<<f_data<<" pushed.\n";
		queue::Node* newnode =new queue::Node();
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

void queue::pop()
{
	if (m_size>1)
	{
		m_size--;
		queue::Node* p=m_tail;
		if (m_size>0)
		{
		m_tail=m_tail->m_next;
		}
		else
		{
		m_tail->m_previous=NULL;
		m_tail->m_next=NULL;
		}
		m_tail->m_previous=NULL;
		delete p;
	}
	else if (m_size==1)
	{
		m_size-=1;
		queue::Node* p=m_tail;
		m_head=NULL;
		m_tail=NULL;
		delete p;
	}
}
void queue::print()
{
if (m_size==0) {return;}
queue::Node* p=m_tail;
std::cout<<"queue:";
while (p!=NULL)
	{
		std::cout<<p->m_data<<" ";
		p=p->m_next;
	}
std::cout<<"\n";
std::cout<<"head:"<<m_head->m_data<<"\n";
std::cout<<"tail:"<<m_tail->m_data<<"\n";
}