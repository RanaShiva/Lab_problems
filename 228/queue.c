#include<stdio.h>
#define MAX 10
void insert(int * queue, int * front, int * rear)
{
    int e;
    if((*rear + 1)%MAX == *front)
    {
        printf("The queue is full.\n");
        return;
    }
    else
    {
        printf("Enter the element to insert: ");
        scanf("%d", &e);
        *rear = (*rear+1) % MAX;
        queue[*rear] = e;
        if(*front == -1)
        {
            *front = 0;
        }
        printf("Element %d inserted.\n",e);
    }   
}
int delete(int * queue, int * front, int * rear)
{
    int e;
    e = queue[*front];
    if(*front == *rear)
    {
        *front = -1;
        *rear = -1;
    }
    else
    {
        *front = (*front + 1)% MAX;
    }
    return e;
}
void display(int * queue, int * front, int * rear)
{
    int temp;
    if(*front == -1)
    {
        printf("The queue is empty. \n");
        return;
    }
    printf("The queue is : ");
    temp = *front;
    while(temp != *rear)
    {
        printf("%d ",queue[temp]);
        temp = (temp + 1) % MAX;
    }
    printf("%d\n",queue[temp]);
}
int main()
{ 
    int queue[MAX], ch;
    int front = -1, rear = -1;
do
{ 
printf("\n Menu \n 1 Insert  \n 2 Serve  \n 3 Display  \n 4 exit ");  // Menu
printf("\nEnter your choice: ");
scanf("%d",&ch);
switch(ch)
{ 
    case 1:
        insert(queue, &front, &rear);
     	break;
    case 2: 
        if(front != -1)
        {
            printf("%d was deleted\n",delete(queue, &front, &rear));
            break;
        }
        else
        {
            printf("The queue is empty.\n");
        }
        break;
   case 3:
        display(queue, &front, &rear);
 	    break;  
}// end of switch 
} while(ch!=4);   //End of while
} //end of main
