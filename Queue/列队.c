#include<stdio.h>
typedef int QElemType;
typedef int status;
#define ERROR  0
#define OK  1
#define OVERFLOW -1
#define MAXSIZE 100
//创建一个列队
typedef struct
{
	QElemType data[MAXSIZE];
	int front;
	int rear;
}SqQueue;
//初始化一个列队
status InitQueue(SqQueue *Q)
{
	Q->front = 0;
	Q->rear = 0;
	return OK;
}
//求列队长度
int QueueLength(SqQueue Q)
{
	return (Q.rear - Q.front + MAXSIZE) % MAXSIZE;
}
//入列操作
status EnQue(SqQueue* Q, QElemType e)
{
	if ((Q->rear + 1) % MAXSIZE == Q->front)return ERROR;
	Q->data[Q->rear] = e;				//将元素e赋值给队尾
	Q->rear = (Q->rear + 1) % MAXSIZE;	//rear指针向后移一位，若在最后就到头部
}
//出列操作
status DuQue(SqQueue* Q, QElemType* e)
{
	if (Q->front == Q->rear)return ERROR;
	*e = Q->data[Q->front];
	Q->front = (Q->front + 1) % MAXSIZE;
}
//链性列队
//创建
typedef struct QNode		//结点结构
{
	QElemType data;
	struct QNode* next;
}QNode, * QueuePtr;
typedef struct
{
	QueuePtr front, rear;
}LinkQueue;
//入队
status Enque(LinkQueue* q, QElemType e)
{
	QueuePtr s = (QueuePtr)malloc(sizeof(QNode));
	if (!s)exit(OVERFLOW);
	s->data = e;
	s->next = NULL;
	q->rear->next = s;
	q->rear = s;
	return OK;
}
