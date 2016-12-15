#include<iostream>
using namespace std;


struct list {
	int data;
	struct list *next;
} *node = NULL, *first = NULL, *last = NULL, *node1 = NULL;

class linkedlist {
	public: 

		
		void insert() {
			list *addNew = new list;
			cout << "Enter value for the node:" << endl;
			cin >> addNew->data;
			if(first == NULL) {
				addNew->next = NULL;
				first = addNew;
				last = addNew;
				cout << "Linked list Created!" << endl;
			}
			else {
				addNew->next = NULL;
				last->next = addNew;
				last = addNew;
				cout << "Data Inserted in the Linked list!" << endl;
			}
		}

		
		void display() {
			node = first;
			cout << "List of data in Linked list" << endl;
			while(node != NULL) {
				cout << node->data << endl;
				node = node->next;
			}
		}
	
		
		void del() {
			int count = 0, number, i;
			for(node = first; node != NULL; node = node->next)
				count++;
			display();
			node = node1 = first;
			cout << count << " nodes available here!" << endl;
			cout << "Enter the node number which you want to delete:" << endl;
			cin >> number;
			if(number != 1) {
				if(number <= count) {
					for(i = 2; i <= number; i++)
						node = node->next;
					for(i = 2; i <= number-1; i++)
						node1 = node1->next;
					node1->next = node->next;
					node->next = NULL;
					node = NULL;
				}
				else
					cout << "Invalid node number!" << endl;
			}
			else {
				first = node->next;
				node = NULL;
			}
			cout << "Node has been deleted successfully!" << endl;
		}
	
};

int main() {
	int op = 0;
	linkedlist llist = linkedlist();
	while(op != 4) {
		cout << "1. Insert << endl;
		cout << "2. Delete " << endl;
		cout << "3. Display " << endl;
		cout << "4. Exit " << endl;
		cout << "Enter your choice:" << endl;
		cin >> op;
		switch(op) {
			case 1:
				llist.insert();
				break;
			case 2:
				llist.del();
				break;
			case 3:
				llist.display();
				break;
			case 4:
				cout << "Bye Bye!" << endl;
				return 0;
				break;
			default:
				cout << "Invalid choice!" << endl;
		}
	}
	return 0;
}
