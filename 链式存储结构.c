typedef int SElemType;
typedef int status;
#define ERROR  0
#define OK  1
#define MAXSIZE 100
#include<stdio.h>
// 定义链式栈结点结构体
typedef struct StackNode
{
    SElemType data; // 数据元素
    struct StackNode* next; // 指向下一个结点的指针
}StackNode, * LinkStackPtr;

// 定义链式栈结构体
typedef struct
{
    LinkStackPtr top; // 指向栈顶结点的指针
    int count; // 链式栈元素个数
}LinkStack;
//栈的链式存储结构--进栈操作
status Push(LinkStack* s, SElemType e)
{
    LinkStackPtr p = (LinkStackPtr)malloc(sizeof(StackNode));
    p->data = e;
    p->next = s->top;
    s->top = p;
    s->count++;
    return OK;
}
//出栈操作
status  Pop(LinkStack* s, SElemType* e)
{
    LinkStackPtr p;
    if (StackEmpty(*s))return ERROR;
    *e = s->top->data;
    p = s->top;
    s->top = s->top->next;
    free(p);
    s->count--;
    return OK;
}