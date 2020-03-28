#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Dati numarul:"); scanf("%d",&n);
	if ((n | 0) == 0)
		printf("\nNumarul este nul");
	else if ((n & (1 << 31)) == 0)
		printf("\n%d este numar pozitiv", n);
	else
		printf("\n%d este numar negativ", n);
	system("pause");
	return 0;
}
