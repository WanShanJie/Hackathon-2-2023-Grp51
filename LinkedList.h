#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <iomanip>

using namespace std;

template <class T>
class ListNode{
	public:
		T value; 
		ListNode<T> *next; 

		ListNode (T nodeValue){
			value = nodeValue;
			next = nullptr;
		}
};
template <class T>
class LinkedList{
	private:
		ListNode<T> *head;
		int num;
	public:
		LinkedList(){ 
		head = nullptr;
		num = 0;
		}

		~LinkedList();

		void appendNode(T); 
		void insertNode(T); 
		void deleteNode(T); 
		bool searchNode(T); 
		void displayList() const; 
		T getMove(int) const;
		int getNum();
};
template <class T>
void LinkedList<T>::appendNode(T newValue){
	ListNode<T> *newNode; 
	ListNode<T> *nodePtr; 

	newNode = new ListNode<T>(newValue);

	if (!head)
		head = newNode;
	else 
	{
		nodePtr = head;
		while (nodePtr->next){
			nodePtr = nodePtr->next;
		}
		nodePtr->next = newNode;
	}
	num++;
}

template <class T>
void LinkedList<T>::insertNode(T newValue){
	ListNode<T> *newNode;
	ListNode<T> *nodePtr;
	ListNode<T> *previousNode = nullptr;
	newNode = new ListNode<T>(newValue);

	if (!head){
		head = newNode;
		newNode->next = nullptr;
	}
	else 
	{
		nodePtr = head;

		previousNode = nullptr;
		while (nodePtr != nullptr && nodePtr->value.getType() < newValue.getType() ) 
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		if (previousNode == nullptr)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		else 
		{
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
	num++;
}

template <class T>
void LinkedList<T>::displayList() const{
	ListNode<T> *nodePtr;
	
	if(!head){
		cout << "There is no move in your move list!"<<endl;
		return;
	}
	int count = 1;
	nodePtr = head;
	cout << "                    List of Moves "<<endl;
	cout << "------------------------------------------------------------" << endl;
	while (nodePtr){
		cout << count <<". ";
		nodePtr->value.display();
		nodePtr = nodePtr->next;
		count++;
	}
}

template <class T>
void LinkedList<T>::deleteNode(T searchValue){
	ListNode<T> *nodePtr; 
	ListNode<T> *previousNode; 
	if (!head)
		cout <<"List is empty\n";
	if (head->value.getName() == searchValue.getName()){
		nodePtr=head;
		head=head->next;
		delete nodePtr;
		num--;
	}
	else{
		nodePtr = head;
		while (nodePtr != nullptr && nodePtr->value.getName()!= searchValue.getName()){
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		if (nodePtr){
			previousNode->next = nodePtr->next;
			delete nodePtr;
			num--;
		}
	}
}

template <class T>
bool LinkedList<T>::searchNode(T searchValue){
	ListNode<T> *nodePtr; 
	ListNode<T> *previousNode; 
	if (!head)
		return false;
	if (head->value.getName() == searchValue.getName()){
		return true;
	}
	else{
		nodePtr = head;
		while (nodePtr != nullptr && nodePtr->value.getName()!= searchValue.getName()){
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		if (nodePtr){
			return true;
	}
		else{
			return false;
		}
	}			
}

template <class T>
LinkedList<T>::~LinkedList(){
	ListNode<T> *nodePtr; 
	ListNode<T> *nextNode; 
	nodePtr = head;
	while (nodePtr != nullptr){
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
}

template <class T>
T LinkedList<T>::getMove(int index) const{
    ListNode<T> *nodePtr = nullptr;
	nodePtr = head;
	int count = 1;
	
    while (nodePtr) {
        if (count == index) {
            return nodePtr->value;
        }
        nodePtr = nodePtr->next;
        count++;
    }
        // Return a default value or throw an exception for invalid index
        // depending on your requirements
    return T();
}

template <class T>
int LinkedList<T>::getNum(){
	return num;
}


#endif
