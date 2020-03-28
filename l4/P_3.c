#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;
	printf("a= "); scanf("%d", &a);
	printf("b= "); scanf("%d", &b);
	int *aux;
	aux = (int*)malloc(sizeof(int));
	*aux = a;
	a = b;
	b = *aux;
	printf(" a=%d , b=%d ", a, b);
	system("pause");
	return 0;
}
