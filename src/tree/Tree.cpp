#include <iostream>
#include "Tree.h"

#ifndef NULL
#define NULL 0
#endif

TreeNode::TreeNode(int d)
{
	data=d;
	left=right=parent=NULL;
}

TreeNode::TreeNode(int d,TreeNode *const p)
{
	data=d;
	left=right=0;
	parent=p;
}

Tree::Tree()
{
	root=0;
}

void Tree::insert(int data)
{
	if(!root)
	{
		root=new TreeNode(data);
	}
	else
	{
		insert(root,data);
	}
}

void Tree::insert(TreeNode *const node,int data)
{
	if(data<node->data)
	{
		if(!node->left)
		{
			node->left=new TreeNode(data);
		}
		else
		{
			insert(node->left,data);
		}
	}
	else if(data>node->data)
	{
		if(!node->right)
		{
			node->right=new TreeNode(data);
		}
		else
		{
			insert(node->right,data);
		}
	}
}

void Tree::preorder(const TreeNode* node)
{
	if(!node) return;
	std::cout<<node->data<<" ";
	preorder(node->left);
	preorder(node->right);
}

void Tree::inorder(const TreeNode* node)
{
	if(!node) return;
	inorder(node->left);
	std::cout<<node->data<<" ";
	inorder(node->right);
}

void Tree::postorder(const TreeNode* node)
{
	if(!node) return;
	postorder(node->left);
	postorder(node->right);
	std::cout<<node->data<<" ";
}

void Tree::traverse(int order)
{
	switch(order)
	{
		case 0:
			preorder(root);
			break;
		case 1:
			inorder(root);
			break;
		case 2:
			postorder(root);
			break;
		default:
			return;
	}
	std::cout<<std::endl;
}

TreeNode* Tree::find(int data)
{
	TreeNode *i=root;
	while(i)
	{
		if(data<i->data)
		{
			i=i->left;
		}
		else if(data>i->data)
		{
			i=i->right;
		}
		else return i;
	}
	return 0;
}