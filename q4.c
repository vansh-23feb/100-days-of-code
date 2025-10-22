# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int j;
    int z;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            z=i+j-1;
            printf("%d",z);    
        }
        printf("\n");
    }
    return 0;
}


