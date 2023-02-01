#include<stdio.h>
typedef int SElemType;
typedef int status;
#define ERROR  0
#define OK  1
#define MAXSIZE 100
typedef struct
{
	SElemType data[MAXSIZE];
	int top;
}SqStack;
//½øÕ»
status Push(SqStack* s, SElemType e)
{
	if (s->top == MAXSIZE - 1)return ERROR;
	s->top++;
	s->data[s->top] = e;
	return OK;
}
//³öÕ»
status Pop(SqStack* s, SElemType* e)
{
	if (s->top == -1)return ERROR;
	*e = s->data[s->top];
	s->top--;
	return OK;
}
