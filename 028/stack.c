// Program to implement stack using array
#include <stdio.h>
#define MAX 10
void push(int* stack, int* top)
{
    if(*top != MAX-1)
    {
    int ele;
    printf("Enter the element to push: ");
    scanf("%d",&ele);
    *top = *top+1;
    stack[*top] = ele;
    printf("%d pushed in the stack.\n", stack[*top]);
    }
    else
    {
        printf("The stack is full.\n");
    }
    
}
int pop(int* stack, int* top)
{
    *top = *top-1;
    return stack[*top+1];
}
void display(int* stack, int* top)
{
    if(*top != -1)
        {
        int temp = *top;
        printf("The stack is:\n");
        while(temp!=-1)
        {
            printf("|_%d_|\n",stack[temp]);
            temp --;
        }
    }
    else
    {
        printf("The stack is empty.\n");
    }
    
}
int peek(int* stack, int* top)
{
    return stack[*top];
}
int main()
{ 
    int stack[MAX],top=-1,ch,ele;
    do
    { 
        printf("\n Menu \n 1 Push \n 2 Pop \n 3 Display  \n 4 Peek \n any other key to quit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        { 
            case 1: push(stack, &top);
            break;
            case 2:
                    if(top!=-1)
                    {
                        ele = pop(stack, &top);
                        printf("%d was popped\n", ele);
                    }
                    else
                    {
                        printf("The stack is empty.\n");
                    }                   
            break;
            case 3: display(stack, &top);
            break;
            case 4: if(top!=-1)
                    {
                        ele = peek(stack, &top);
                        printf("The top element is: %d\n", ele);
                    }
                    else
                    {
                        printf("The stack is empty.\n");
                    }
                    
            break;
            default:
            return 0;
        }
    }while(1);

    return 0;
}
