#include "Tree.cpp"
#include <iostream>
using std::cout;
int main()
{
	Tree *t=new Tree();	
	int data[]={4,2,6,1,3,5,7};
	for(int i=0;i<7;i++)
	{
		t->insert(data[i]);
	}
	t->traverse(0);
	t->traverse(1);
	t->traverse(2);
}