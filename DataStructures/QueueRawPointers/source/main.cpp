#include "queue.hpp"
#include <iostream>
int main()
{
	//std::cout<<"iaiaou\n";
	queue my_queue;
	my_queue.print();
	my_queue.push(1);
	my_queue.push(2);
	my_queue.push(3);
	my_queue.push(4);
	my_queue.push(5);
	my_queue.push(6);
	my_queue.push(7);
	std::cout<<"size:"<<my_queue.size()<<"\n";
	my_queue.print();
	my_queue.pop();
	std::cout<<"size:"<<my_queue.size()<<"\n";
	my_queue.print();
	std::cout<<"EO TUK PUSHVAM!\n";
	my_queue.push(15);
	my_queue.pop();
	std::cout<<"size:"<<my_queue.size()<<"\n";
	my_queue.print();
		my_queue.pop();
	std::cout<<"size:"<<my_queue.size()<<"\n";
	my_queue.print();
		my_queue.pop();
	std::cout<<"size:"<<my_queue.size()<<"\n";
	my_queue.print();
		my_queue.pop();
	std::cout<<"size:"<<my_queue.size()<<"\n";
	my_queue.print();
		my_queue.pop();
	std::cout<<"size:"<<my_queue.size()<<"\n";
	my_queue.print();
		my_queue.pop();
	std::cout<<"size:"<<my_queue.size()<<"\n";
	my_queue.print();
		my_queue.pop();
	std::cout<<"size:"<<my_queue.size()<<"\n";
	my_queue.print();
		my_queue.pop();
	my_queue.push(2);
	my_queue.push(3);
	my_queue.push(4);
	my_queue.print();
	std::cout<<"size:"<<my_queue.size()<<"\n";





	return 0;
}