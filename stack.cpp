// C++ program to delete a given key from
// linked list.
#include <bits/stdc++.h>
using namespace std;

// Structure for a node
class Node {
public:
	int data;
	Node* next;
};
#include <bits/stdc++.h>
using namespace std;


class stackNode {
//class for each node which is a single stack element
  public:
    int data;
    stackNode *next;
    stackNode(int a) { //constructor
        data = a;
        next = NULL;
    }
};

stackNode *top=NULL; //top of stack initialized to NULL
int size=0;// size of stack initialized to 0


void push(int x) { //push operation

    stackNode* node=(stackNode*)(malloc(sizeof(stackNode)));
    node->data=x;
    node->next=top;
    top=node;
    cout<<x<<" is pushed\n";
    size++;
}

bool isEmpty(){ //isEmpty function
  if(top==NULL && size==0)
  return true;
  else
  return false;
}

int pop() { //pop operation

    if(isEmpty()){
      cout<<"stack is empty\n";
      return INT_MIN;
    }
    else{
        size--;
        int temp=top->data;
        stackNode* tempNode=top;
        top=top->next;
        free(tempNode);
        return temp;
    }
}

int top_stack(){ //top() operation
  if(isEmpty()){
    cout<<"stack is empty\n";
    return INT_MIN;
  }
  else{
    return top->data;
  }

}

//main function
int main(){

  //menu for operations
  //press 1 for push (with data)
  //press 2 for pop()
  //press 3 for top()
  //press 4 for size()
  //press 0 to exit()



  cout<<"press 1 for push\n";
  cout<<"press 2 for pop()\n";
  cout<<"press 3 for top()\n";
  cout<<"press 4 for size()\n";
  cout<<"press 0 for exit\n";


  int choice;
  cout<<"press your choice\n";
  cin>>choice;
  while(choice){
    if(choice==1){
      int data;
      cout<<"Enter element\n";
      cin>>data;
      push(data);
    }
    else if(choice==2){
      int item=pop();
      if(item==INT_MIN){}
      else
      cout<<"Popped element: "<<item<<endl;
    }
    else if(choice==3){
      int item=top_stack();
      if(item==INT_MIN){}
      else
      cout<<"Top element: "<<item<<endl;
    }
    else if(choice==4){
      cout<<"Size is: "<<size<<endl;
    }
    else
    cout<<"Invalid number, try again!\n";
    cout<<"press your choice\n";
    cin>>choice;

  }

  cout<<"Exiting...\n";
  return 0;
}
