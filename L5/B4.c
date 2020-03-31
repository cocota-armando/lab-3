#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 7
void push(int *stack, int *top, int *nr)
{
	if (*top == MAX_SIZE - 1)
	{
		printf("\nEROARE : stiva este plina\n");
		return;
	}
	stack[++(*top)] = *nr;
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
int IsFull(int* stack, int *top)
{
	if (*top = MAX_SIZE - 1)
		return 1;
	return 0;
}
int main()
{
	int *stack,*top,*nr,*i;
	stack = (int*)malloc(sizeof(int)*MAX_SIZE);
	top = (int*)malloc(sizeof(int));
	nr = (int*)malloc(sizeof(int));
	i = (int*)malloc(sizeof(int));
	*top = -1;
	printf("Dati 7 elemente pt stiva ");
	for (*i = 0; *i < 7; (*i)++)
	{
		printf("Dati numarul : ");
		scanf("%d", nr);
		push(stack, top, nr);
	}
	while (IsEmpty(stack, top) == 0)
	{
		printf("%d ", peek(stack,top));
		pop(stack, top);
	}

	system("pause");
	return 0;
}