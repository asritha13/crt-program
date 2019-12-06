#include<stdio.h>
main()
{
	int m,p,c;
	float tot;
	float avg;
	printf("enetr marks");
	scanf("%d%d%d,&m,&p,&c");
	tot=m+p+c;
	avg=tot/3;
	printf("\n total marks %d",tot);
	printf("\n average marks %f",avg);
}
