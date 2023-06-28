/*
#include<stdio.h>
#define MAX_SIZE  100 
typedef struct {
	int arr[MAX_SIZE];
	int top ;
	
}Stack;
Stack s1 ; 
void Stack_voidInit(Stack *ps );
void Stack_voidpush(Stack *ps ,int copy_intvalue);
char Stack_intIsFUll(Stack * ps );
void Stack_voidpop(Stack * ps , int *Valueofpop );	
char Stack_intIsEmpty(Stack * ps );
void Stack_voidprint(Stack *ps );
int  Stack_intSizeofStack(Stack * ps );
void main (void)
{
	int arr2[4] = {'s','e','i','f'};
	Stack_voidInit(&s1);
	for(int i = 0 ; i < 4 ; i ++  )
	{
		Stack_voidpush(&s1,arr2[i]);
	}

	for (int i =0 ; i < 4 ; i ++)
	{
		Stack_voidpop(&s1 , &arr2[i] );
		printf("%c\n",arr2[i]);
	}
	
	
}
void Stack_voidInit(Stack *ps )
{
	ps->top = -1 ;//to idicate that the stack is empty 
	
}
void Stack_voidpush(Stack *ps ,int copy_u16value)
{	
	if( Stack_intIsFUll( ps )==0)
	{
		ps->top++;	
		ps->arr[ps->top]=copy_u16value;
	
	}
	else{
		printf("The Stack is full You can't add any more ");
	}
		
}


char Stack_intIsFUll(Stack * ps )
{
	return (ps->top==MAX_SIZE-1);
}

	
void Stack_voidpop(Stack * ps,int *value_of_pop  )
{
	if(Stack_intIsEmpty(ps)==0)
	{
	*value_of_pop=ps->arr[ps->top];
	ps->top--; 
	
	}
	else
	{
		printf("the stack is empty u can't pop ");
	}
		
}
char Stack_intIsEmpty(Stack * ps )
{
	return (ps->top==-1);
}
void Stack_voidprint(Stack *ps )
{	
	if(Stack_intIsEmpty(ps)==0){
	for (int i = ps->top ; i >=0; i--)
	{
		printf("%c\n",ps->arr[i]);
	}
	}
}
int  Stack_intSizeofStack(Stack * ps )
{
	if(Stack_intIsEmpty(ps)==0){
	printf("size of stack %c element " ,ps->top+1);	
	}
	else {
		printf("there is no elements in the stack ");
	}
	
}*/
#include<stdio.h>
#define MAX_SIZE 10 
typedef struct 
{
	int ar[ ]
}