//automating the process of linking the nodes
#include<iostream>

struct node{
	node * next;
	int data;
};


node* addNewNode( node* head, int data, int location,int numberOfNodes){
	//getting the new node
	node *temp = new node();
	if( temp == NULL || head == NULL && location > 1){
		std::cout<<"ooooppppsssss, "<<numberOfNodes - 1<<" remaining choices left..."<<"\n";
		return NULL;
	}

	if( location <= 1 || head == NULL)
	{
      temp -> data = data;
      temp -> next = head;
      head = temp;     
	}
	//to add a node at nth position
	else{
		
		//pointer to get to the desired location
		node *temp1 = head;
		for( int i = 1; i < location - 1; ++i){
			temp1 = temp1 -> next;
		}
		
		//after the loop is done, the temp 1 will have the address of the node at the
		// current position = location (or the desired location)
		// now we are going to link the new node with the node at the desired location
		//so to prevent orphaning the nodes 
		temp ->next = temp1 -> next;
		temp -> data = data;
		temp1 -> next = temp; //linked the new node


	}



return head;
}

//function to print the list

void printList(node *head){
	while(head != NULL){
		std::cout<<"\n"<<head->data<<" ";
		head = head->next;
	}
	std::cout<<"\n";
}

int main(){
node* HEAD = NULL;
std::cout<<"enter the number of nodes? ";
int n,value,position;
std::cin>>n;
//asking for the data 
for(int i= 0; i< n;  ++i){
	std::cout<<"enter the value: ";
	std::cin>>value;
	std::cout<<"enter the location? ";
	std::cin>>position;
	HEAD = addNewNode(HEAD,value,position,n);
	if( HEAD == NULL) std::cout<<"enter first node first....";
	else std::cout<<"the list is: ";
	printList(HEAD);
	
}


return 0;
}


