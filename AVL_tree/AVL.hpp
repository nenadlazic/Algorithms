/**
* Author: Nenad Lazic
* 
* Date: 21.02.2018.
*
*/

#ifndef AVL_H
#define AVL_H

using namespace std;

class AVL{
	private:
		struct node{
			int data;
			int height;
			node* left;
			node* right;
		};

		node* root;

		node* priv_insert(int x, node* t);
		node* priv_remove(int x, node* t);
		node* priv_singleRightRotate(node* &t);
		node* priv_singleLeftRotate(node* &t);
		node* priv_doubleLeftRotate(node* &t);
		node* priv_doubleRightRotate(node* &t);
		node* priv_findMin(node* t);
		node* priv_findMax(node* t);
		int priv_height(node* t);
		int priv_getBalance(node* t);
		void priv_inorder(node* t);

	public:
		AVL();
		~AVL();
		void avl_insert(int x);
		void avl_remove(int x);
		void avl_display();
};

#endif
