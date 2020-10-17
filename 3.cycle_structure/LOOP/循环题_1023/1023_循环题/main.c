#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int m,n,i,j,sum;
    scanf("%d %d", &m, &n);
    for(i=m;i<=n; i++)
    {
        for(j=m;j<=m/2.0;j++)
        {
            sum=0;
            if(j%i==0)
            {
                sum+=j;

            }
            if(sum==i)
            {

            }
            printf("%d",sum);

        }
    }
    return 0;
}
*/
/*
# include <stdio.h>
int main()
{
    int m,n,i,j,sum;
    scanf("%d %d",&m,&n);
    if(m>=1 && n<=1000)
    {

        for(i=1; i<=1000; i++)
        {
            sum=0;
            for(j=m; j<i/2; j++)
            {
                if(i%j==0 && i>=m && i<=n)
                    sum+=j;
            }
            if(sum==i)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int x,y,j,k,sum;
	scanf("%d%d",&x,&y);
	for(k=x;k<=y;k++)
	{
		sum=0;
		for(j=1;j<k;j++)
		{
			if(k%j==0)
				sum=sum+j;
		}
		if(sum==k)
			printf("%d\n",k);
	}
	return 0;
}
*/
/*
# include <stdio.h>
int main()
{
    int i,n;
    float sum=0,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=1.0/((4*i)-3) -1.0/((4*i)-1);
        sum+=a;
    }
    printf("%.2f",sum*4);

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int x,y,j,k,sum;
	scanf("%d%d",&x,&y);
	for(k=x;k<=y;k++)
	{
		sum=0;
		for(j=1;j<k;j++)
		{
			if(k%j==0)
				sum=sum+j;
		}
		if(sum==k)
			printf("%d\n",k);
	}
	return 0;
}
*/

/*
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int i,j,sum=0;
    for(i=m;i<=n;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
                sum+=j;
        }
        if(sum==i)
            printf("%d\n",i);
    }
    return 0;
}*/
/*
# include <stdio.h>
int shui(int);
int main()
{
    int m,n,i;
    /*scanf("%d %d",&m,&n);
    for(i=m; i<n; i++)
    {
        if(1==shui(i))
            printf("%d ",i);
    }
    scanf("%d",&n);
    if(1==shui(n))
        printf("Yes");
    else
        printf("No");

    return 0;
}
int shui(int j)
{
    int a,b,c;
    a=j%10;
    b=j/10%10;
    c=j/100%10;
    if(j==a*a*a+b*b*b+c*c*c)
        return 1;
    else
        return 0;
}*/

/*
# include <stdio.h>
int fi(int);
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        printf("%d ",fi(i));
    }
    return 0;
}
int fi(int i)
{
    if(i==1 || i==0)
    {
        return 1;
    }
}
*/
/*
    else
        return (fi(i-1)+fi(i-2));
}
# include <stdio.h>
int fi(int);
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
        printf("%d ",fi(i));
    return 0;
}
int fi(int i)
{
    if(i==0 || i==1)
        return 1;
    else
        return (fi(i-1)+fi(i-2));
}
*/
/*
int hui(int);
int main()
{
    int n;
    scanf("%d",&n);
    if(n==hui(n))
        printf("yes");
    else
        printf("no");
    return 0;
}
# icn
int hui(int x)
{
    int i=0;
    while(x)
    {
        i=i/10+i%10;
        x=x/10;
    }
    return i;
}
*/
/*shui
# include <stdio.h>
int shui(int);
int main()
{
    int n;
    scanf("%d",&n);
    shui(n);
    return 0;

}
int shui(int n)
{
    int a,b,c;
    a=n%10;
    b=n/10%10;
    c=n/100%10;
    if(n==a*a*a+b*b*b+c*c*c)
        printf("Yes");
    else
        printf("NO");
}*/
/*
# include <stdio.h>
int main()
{
    int m,n;
    scanf("%d",&w);
    scanf("%d",&s);
    int i,m=1,n=1,zuida=n,zuixiao=n;
    for(i=2;i<=w;i++)
    {
        scanf("%d",&a);
        if(a>zuida)
        {
            zuida=a
            m=i;
        }
        else
        {
            zuixiao=a;
            n=i;
        }
    }
    printf("max=%d,min=%d\nmaxi=%d,mini=%d",zuida,zuixiao,m,n);
    return 0;
}
*/
# include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",a,b,c);
    float w;
    w=(a+b+c)/3.0£»
    printf("%.6f",w);
    return 0;
}
