
#include<stdio.h>
#include<stdlib.h>
typedef struct stacknode{
	int data;
	struct stacknode * next ;
}stacknode;
typedef struct {
	stacknode  * top ;
	
}Stack;
Stack s1 ;
stacknode * pn  ;  
void Stack_voidInit(Stack *ps );
void Stack_voidpush(Stack *ps ,int copy_u16value);
char Stack_intIsFUll(Stack * ps );
void Stack_voidpop(Stack * ps , int *Valueofpop );	
char Stack_intIsEmpty(Stack * ps );
void Stack_voidprint(Stack *ps );
int  Stack_intSizeofStack(Stack * ps );
void main (void)
{
	int value_of_pop ;
	Stack_voidInit(&s1);
	Stack_voidpush(&s1,55);
	Stack_voidpush(&s1,4);
	Stack_voidpush(&s1,12);
	
	Stack_voidpop(&s1,&value_of_pop);
	printf("%d\n",value_of_pop);
	Stack_voidpop(&s1,&value_of_pop);
	printf("%d\n",value_of_pop);
	
	Stack_voidpush(&s1,4);
	Stack_voidpush(&s1,12);
	Stack_voidprint(&s1);
}
void Stack_voidInit(Stack *ps )
{
	ps->top = NULL; ;//to idicate that the stack is empty 
	
}
void Stack_voidpush(Stack *ps ,int copy_u16value)
{	
	stacknode * pn = (stacknode*) malloc ( sizeof(stacknode));
	pn->data=copy_u16value;
	pn->next = ps->top ;
	ps->top = pn;
	printf("%d\n",pn->data);
}

/*
char Stack_intIsFUll(Stack * ps )
{
	return (ps->top==MAX_SIZE-1);
}

*/	
void Stack_voidpop(Stack * ps,int *value_of_pop  )
{
	stacknode * temp = ps -> top ; 
	*value_of_pop= ps->top->data;
	ps->top = ps->top->next ;
	free(temp);
	
	
}


char Stack_intIsEmpty(Stack * ps )
{
	return (ps->top==NULL);
}

void Stack_voidprint(Stack *ps )
{	
	stacknode * temp = ps -> top ; 
	if(Stack_intIsEmpty(ps)==0){
	while (	!(ps->top==NULL) )
	{
		printf("-->%d\n",ps->top->data);
		ps->top=ps->top->next;
	}
	}
	else
	{
		printf("the stack is empty ");
	}

	ps->top=temp;
}

int  Stack_intSizeofStack(Stack * ps )
{
	int counter=0;
	if((Stack_intIsEmpty(ps)==0)){
	while (	!(ps->top==NULL) )
	{
		printf("-->%d\n",ps->top->data);
		ps->top=ps->top->next;
		counter++;
	}
	}
	else
	{
		printf("the stack is empty ");
	}
	
	
		printf("the size of the stack is %d",counter);
}
