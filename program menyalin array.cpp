#include<stdio.h>

main()
{
	int a, s[5] = {}, c[5];
	printf ("array A\n");
	printf ("1 2 3 4 5 \n");
	for (a=0;a<5;a++)
	{
		scanf ("%i",&s[a]);
		
	}
	for (a=0;a<5;a++)
	{
		c[a]=s[a];
	}
	
	printf ("\n");
	printf ("array B\n");
	for (a=0;a<5;a++)
	{
		printf ("%2i",c[a]);
	}
	return 0;
}

