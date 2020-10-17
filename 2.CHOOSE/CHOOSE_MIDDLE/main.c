/***
//1075
# include <stdio.h>
# include <math.h>
int main()
{
    float m,n;
    char x;
    scanf("%f,%f",&m,&n);
    getchar();// SOME ERRORS  :it had soved
    scanf("%c",&x);
    if(x=='+')
    {
        printf("%.2f%c%.2f=%.2f",m,x,n,m+n);
    }
    else if(x=='-')
    {
        printf("%.2f%c%.2f=%.2f",m,x,n,m-n);
    }
    else if(x=='*')
    {
        printf("%.2f%c%.2f=%.2f",m,x,n,m*n);
    }
    else if(x=='/')
    {
        if(n==0)
        {
            printf("input error");
        }
        else
        {
            printf("%.2f%c%.2f=%.2f",m,x,n,m/n);
        }
    }
    else
    {
        printf("input error");
    }
    return 0;
}
***/

//
//standard answers
/*
#include<stdio.h>
int main()
{
	int x,y,z;
	scanf("%d:%d:%d",&x,&y,&z);//Translate time(from 24(h) to 12(h)).input

	if(x>12)
	{
		x=x-12;
		if(y<10&&z<10)
			printf("%d:0%d:0%dpm",x,y,z);
		else if(y<10&&z>10)
			printf("%d:0%d:%dpm",x,y,z);
		else if(y>10&&z<10)
			printf("%d:%d:0%dpm",x,y,z);
		else if(y>10&&z>10)
			printf("%d:%d:%dpm",x,y,z);
	}
	else if(x==0)
	{
		x=12;
		if(y<10&&z<10)
			printf("%d:0%d:0%dam",x,y,z);
		else if(y<10&&z>10)
			printf("%d:0%d:%dam",x,y,z);
		else if(y>10&&z<10)
			printf("%d:%d:0%dam",x,y,z);
		else if(y>10&&z>10)
			printf("%d:%d:%dam",x,y,z);
	}
	else if(x==12)
	{
		if(y<10&&z<10)
			printf("%d:0%d:0%dpm",x,y,z);
		else if(y<10&&z>10)
			printf("%d:0%d:%dpm",x,y,z);
		else if(y>10&&z<10)
			printf("%d:%d:0%dpm",x,y,z);
		else if(y>10&&z>10)
			printf("%d:%d:%dpm",x,y,z);
	}
	else if(x<12)
	{
		if(y<10&&z<10)
			printf("%d:0%d:0%dam",x,y,z);
		else if(y<10&&z>10)
			printf("%d:0%d:%dam",x,y,z);
		else if(y>10&&z<10)
			printf("%d:%d:0%dam",x,y,z);
		else if(y>10&&z>10)
			printf("%d:%d:%dam",x,y,z);
	}
	return 0;
}
*/
//1077
/***
# include <stdio.h>
int main()
{
    int x,y,z;
    scanf("%d:%d:%d",&x,&y,&z);

    if(x>12)
    {
        x=x-12;
        if(y<10&&z<10)
			printf("%d:0%d:0%dpm",x,y,z);
		else if(y<10&&z>10)
			printf("%d:0%d:%dpm",x,y,z);
		else if(y>10&&z<10)
			printf("%d:%d:0%dpm",x,y,z);
		else if(y>10&&z>10)
			printf("%d:%d:%dpm",x,y,z);
    }
    else if(x==0)
    {
        x=12;
        if(y<10&&z<10)
			printf("%d:0%d:0%dam",x,y,z);
		else if(y<10&&z>10)
			printf("%d:0%d:%dam",x,y,z);
		else if(y>10&&z<10)
			printf("%d:%d:0%dam",x,y,z);
		else if(y>10&&z>10)
			printf("%d:%d:%dam",x,y,z);
    }
    else if(x==12)
    {
        if(y<10&&z<10)
			printf("%d:0%d:0%dpm",x,y,z);
		else if(y<10&&z>10)
			printf("%d:0%d:%dpm",x,y,z);
		else if(y>10&&z<10)
			printf("%d:%d:0%dpm",x,y,z);
		else if(y>10&&z>10)
			printf("%d:%d:%dpm",x,y,z);
    }
    else if(x<12)
    {
        if(y<10&&z<10)
			printf("%d:0%d:0%dam",x,y,z);
		else if(y<10&&z>10)
			printf("%d:0%d:%dam",x,y,z);
		else if(y>10&&z<10)
			printf("%d:%d:0%dam",x,y,z);
		else if(y>10&&z>10)
			printf("%d:%d:%dam",x,y,z);
    }
    return 0;
}
***/
/***
//1072
# include <stdio.h>
int main()
{
    int month,number,youhui_l;
    float youhui_e,youhui_p;
    float price;
    scanf("%d%d%f",&month,&number,&price);
    if(month==1 || (month>=7&&month<=9))
    {
        if(number<20)
        {
           youhui_l=0;
           youhui_e=0;
           youhui_p=number*price;
        }
        else
        {
            youhui_l=5;
            youhui_e=number*price*0.05;
            youhui_p=number*price*0.95;

        }
        printf("%d%%,%.2f,%.2f",youhui_l,youhui_e,youhui_p);
    }
    else if((month>=2&&month<=6) || (month>=10&&month<=12))
    {
        if(number<20)
        {
           youhui_l=10;
           youhui_e=number*price*0.1;
           youhui_p=number*price*0.9;
        }
        else
        {
            youhui_l=20;
            youhui_e=number*price*0.2;
            youhui_p=number*price*0.8;

        }
        printf("%d%%,%.2f,%.2f",youhui_l,youhui_e,youhui_p);

    }

    else
    {
        printf("month error");
    }
    return 0;
}
***/
/***
//1022
# include <stdio.h>
# include <math.h>
int main()
{
    float x,y;
    scanf("%f",&x);
    if (x>=0 && x<40)
    {
        if(x<10)
        {
            y=sin(x);
        }
        else if(x<20)
        {
            y=cos(x);
        }
        else if(x<30)
        {
            y= exp(x) -1;
        }
        else
            y=log(x+1);
        printf("y=%.2f", y);
    }
    else
        printf("no definition\n");
    return 0;
}
***/
/***
# include <stdio.h>
int main()
{
    int a,b;
    a=4,b=3;
    int tem;
    tem=a;
    a=b;
    b=tem;
    printf("%d %d",a,b);
    return 0;
}
***/
/***
# include <stdio.h>
int main()
{
    int n,a[10],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i==0 ||i==1)
        {
            a[i]=1;
        }
        else
        {
            a[i]=a[i-1]+a[i-2];
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
***/

