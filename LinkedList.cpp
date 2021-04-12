#include "LinkedList.h"
#include<iostream>
#include<string>
using namespace std;

Node*LinkedList:: insertNode_at_start(int k) {
	Node* newNode = new Node(nullptr,k,head);
	head->prev = newNode;
	head = newNode;
	return newNode;
}

void LinkedList::insertNode_at_end(int k) {
	Node* currNode = head;
	while (currNode->next != nullptr)
		currNode = currNode->next;
	Node* newNode = new Node(currNode,k,nullptr);
	currNode->next = newNode;
}

void LinkedList::insertNode_after_val(int k, int val) {

	Node* currNode = head;
	Node* nextNode;
	while (currNode != nullptr && currNode->data!=val) 
		currNode = currNode->next;
	if (currNode) {
		nextNode = currNode->next;;
		Node* newNode = new Node(currNode,k,nextNode);
		if (nextNode)
			nextNode->prev = newNode;
		currNode->next = newNode;
	}
	else
		cout << "value does not exist in LL" << endl;
}

void LinkedList::deleteNode_after_val(int val) {
	Node* currNode = head;
	Node* nextNode;
	while (currNode != nullptr && currNode->data != val)
		currNode = currNode->next;
	if (currNode) {
		nextNode = currNode->next;
		if (nextNode) {
			currNode->next = nextNode->next;
			if (nextNode->next) 
				nextNode->next->prev = currNode;
			delete nextNode;
		}
		else
			cout << "element does not exist in LL" << endl;
	}
	else
		cout << "value does not exist in LL" << endl;
}

void LinkedList::print() {
	Node* curr = head;
	cout << "forward order" << endl;
	while (curr != nullptr) {
		cout << curr->data << "----->";
		curr = curr->next;
	}
	cout << endl;
 }
void LinkedList::rev_print() {
	Node* curr = head;
	cout << "reverse order" << endl;
	while (curr->next != nullptr) 
		curr = curr->next;

	while (curr!= nullptr) {
		cout << curr->data << "----->";
		curr = curr->prev;
	}
	cout << endl;
}

void LinkedList::reverseList() {
	Node* curr = head;
	while (curr->next != nullptr) {
		swap(curr->prev, curr->next);
		curr = curr->prev;
	}
	swap(curr->prev, curr->next);
	head = curr;



}