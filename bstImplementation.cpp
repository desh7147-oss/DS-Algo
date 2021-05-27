//code for the implementation of Binay Search Tree(BST)
//using C++
#include<iostream>

//creating datatype Binary Search Node (BSTnode)
struct bstNode{
	bstNode* left;
	bstNode* right;
	int data;
};

//function to insert the nodes in the BST manner
bstNode *insert(bstNode* root,int data){
	//when the tree has no elements or it has reached to an empty spot 
	if( root == NULL ){
		bstNode* newNode = new bstNode();
		newNode -> left = NULL;
		newNode -> right = NULL;
		newNode -> data = data;
		root = newNode;

	}

	else if( data > root -> data) {
		//if data to be inserted is greater than the data in root node
		// then it must be inserted on the right side of the tree
		root ->right = insert( root -> right, data);
	}

	else {
		//if data is lesser than the data in root then it must
		//be inserted to the left of the root
		root -> left = insert( root -> left, data);
	}
	return root;
}

//printing the data
void  printNodes(bstNode* root){
    if ( root == NULL ) return ;
	printNodes( root -> left);
	std::cout<< root -> data<<" ";
	printNodes( root -> right);
	
}

//function to search in the tree
bool search(bstNode* root, int data){
	//since we are working on binary  search tree
	//therefore we'll be using binary search
	if ( root == NULL ) return false;
	else if( root -> data == data) return true;
	else if( root -> data < data) return search( root -> right, data);
	else return search( root -> left, data);

}

// main function
int main(){
	bstNode* ROOT = NULL;
	std::cout<<"enter the number of nodes? ";
    int numberOfNodes = 0,value;
	std::cin>> numberOfNodes;
	for( int i = 0; i < numberOfNodes; ++i){
		std::cout<<"enter the value for the "<<i<<" th node: ";
		std::cin>> value;
		ROOT = insert( ROOT, value);
	}

// to serch a number
	std::cout<<"enter the number to search: ";
	int number;
	std::cin>>number;
	if(search(ROOT, number) == true) {std::cout<<"yeah it is here,"<<"\n"<<"and the tree is "<<"\n";
	printNodes(ROOT);}
	else {std::cout<<"We're sorry you need to insert it first. "<<"\n"<<"by the way the tree is: "<<"\n";
	printNodes(ROOT);}

std::cout<<"\n";
return 0;
}
