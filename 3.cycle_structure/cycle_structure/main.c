//1019_1017_
/***
# include <stdio.h>
int main()
{
    char ch;
    while((ch=getchar())!='\n')// get char{{±äÁ¿}
    {
        if(ch>='a'&&ch<='z')
        {
            ch=ch-32;
            putchar(ch);
        }
        else if(ch>='A'&&ch<='Z')
        {
            ch=ch+32;
            putchar(ch);
        }
        else
        {
            putchar(ch);
        }
    }
    return 0;
}
***/
//1017
/*** some errors ,but numbers is true.
# include <stdio.h>
int main()
{
    int n;
    int c=2,i;
    float sum=0,a=2;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        a=c*1.0/i;
        c=i+c;
        sum+=a;
    }
    printf("sum=%f",sum);
    return 0;
}
***/
/*** standard_snswers ***/
/***
# include <stdio.h>
int main()
{
    int n;
    int x=2, y=1,i,temp;
    float sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=1.0*x/y;
        temp=y;
        y=x;
        x=temp+y;

    }
    printf("sum=%f",sum);
    return 0;
}
***/
//1049
/***  1049: Message encryption ***/
/***
#include<stdio.h>
int main()
{
    char x;
    while ((x=getchar())!='\n')
    {
        if (x>='a'&&x<='z')
        {
            x=x+3;
            if(x>122)
                x=x-26;//translate small world to
            putchar(x);
        }
        else if (x>='A'&&x<='Z')
        {
            x=x+3;
            if(x>90)
                x=x-26;/translate big world to
            putchar(x);
        }
        else
        {
            putchar(x);//others
        }
    }
    return 0;
}
***/
/***
//1020:some errors
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,i,m,zuida=0,zuixiao=1000;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a>zuida)
        {
            zuida=a;
            m=i;
        }
         if(a<zuixiao)
        {
            zuixiao=a;
            n=i;
        }
        }

    printf("max=%d,min=%d\nmaxi=%d,mini=%d",zuida,zuixiao,m,n);
    return 0;
}

***/
/***
#include<stdio.h>
int main()
{
	int n=0,da=0,i=0,xi=99999999999999999999999999999,j=0,k=0,x=0;
	scanf("%d",&n);
	for(k=1;k<=n;k++)
	{
		scanf("%d",&x);
		if(x>da)
		{
			da=x;
			i=k;
		}
		if(x<xi)
		{
			xi=x;
			j=k;
		}
	}
	printf("max=%d,min=%d\nmaxi=%d,mini=%d\n",da,xi,i,j);
	return 0;
}
***/
//1020:some errors
/***
# include <stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    scanf("%d",&a);
    int i,m=1,w=1,zuida=a,zuixiao=a;

    for(i=2;i<=n;i++)
    {
        scanf("%d",&a);
        if(a>zuida)
        {
            zuida=a;
            m=i;
        }
         if(a<zuixiao)
        {
            zuixiao=a;
            w=i;
        }
        }

    printf("max=%d,min=%d\nmaxi=%d,mini=%d",zuida,zuixiao,m,w);
    return 0;
}
***/
/***
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
***/
