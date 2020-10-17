/***1013    ***/
/*
# include <stdio.h>
int main()
{
    int i,a,sum=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a);
        if(a<0)
        {
            printf("%d\n",a);
            sum+=a;
        }
    }
    printf("sum=%d",sum);

    return 0;
}
*/
/*** 1086 ***/
/*** own programe1 ***/
/*
# include <stdio.h>
int funct(int,int)
int main()
{
    return 0;
}
int funct(int n, int x)
{
    scanf("%d",&n);
    while(x !=0)
    {
        scanf("%d",&x);
        printf("%d ",x);
    }
    return 0;
}
*/
/***function:1086
# include <stdio.h>
int fun(int,int);
int main()
{
    int x,y,sum=0;
    scanf("%d",&y);
    while(x!=0)
    {
        scanf("%d",&x);
        if(fun(x,y)==1)// fun(x,y):identify your function.
            sum+=x;
    }
    printf("%d",sum);
    return 0;
}
int fun(int x,int y)
{
    if(x%y==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
***/
/***
//loop sturcture:1083
# include <stdio.h>
int main()
{
    int m,n,i,a,b,c,t;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        t=i/9;
        a=i%10;
        b=(i%100)/10;//two steps:1.get1:余数，2.get2:再得商
        c=i/100;//得商，就是余数，in——1000：
        if(t==a*a+b*b+c*c)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
***/

# include <stdio.h>
int main()
{
    return 0;
}
