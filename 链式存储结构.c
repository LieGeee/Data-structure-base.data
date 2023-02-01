typedef int SElemType;
typedef int status;
#define ERROR  0
#define OK  1
#define MAXSIZE 100
#include<stdio.h>
// ������ʽջ���ṹ��
typedef struct StackNode
{
    SElemType data; // ����Ԫ��
    struct StackNode* next; // ָ����һ������ָ��
}StackNode, * LinkStackPtr;

// ������ʽջ�ṹ��
typedef struct
{
    LinkStackPtr top; // ָ��ջ������ָ��
    int count; // ��ʽջԪ�ظ���
}LinkStack;
//ջ����ʽ�洢�ṹ--��ջ����
status Push(LinkStack* s, SElemType e)
{
    LinkStackPtr p = (LinkStackPtr)malloc(sizeof(StackNode));
    p->data = e;
    p->next = s->top;
    s->top = p;
    s->count++;
    return OK;
}
//��ջ����
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