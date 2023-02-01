#include<stdio.h>
typedef int SElemType;
typedef int status;
#define ERROR  0
#define OK  1
#define MAXSIZE 100
typedef struct
{
	SElemType data[MAXSIZE];
	int top1;
	int top2;
}SqDoubleStack;
//进栈
status Push(SqDoubleStack* s, SElemType e,int stackNumber)
{
	if (s->top1+1==s->top2)return ERROR;
	if (stackNumber == 1)
		s->data[++s->top1] = e;			//先加1后赋值
	else if (stackNumber == 2)
		s->data[--s->top2] = e;
	return OK;
}
//出栈
status Pop(SqDoubleStack* s, SElemType* e, int stackNumber)
{
	if (stackNumber == 1)
	{
		if (s->top1 == -1)
			return ERROR;
		*e = s->data[s->top1 - 1];
	}
	if (stackNumber == 2)
	{
		if (s->top2 == MAXSIZE)
			return ERROR;
		*e = s->data[s->top2++];
	}
}
