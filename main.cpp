#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int numa=0,numb=0,numc=0;
	printf ("Please enter the length of the three wooden strips(a,b,c):");
	scanf (" %d, %d, %d",&numa,&numb,&numc);
	if (numa>numb && numa>numc)
	{
		if (numb+numc>numa)
		printf ("These three wooden strips can be combined into a triangle.\n");
		else
		printf ("These three wooden strips can't be combined into a triangle.\n");
	}
	else if (numb>numa && numb>numc)
	{
		if (numa+numc>numb)
		printf ("These three wooden strips can be combined into a triangle.\n");
		else
		printf ("These three wooden strips can't be combined into a triangle.\n");
	}
	else if (numc>numa && numc>numb)
	{
		if (numa+numb>numc)
		printf ("These three wooden strips can be combined into a triangle.\n");
		else
		printf ("These three wooden strips can't be combined into a triangle.\n");
	}
	else
	printf ("These three wooden strips can be combined into a triangle.\n");
	system ("pause");
	return 0;
}
