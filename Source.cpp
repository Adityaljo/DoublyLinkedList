#include<iostream>
#include"LinkedList.h"
using namespace std;

int main()
{
	LinkedList LL(12);
	LL.print();
	LL.rev_print();
	LL.insertNode_at_start(45);
	LL.print();
	LL.rev_print();
	LL.insertNode_at_end(57);
	LL.print();
	LL.rev_print();
	LL.insertNode_after_val(22,12);
	LL.print();
	LL.rev_print();
	LL.reverseList();
	LL.print();
	LL.reverseList();
	LL.print();
	LL.deleteNode_after_val(12);
	LL.print();
	LL.rev_print();
	
	return 1;
}