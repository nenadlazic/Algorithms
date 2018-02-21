/**
* Author: Nenad Lazic
* 
* Date: 21.02.2018.
*
*/


#include<iostream>

#include"AVL.hpp"

using namespace std;

//############### public API ###################
AVL::AVL(){
	root = NULL;
}

AVL::~AVL(){
}

void AVL::avl_insert(int x){
	root = priv_insert(x, root);
}

void AVL::avl_remove(int x){
	root = priv_remove(x,root);
}

void AVL::avl_display(){
	priv_inorder(root);
	cout<<endl;
}
//############### public API ###################



//private functions
node* AVL::priv_insert(int x, node* t){

	//if tree is empty create root node
	if(t == NULL){
		t = new node;
		t->data = x;
		t->height = 0;
 		t->left = NULL:
		t.right = NULL;
	}
}



