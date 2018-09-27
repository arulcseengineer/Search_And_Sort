#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int push(int stack[], int top, int value);
int pop(int stack[], int top);
void display(int stack[], int top);

int main()
{
   int stack[SIZE], top = -1;
   int value,push_count,pop_count;
      scanf("%d",&push_count);
  	  while (push_count)
      {
        scanf("%d",&value);
        top=push(stack,top,value);
        push_count--;
      }

      scanf("%d",&pop_count);
  	  while (pop_count)
      {
        top=pop(stack,top);
        pop_count--;
      }

   display(stack, top);
   return 0;
}
int push(int stack[], int top, int value)
{
   if(top == SIZE-1)
      printf("\nStack is Full!!! Insertion is not possible!!!");
   else{
      top++;
      stack[top] = value;
     return top;
   }
}
int pop(int stack[], int top)
{
   if(top == -1)
      printf("Deletion is not possible!!!");
   else
      top--;
    return top;
}
void display(int stack[], int top){
   if(top == -1)
      printf("Stack is Empty!!!");
   else{
      int i;
      for(i=top; i>=0; i--)
	 printf("%d\n",stack[i]);
   }
}