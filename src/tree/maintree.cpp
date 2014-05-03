#include "Tree.cpp"
#include <iostream>

int main()
{
	Tree *t=new Tree();	
	int data[]={4,2,6,1,5,7};
	for(int i=0;i<7;i++)
	{
		t->insert(data[i]);
	}
	t->traverse(0);
	t->traverse(1);
	t->traverse(2);
	TreeNode *tn=t->find(0);
	if(tn)
		std::cout<<tn->data<<std::endl;
}