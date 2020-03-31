#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 20
void push(int *stack, int *top, int nr)
{
	if (*top == MAX_SIZE - 1)
	{
		printf("\nEROARE : stiva este plina\n");
		return;
	}
	stack[++(*top)] = nr;
}
void pop(int *stack, int *top)
{
	if (*top == -1)
	{
		printf("\nEROARE : stiva este goala\n");
		return;
	}
	(*top)--;
}
int peek(int *stack, int *top)
{
	return stack[*top];
}
int IsEmpty(int *stack, int*top)
{
	if (*top == -1)
		return 1;
	return 0;
}
void AlocStacks(int *stack1,int *top1, int*stack2,int *top2,int nr)
{
	int aux[MAX_SIZE],k=0,i;
	*top1 = -1;
	*top2 = -1;
	while (nr != 0)
	{
		aux[k++] = nr % 10;
		push(stack1, top1, nr % 10);
		nr = nr / 10;
	}
	for (i = k - 1; i >= 0; i--)
		push(stack2, top2, aux[i]);
}
int CheckPalindrome(int *stack1, int *top1, int*stack2, int *top2)
	{
	
	while (IsEmpty(stack1, top1)==0)
	{
		if (peek(stack1, top1) != peek(stack2, top2))
			return 0;
		pop(stack1, top1);
		pop(stack2, top2);
		
	}
	return 1;
	}
int main()
{
	int i, N, *stack1, *stack2, *StackPalin, nr, *top1, *top2,*top3;;
	stack1 = (int*)malloc(sizeof(int) * MAX_SIZE);
	stack2 = (int*)malloc(sizeof(int) * MAX_SIZE);
	StackPalin = (int*)malloc(sizeof(int)*MAX_SIZE);
	top1 = (int*)malloc(sizeof(int));
	top2 = (int*)malloc(sizeof(int));
	top3 = (int*)malloc(sizeof(int));
	*top3 = -1;
	printf("Dati numaru de elemente : ");
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		printf("Dati elementu nr %d : ", i + 1);
		scanf("%d", &nr);
		AlocStacks(stack1, top1, stack2, top2,nr);
		if (CheckPalindrome(stack1, top1, stack2, top2) == 1)
			push(StackPalin, top3,nr);
	}
	
	printf("Stiva cu elemente palindrom : ");
	while (IsEmpty(StackPalin, top3) == 1)
	{
		printf("%d ",peek(StackPalin,top3));
		pop(StackPalin, top3);
	}
	printf("\n");
	system("pause");
	return 0;
}