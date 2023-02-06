typedef int TElemType;
#define NULL 0

//二叉链表
typedef struct BiTnode
{
	TElemType data;
	struct BiTNode* lchild,* rchild;
}BiTNode,*BiTree;
//前序表示法
//初始条件：二叉树存在
//操作结果：前序递归遍历T
void PreOrderTraverse(BiTree T)
{
	if (T = NULL)
		return;								//表示程序不用再运行
	printf("%c", T->data);					//显示结点数据，可以更改为其他对结点的操作
	PreOrderTraverse(T->lchild);
	PreOrderTraverse(T->rchild);

}//中序遍历算法，相当于把左孩子的递归提前
void InOrderTraverse(BiTree T)
{
	if (T = NULL)
		return;									//表示程序不用再运行	
	InOrderTraverse(T->lchild);
	printf("%c", T->data);						//显示结点数据，可以更改为其他对结点的操作
	InOrderTraverse(T->rchild);
}
//后续
void PosOrderTraverse(BiTree T)
{
	if (T = NULL)
		return;									//表示程序不用再运行	
	PosOrderTraverse(T->lchild);
	PosOrderTraverse(T->rchild);
	printf("%c", T->data);						//显示结点数据，可以更改为其他对结点的操作
}
//二叉树的建立
