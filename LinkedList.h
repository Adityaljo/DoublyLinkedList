#pragma once

struct Node {
	int data;
	Node* prev=nullptr, * next=nullptr;
	Node() {};
	Node(Node* prevptr, int val, Node* nextptr) :prev(prevptr), data(val), next(nextptr) {};
};

class LinkedList
{
public:
	Node* head = nullptr;

	//LinkedList(int k) { Node* newNode = new Node; newNode->data = k;  head = newNode; newNode->prev = nullptr; newNode->next = nullptr; }
	LinkedList(int k) { Node* newNode = new Node(nullptr, k, nullptr); head = newNode; }

	Node * insertNode_at_start(int k);
	void insertNode_at_end(int k);
	void insertNode_after_val(int k,int val);
	void deleteNode_after_val(int val);
	void print();
	void rev_print();
	void reverseList();
};

