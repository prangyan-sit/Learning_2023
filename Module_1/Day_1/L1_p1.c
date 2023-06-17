# include<stdio.h>
void big(int,int);
int main()
{
	int a,b;
	printf("Enter the two  number:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	biggest(a,b);
	return 0;
}
void big(int x,int y){
	int z;
	// using ternary operator
	printf("Using Ternanry Operator\n");
	z = x>y ? x:y;
	printf("greatest of %d and %d is %d\n",x,y,z);
	// using if else
	printf("\nUsing if else\n");
	if(a>b)
	printf("greatest of %d and %d is %d\n",x,y,x);
	else
	printf("greatest of %d and %d is %d\n",x,y,y);
}
