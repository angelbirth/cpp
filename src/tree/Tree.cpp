#include <iostream>
#include "Tree.h"

#ifndef NULL
#define NULL 0
#endif

TreeNode::TreeNode(int d)
{
	data=d;
}

Tree::Tree()
{
	root=0;
}

void Tree::insert(int data)
{
	if(root==NULL)
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
		if(node->left==NULL)
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
		if(node->right==NULL)
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
	if(node==NULL) return;
	std::cout<<node->data<<" ";
	preorder(node->left);
	preorder(node->right);
}

void Tree::inorder(const TreeNode* node)
{
	if(node==NULL) return;
	inorder(node->left);
	std::cout<<node->data<<" ";
	inorder(node->right);
}

void Tree::postorder(const TreeNode* node)
{
	if(node==NULL) return;
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