#include<stdio.h>
#include<string.h>

using namespace std;
 char stack[408];
 int top;

int type(char c)
{
    switch(c)
    {
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
        case '(':
        case ')':
            return 1;
            break;
        default:
            return 0;
    }
}


int prec(char c)
{
    switch(c)
    {
        case '+':
        case '-':
            return 2;
            break;
        case '*':
        case '/':
                return 4;
                break;
        case '^':
        case '&':
                return 6;
                break;
        case '#':
        case '(':
        case ')':
                return 1;
    }
}


char push(char c)
{
    top++;
    stack[top]=c;
}

char pop()
{
    char c;
    c=stack[top];
    top--;
    return c;
}



int main()
{
    int t,len,i,j;
    char c;
    char postfix[408],infix[408];
    scanf("%d",&t);
    while(t--)
    {
        j=0;
        top=-1;
        stack[++top]='#';
        scanf("%s",infix);
        len=strlen(infix);
        for(i=0;i<len;i++)
        {
            c=infix[i];
            if(type(c)==0)
                postfix[j++]=c;
            else
            {
                if(c=='(')
                   push(c);
                else if(c==')')
                    {
                        while(stack[top]!='(')
                            postfix[j++]=pop();
                        pop();
                    }
                else
                    {
                        if(prec(c)>prec(stack[top]))
                            push(c);
                        else
                            {
                                while(prec(c)<=prec(stack[top]))
                                postfix[j++]=pop();
                                push(c);
                             }
                     }
              }
        }
        while(stack[top]!='#')
            postfix[j++]=pop();
        postfix[j]='\0';
        printf("%s\n",postfix);
      }
      return 0;
}

