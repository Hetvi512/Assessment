#include<stdio.h>
void add();
void sub();
void mul();
void div();
int main()
{
	int op;
	do{
	printf("----------Menu----------\n");
	printf("1.Addition\n");
	printf("2.substraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("Enter the number for operation from the menu:");
	scanf("%d",&op);
	
	switch (op)
	{
	
		case 1:
			add();
			break;
		case 2:
			sub();
			break;
		case 3:
			mul();
			break;
		case 4:
			div();
			break;
			
		default:
			printf("Invalid choice");
	}
		}
	while(op>0 && op<5);
	return 0;
}
void add()
{
	int a,b,ans;
	printf("Enter first value:");
	scanf("%d",&a);
	printf("Enter second value:");
	scanf("%d",&b);
	ans=a+b;
	printf("The addition is %d\n",ans);	
}
void sub()
{
	int a,b,ans;
	printf("Enter first value:");
	scanf("%d",&a);
	printf("Enter second value:");
	scanf("%d",&b);
	ans=a-b;
	printf("The substraction is %d\n",ans);	
}
void mul()
{
	int a,b,ans;
	printf("Enter first value:");
	scanf("%d",&a);
	printf("Enter second value:");
	scanf("%d",&b);
	ans=a*b;
	printf("The multiplication is %d\n",ans);	
}
void div()
{
	int a,b,ans;
	printf("Enter first value:");
	scanf("%d",&a);
	printf("Enter second value:");
	scanf("%d",&b);
	ans=a/b;
	printf("The division is %d\n",ans);	
}
