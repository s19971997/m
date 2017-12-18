#include<stdio.h>

/*
int main ()                                        //ITERATION
{
int q=1;
int r;
int i; scanf("%d", &i);
while(q!=0)
{
	q=i/2;
	r = i%2;
	i =q;
	printf("%d", r);
}

return 0;
}

*/

int main()                                              //RECURSION
{
	int i;
	scanf("%d", &i);
	int q=1;
	int r=0;
	int bin(int n)
	{
	if(q==0)
	{
		printf("%d",r);
		return 0;
	}
		
	else
	{
		q=i/2;
		r=i%2;
		printf("%d", r);
		i=q;
		bin(i);
	}
	}
	
	bin(i);
}
