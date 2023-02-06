#include<stdio.h>
#define MAX_TREE_SIZE 100
typedef int TElemType;
typedef struct PTNode  // 结点结构
{
	TElemType data;
	int parent;
}PTNode;

typedef struct
{
	PTNode node[MAX_TREE_SIZE];	//节点数组
	int r, n;			//根的位置和结点数
}PTree;
//因为根节点没有双亲，将其设为-1