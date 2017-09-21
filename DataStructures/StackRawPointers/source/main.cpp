#include "stack.hpp"
#include <iostream>
int main()
{
	//std::cout<<"iaiaou\n";
	stack my_stack;
	my_stack.print();
	my_stack.push(1);
	my_stack.push(2);
	my_stack.push(3);
	my_stack.push(4);
	my_stack.push(5);
	my_stack.push(6);
	my_stack.push(7);
	std::cout<<"size:"<<my_stack.size()<<"\n";
	my_stack.print();
	my_stack.pop();
	std::cout<<"size:"<<my_stack.size()<<"\n";
	my_stack.print();
	std::cout<<"EO TUK PUSHVAM!\n";
	my_stack.push(15);
	my_stack.pop();
	std::cout<<"size:"<<my_stack.size()<<"\n";
	my_stack.print();
		my_stack.pop();
	std::cout<<"size:"<<my_stack.size()<<"\n";
	my_stack.print();
		my_stack.pop();
	std::cout<<"size:"<<my_stack.size()<<"\n";
	my_stack.print();
		my_stack.pop();
	std::cout<<"size:"<<my_stack.size()<<"\n";
	my_stack.print();
		my_stack.pop();
	std::cout<<"size:"<<my_stack.size()<<"\n";
	my_stack.print();
		my_stack.pop();
	std::cout<<"size:"<<my_stack.size()<<"\n";
	my_stack.print();
		my_stack.pop();
	std::cout<<"size:"<<my_stack.size()<<"\n";
	my_stack.print();
		my_stack.pop();
	my_stack.push(2);
	my_stack.push(3);
	my_stack.push(4);
	my_stack.print();
	std::cout<<"size:"<<my_stack.size()<<"\n";





	return 0;
}