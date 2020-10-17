/***数组习题（5）: 数组元素前移 ***/

#include <stdio.h>
#include <stdlib.h>
# define N 100

int main()
{
    int a[10];

    int i;

    for(i=0;i<10;i++)
    {
        scanf("%d", &a[i]);
    }

    int srra=a[0];

    for(i=0;i<9;i++)
    {
        a[i]=a[i+1];
    }

    a[9]=srra;


    for(i=0;i<10;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
/***  数组习题6: 有序数组中插入若干数，仍保持有序 ***/
#include<stdio.h>
int main()
{
	int a[100];
	int i, j, x,n;
	for (i=0;i < 5;i++)
    {
        scanf("%d", &a[i]);
    }
    n=i;
	scanf("%d", &x);
	while (x != -1)
	{
		i = 0;
		while (a[i] < x && i<n)
		{
		    i++;
		}
        for (j =n-1; j >= i; j--)
        {
            a[j + 1] = a[j];

        }
        a[i] = x;
        n++;
		scanf("%d", &x);
	}
	for (i = 0; i< n; i++)
    {
        printf("%d ", a[i]);

    }
    return 0;
}
/*** 数组习题（3）:完成十进制数转成为二进制数  ***/
#include <stdio.h>
#include <stdlib.h>
# define N 100
int main()
{
    int x;
    int a[100];

    scanf("%d", &x);

    int word;
    int count=0;

    do
    {
        word=x%2;
        a[count]=word;
        x=x/2;
        count++;
    }while(x!=0);

    int i;
    for(i=count-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
/*** 数组习题（4）:输出Fibonacci数列的前n项 ***/
#include <stdio.h>
#include <stdlib.h>
# define N 100

int main()
{
    int n;
    int a[10];

    scanf("%d", &n);
    int i;

    for(i=0; i<n;i++)
    {
        if(1==i || 0==i)
        {
            a[i]=1;
        }
        else
        {
            a[i]=a[i-1] + a[i-2];
        }
    }
    for(i=0;i<n; i++)
    {
        printf("%d ",a[i]);
        if((i+1)%5==0)
        {
            printf("\n");
        }
    }
    return 0;
}
/***1033// 数组习题（5）：求矩阵中最大元素值，并与同行对角线元素交换 ***/

/*** source of programe ***/
# include <stdio.h>
# include <math.h>
int main()
{
    int a[5][5];
    int i,j;
    int exchange;
    for(i=0; i<5; i++)
    {
        for(j=0;j<5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int maxnumber;
    int maxwords;
    for(i=0; i<5; i++)
    {
        maxnumber=a[i][0];
        maxwords=0;
        for(j=1;j<5; j++)
        {
                if(abs(a[i][j])>abs(maxnumber))
                {
                    maxnumber = a[i][j];
                    maxwords = j;
                }
        }
        exchange = a[i][i];
        a[i][i] = a[i][maxwords];
        a[i][maxwords] = exchange;
    }
    for(i=0; i<5; i++)
    {
        for(j=0;j<5; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

}
/*** own programe ***/
# include <stdio.h>
int main()
{
    int a[5][5];
    int i,j;
    int exchange;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int maxnumber;
    int maxwords;
    for(i=1;i<5;i++)
    {
        maxnumber=a[i][0];
        maxwords=0;
        for(j=1;j<5;j++)
        {
            if(abs(a[i][j]>abs(maxnumber)))/*** main explain:exchange numbers with the big number. ***/
            {
                maxnumber=a[i][j];
                maxwords=j;
            }
        }
        exchange = a[i][j];
        a[i][i]=a[i][maxwords];
        a[i][maxwords]=exchange;
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
