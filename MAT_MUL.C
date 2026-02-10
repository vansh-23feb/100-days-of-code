# include<stdio.h>
#include<conio.h>
void multiplymatrices(int first[10][10],int second[10][10],int result[10][10],int r1,int c1,int c2)
{
    int i,j,k;
    for(i=0;i<r1;i++)
    {
	for(j=0;j<c2;j++)
	{
	    result[i][j]=0;
	}
    }
    for(i=0;i<r1;i++)
    {
	for(j=0;j<c2;j++)
	{
	    for(k=0;k<c1;k++)
	    {
		result[i][j]+=first[i][k]*second[k][j];
	    }
	}
    }
}
int main()
{
    int first[10][10],second[10][10],result[10][10];
    int r1,c1,r2,c2;
    int i,j;
    clrscr();
    printf("Enter rows and columns in first matrix::");
    scanf("%d %d",&r1,&c1);
    printf("Enter rows and columns in second matrix::");
    scanf("%d %d",&r2,&c2);
    if(c1!=r2)
    {
	printf("Matrix multiplication not possible!\n");
	return 0;

    }
    printf("enter elements of first matrix:\n");
    for(i=0;i<r1;i++)
    {
	for(j=0;j<c1;j++)
	{
	    scanf("%d",&first[i][j]);
	}
    }
    printf("elements of first matrix:\n");
    for(i=0;i<r1;i++)
    {
	for(j=0;j<c1;j++)
	{
	    printf("%d\t",first[i][j]);
	}
	printf("\n");
    }
     printf("enter elements of second matrix:\n");
    for(i=0;i<r2;i++)
    {
	for(j=0;j<c2;j++)
	{
	    scanf("%d",&second[i][j]);
	}
    }
    printf("elements of second matrix:\n");
    for(i=0;i<r2;i++)
    {
	for(j=0;j<c2;j++)
	{
	    printf("%d\t",second[i][j]);
	}
	printf("\n");
    }
    multiplymatrices(first,second,result,r1,c1,c2);
    {
        printf("\nresultant Matrix:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
		printf("%d\t",result[i][j]);

	    }
	    printf("\n");
	}
	getch();
	return 0;
    }
}
