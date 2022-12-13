#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define maxSize 100

char stack[maxSize],postfix[20];
int top=-1;

void push(char item)
{
	if(top==maxSize-1)
    {
		printf("Stack Overflow");
	}
    else
    {
		stack[++top] = item;
	}
}
char pop()
{
	char item = stack[top--];
	return item;
}
int precedence(char n)
{
    switch (n)
    {
        case '^':
            return 3;
            break;
        case '*':
        case '/':
            return 2;
            break;
        case '-':
        case '+':
            return 1;
            break;
        default:
            return 0;
            break;
    }
}

void main()
{
    char infix[100];
    int i,j=0;
    printf("Enter Infix Expression : ");
    scanf("%s",&infix);
    for (int i = 0; i < strlen(infix); i++)
    {
        switch (infix[i])
        {
            case '(':
                push(infix[i]);
                break;
            case ')':
                while(stack[top]!='(')
                {
                    postfix[j++]=pop();
                }
                pop();
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                if (precedence(infix[i])>precedence(stack[top]))
                {
                    push(infix[i]);
                }
                else if (precedence(infix[i])<=precedence(stack[top]))
                {
                    if (infix[i]=='^')
                    {
                        push(infix[i]);
                    }
                    else
                    {
                        while (precedence(infix[i])<=precedence(stack[top]))
                        {
                            postfix[j++]=pop();
                        }
                        push(infix[i]);
                    }
                }
                break;
            default:
                postfix[j++]=infix[i];
                break;
        }
    }
    printf("%s",postfix);
}