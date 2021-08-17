/* Mazhar Hussain    Reg no:20MDELE098
eamil:20MDELE098@uetmardan.edu.pk */
//write a program using user defined function to find greater of two numbers//
#include<stdio.h>
int greater(int x,int y){
	int bigger;
	if(x>y)
	{printf("%d is greater than %d\n",x,y);
	 bigger=x;}
	else
	{printf("%d is greater than %d\n",y,x);
	 bigger=y;}
	return bigger;
}

int main(){
	int a,b;
	printf("enter two numbers\n");
	scanf("%d %d",&a,&b);
	greater(a,b);
}
