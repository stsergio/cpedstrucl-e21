#include<iostream>
using namespace std;



struct node
{
    int data;
    struct node *next;
};


class stack
{
    struct node *top;
    public:
    stack() 
    {
        top=NULL;
    }
    void push(); 
    void pop();  
    void show(); 
};

void stack::push()
{
    int value;
    struct node *ptr;
    cout<<endl;
	cout<<"=========================="<<endl;
	cout<<"PUSH Operation"<<endl;
    cout<<endl;
	cout<<"Enter a number to insert: "<<endl;
    cin>>value;
    ptr=new node;
    ptr->data=value;
    ptr->next=NULL;
    if(top!=NULL)
        ptr->next=top;
    top=ptr;
    cout<<endl<<"New item is inserted to the stack"<<endl;

}


void stack::pop()
{
    struct node *temp;
    if(top==NULL)
    {
        cout<<"The stack is empty"<<endl;
    }
    temp=top;
    top=top->next;
    cout<<endl;
	cout<<"=========================="<<endl;
	cout<<"POP Operation"<<endl;
	cout<<endl;
	cout<<"Value is "<<endl<<temp->data;
    delete temp;
}


void stack::show()
{
    struct node *ptr1=top;
    cout<<"The stack is "<<endl;
    while(ptr1!=NULL)
    {
        cout<<ptr1->data<<"- ";
        ptr1=ptr1->next;
    }
    cout<<"NULL"<<endl<<endl;
}


int main()
{
    stack s;
    int choice;
    while(1)
    {
        cout<<endl;
        cout<<"=========================="<<endl;
		cout<<"STACK USING LINKED LIST"<<endl;
        cout<<"1: PUSH"<<endl;
		cout<<"2: POP"<<endl;
		cout<<"3: DISPLAY STACK"<< endl;
		cout<<"4: EXIT"<<endl<<endl;
        cout<<"Enter your choice(1-4): "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                s.push();
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.show();
                break;
            case 4:
                return 0;
                break;
            default:
                cout<<"Invalid option"<<endl;
                break;
        }
    }
    return 0;
}
