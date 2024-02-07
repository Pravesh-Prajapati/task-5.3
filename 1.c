#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter value a");
	scanf("%d",&a);
	printf("enter value b");
	scanf("%d",&b);
	printf("enter value b");
	scanf("%d",&c);
	
	(a>b)?(a>c)?printf("a is max"):printf("c is max")
	     :(b>c)?printf("b is max"):printf("c is max");
		
}
