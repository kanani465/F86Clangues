#include<stdio.h>
#include<conio.h>
void main()
{
int maths,c,eng;
int sum;
float per;
clrscr();
	scanf("%d",&maths);
	printf("\nmaths=%d",maths);

	scanf("%d",&c);
	printf("\nc=%d",c);

	scanf("%d",&eng);
	printf("\neng=%d",eng);

	sum=maths+c+eng;
	printf("summation of maths+c+eng=%d\n",sum);

	per=float(sum*100)/300;
	printf("perstage=%f\n",per);
getch();
}
