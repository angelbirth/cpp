class TreeNode
{
	public:
		TreeNode *left,*right,*parent;
		int data;
		TreeNode(int);
};

enum TraversalOrder
{
	PREORDER=0,
	INORDER,
	POSTORDER
};

class Tree
{
	private:
		TreeNode *root;
		void insert(TreeNode *const,int);
		void preorder(const TreeNode*);
		void inorder(const TreeNode*);
		void postorder(const TreeNode*);

	public:
		void insert(int);
		void traverse(int);
		Tree();
};