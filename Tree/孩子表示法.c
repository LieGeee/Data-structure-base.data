#include<stdio.h>
#define MAX_TREE_SIZE 100
typedef int TElemType;
//孩子结点
typedef struct CTNode
{
	int child;
	struct CTNode* next;
}*ChildPtr;
//表头结构
typedef struct
{
	TElemType data;
	ChildPtr firstchild;
}CTBox;
//树结构
typedef struct
{
	CTBox nodes[MAX_TREE_SIZE];		//结点数组
	int r, n;						//根的位置和结点数
}CTree;
