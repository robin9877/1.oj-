/*
#include <stdio.h>
#include <stdlib.h>
//1080:循环结构题：输入菱形数字
int main()
{
    int i,j,n;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*i-1;j++)
        {
            if(j>=i)
            {
                printf("%d ",2*i-j);

            }
            else
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    for(i=n-1;i>0;i--)
    {
        for(j=2*i-1;j>0;j--)
        {
            if(j>=i)
            {
                printf("%d ",2*i-j);
            }
            else
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }

    return 0;
}
*/
//改编题：输入三角菱形
/*
# include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=2*i-1;j>=1;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/
//1044
/*
*******
用函数来分解素数
*/
/*
# include <stdio.h>
 int primedec(int);
 int main()
 {
     int n;
     scanf("%d", &n);

     primedec(n);

     return 0;
 }
 int primedec(int n)
 {
     int i;
     for(i=2; i<=n;i++)
     {
         while(n%i==0)
         {
             n=n/i;
             printf("%d ",i);
         }
     }
 }
*/
//1081
# include <stdio.h>

int main()
{
    int m,n,t;
    scanf("%d %d",&m,&n);
    if(m<n)
    {
        t=m;
        m=n;
        n=t;

    }
    int i,j;
    for(i=n;i<=m;i++)
    {
        for(j=n;j<=i;j++)
        {
            printf("%d*%d=%-4d ",i,j,i*j);
        }
        printf("\n");
    }

    return 0;
}
