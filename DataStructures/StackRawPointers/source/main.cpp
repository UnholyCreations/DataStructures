#include "stack.hpp"
#include <iostream>
int main()
{

	stack my_stack;
	my_stack.print();
	my_stack.push(1);
	my_stack.print();
	my_stack.push(2);
	my_stack.print();
	my_stack.push(3);
	my_stack.print();
	my_stack.push(4);
	my_stack.print();
	my_stack.push(5);
	my_stack.print();
	my_stack.push(6);
	my_stack.print();
	my_stack.push(7);
	std::cout<<"my_stack:\n";
	my_stack.print();
	stack copy_stack(my_stack);
	my_stack.pop();
	std::cout<<"copy_stack:\n";
	copy_stack.print();
	std::cout<<"my_stack:\n";
	my_stack.print();
	stack move_stack=(std::move(copy_stack));
	std::cout<<"copy_stack:\n";
	copy_stack.print();
	std::cout<<"move_stack:\n";
	move_stack.print();
	

	return 0;
}