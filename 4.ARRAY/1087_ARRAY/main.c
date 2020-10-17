/*** 1041_1046_ 1047:602*  1037**   1038:790          ***/
/*** 752:numbers:***/
/*
//10_Array_practise(5):
# include <stdio.h>
# define N 100
int main()
{
    int a[10];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);//input numbers
    }

    int srra=a[0];
    for(i=0;i<9;i++)
    {
        a[i]=a[i+1];
    }
    a[9]=srra;

    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}
*/

/***
//10-Array_practise(4):
# include <stdio.h>
int main()
{
    int a[100];
    int i, j,x,n;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    n=i;
    scanf("%d",&x);
    while(x != -1)
    {
        i=0;
        while(a[i]<x && i<n)
        {
            i++;
        }
        for(j=n-1;j>=i;j--)
        {
            a[j+1]=a[j];
        }
        a[i]=x;
        n++;
        scanf("%d",&x);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}
***/
//Array_practise_
/*
# include <stdio.h>
# define N 100
int main()
{
    int x;
    int a[100];

    scanf("%d",&x);

    int word;
    int count=0;//Notice:please send a number to the first in "count";
    do
    {
        word=x%2;
        a[count]=word;
        x=x/2;
        count++;
    }while(x!=0);

    int i;
    for(i=count -1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
*/
/***
# include <stdio.h>
int main()
{
    int n;
    int a[10];
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        if(1==i || 0==i)
        {
            a[i]=1;
        }
        else
        {
            a[i]=a[i-1]+a[i-2];//the number=before(number(-1)+number(-2)

        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        if((i+1)%5==0)
        {
            printf("\n");
        }
    }
    return 0;
}
***/

/***
//1033
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
***/


//1087 it has some questions
/*
#include<stdio.h>
#include<string.h>
int delect(char s[],char c);
int main()
{
	char s[100],t[100],c;
	int i,a;
	scanf("%c",&c);// delete a word.
	scanf("%s",s);//s[] always an Array,it is destination.
	for(i=0;i<100;i++)
	{
		t[i]=s[i];
		if(t[i]=='\0')
			break;
	}
	delect(s,c);//question1
	a=strcmp(s,t);//identify a word and and other world whether(the same).
	if(a==0)
		printf("not found");
	else
		printf("%s",s);
    return 0;
}

int delect(char s[],char c)
{
	int i=0,j=0;
	while(s[i]!='\0')
	{
		if(s[i]!=c)
	    	s[j++]=s[i];
		i++;
	}
	s[j]='\0';
}
*/
//1089
/***
# include <stdio.h>
int main()
{
    int a[100],i,t,k,m,n;
    scanf("%d%d",&m,&n);//input _number(2)
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        t=a[m-1];
        for(k=m-1;k>0;k--)
        {
            a[k]=a[k-1];
            if(0==k)
            {

                a[k]=t;//put a[4] to a[0],and it can help let last to first
            }
        }
    }
    for(i=0;i<m;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
***/
/*
// 10089_standard answers
#include<stdio.h>
int main()
{
	int a[100],i,t,k,m,n;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		t=a[m-1];
		for(k=m-1;k>=0;k--)
		{
			a[k]=a[k-1];
			if(k==0)
			{
				a[k]=t;
			}
		}
	}
	for(i=0;i<m;i++)
		printf("%d ",a[i]);
	return 0;
}
*/

/***
//1088

#include<stdio.h>
int main()
{
	int a[10][3],n,i,x,y,z;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d/%d/%d",&a[i][0],&a[i][1],&a[i][2]);//string of characters {[i][n]} _every number sum_up.
	}
	for(i=0;i<n;i++)
	{
		x=a[i][0];
		y=a[i][1];
		z=a[i][2];
		a[i][0]=y;
		a[i][1]=z;
		a[i][2]=x;
	}
	for(i=0;i<n;i++)
	{
		if(a[i][0]<10&&a[i][1]<10)
			printf("0%d/0%d/%d\n",a[i][0],a[i][1],a[i][2]);
		else if(a[i][0]<10&&a[i][1]>10)
			printf("0%d/%d/%d\n",a[i][0],a[i][1],a[i][2]);
		else if(a[i][0]>10&&a[i][1]<10)
			printf("%d/0%d/%d\n",a[i][0],a[i][1],a[i][2]);
		else if(a[i][0]>10&&a[i][1]>10)
			printf("%d/%d/%d\n",a[i][0],a[i][1],a[i][2]);
	}
	return 0;
}
***/
/***   1049   ***/
/***
#include<stdio.h>
int main()
{
char ch;
while ((ch=getchar())!='\n')
{
if (ch>='a'&&ch<='z')
{
ch=ch+3;
if(ch>122)
ch=ch-26;
putchar(ch);
}
else
if (ch>='A'&&ch<='Z')
{
 ch=ch+3;
if(ch>90)
ch=ch-26;
 putchar(ch);
}
else
 putchar(ch);
}
return 0;
}
***/
//1049
/*** 1049:µçÎÄ¼ÓÃÜ  ***/
/***
# include <stdio.h>
int main()
{
    char ch;
    while ((ch=getchar()) != '\n')
    {
        if (ch>='a' && ch<='z')
        {
            ch=ch+3;
            if (ch>122)
                ch=ch-26;
            putchar(ch);
        }
        else
            if(ch>='A' && ch<='Z')
        {
            ch=ch+3;
            if(ch>90)
                ch=ch-26;
            else
                putchar(ch);
        }
    }
    return 0;
}
***/
/***
# include <stdio.h>
int main()
{
    return 0;
}
***/
/***  1049:Message encryption ***/
/***
#include<stdio.h>
int main()
{
    char ch;
    ch= getchar();
    while ((ch=getchar())!='\n')
    {
        if (ch>='a'&&ch<='z')
        {
            ch=ch+3;
            if(ch>122)
                ch=ch-26;
            putchar(ch);
        }
        else if (ch>='A'&&ch<='Z')
        {
            ch=ch+3;
            if(ch>90)
            {
                ch=ch-26;
                putchar(ch);
            }
        }
        else
        {
            putchar(ch);
        }
    }

}
return 0;
}
***/
//1049 MESSAGE encryption
/***
# include <stdio.h>
int main()
{
    char x;
    while ((x=getchar())!='\n')
    {
        if (x>='a' && x<= 'z')
        {
            x+=3;
            if(x>122)
            {
                x-=26;
            }
            putchar(x);
        }
        else if (x>='A' && x<='Z')
        {
            x+=3;
            if(x>90)
            {
                x-=26;
            }
            putchar(x);
        }
        else
        {
            putchar(x);
        }
    }
    return 0;
}
***/
/***
# include <stdio.h>
# define N 100
int main()
{
    int x;
    int a[100];
    scanf("%d",&x);
    int word;
    int count=0;//Notice:please send a number to the first in "count";
    do
    {
        word=x%2;
        a[count]=word;
        x=x/2;
        count++;
    }while(x!=0);
    int i;
    for(i=count -1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
***/
/***
# include <stdio.h>
int main()
{
    int x;
    int a[100];
    scanf("%d",&x);
    int world;
    int count=0;
    do
    {
        world=x%2;
        a[count]=world;
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
***/
//1041
/*
# include <stdio.h>
int main()
{
    int x;
    int a[100];
    scanf("%d",&x);
    int w;
    int n=0;
    do
    {
        w=x%16;
        a[n]=w;
        x=x/16;
        n++;
    }while(x!=0);
    int i;
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
*/
/*** 1045:斐波那契数列 1037    ***/
/***
# include <stdio.h>
int main()
{
    int n;
    int a[10];

    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        if(1==i ||0==i)
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
        if((i+1)%5==0)
        {
            printf("\n");
        }
    }
    return 0;
}
***/
/*** 1049 ***/
/***
# include <stdio.h>
int main()
{
    int a[10];
    int n,i;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        if(i==1 || 0==i)
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
        if(((i+1)%5)==0)
        {
            printf("\n");
        }
    }
    return 0;
}
***/
/***1046-ARRAY:   ***/
/***
# include <stdio.h>
int main()
{
    int a[10];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;
    temp=a[0];
    for(i=0;i<9;i++)
    {
        a[i]=a[i+1];
    }
    a[9]=temp;
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
***/
/*** 1047 :ARRAY: insert several numbers ***/
/***
# include <stdio.h>
int main()
{
    int a[100];
    int i,j,x,n;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    n=i;
    scanf("%d",&x);
    while(x!=-1)
    {
        i=0;
        while(a[i]<x && i<n)
        {
            i++;
        }
        for(j=n-1;j>=i;j--)
        {
            a[j+1]=a[j];
        }
        a[i]=x;
        n++;
        scanf("%d",&x);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
***/
/*** 1038:ARRAY:PRACTISE ***/
/***
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10],b[10],c[20];
    int i,j,k;
    int m,n;
    scanf("%d %d",&m,&n);
//input: content
    for(i=0;i<m;i++)
    {
        scanf("%d\n",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    i=0,j=0,k=0;
    //imprtant part:notice your programes,it happen mistakes in it
    while(i<m&&j<n)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else if(a[i]>=b[j])//Notice:pay attention to "=",it alwyse happen mistake,maybe your programe can not run.
        {
            c[k++]=b[j++];
        }
    }
    // last part :it use to add the array of the rest
    while(i<m)//it can use "for",but it is too busy.
    {
        c[k++]=a[i++];
    }
    while(j<n)
    {
        c[k++]=b[j++];
    }
//output :
    for(k=0;k<m+n;k++)
    {
        printf("%d ",c[k]);
    }
    return 0;
}
***/
/***
# include <stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int a[10],b[10],c[20];
    int i,j,k;
    for(i=0;i<m;i++)
    {
        scanf("%d\n",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    i=j=k=0;
    while(i<m && j<n)
    {
        if(a[i]>b[j])
        {
            c[k++]=b[j++];
        }
        else if(a[i]<=b[j])
        {
            c[k++]=a[i++];
        }
    }
    while(i<m)
    {
        c[k++]=a[i++];
    }
    while(j<n)
    {
        c[k++]=b[j++];
    }
    for(k=0;k<m+n;k++)
    {
        printf("%d ",c[k]);
    }
    return 0;
}
***/
/*
# include <stdio.h>
int main()
{


    return 0;
}
*/
/***
# include <stdio.h>
int main()
{
    return 0;
}
***/
/***
# include <stdio.h>
int main()
{
    return 0;
}
***/
/***
/***
//1038
#include<stdio.h>
int main()
{
    int a[100];
    int i, j, x,n;
    for (i=0; i < 5; i++)
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

***/
/*
# include <stdio.h>
int main()
{
    int a[10],b[10],c[20];
    int m,n,k,i,j;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    i=j=k=0;
    while(i<m&&j<n)
    {
        if(a[i]>b[j])
        {
            c[k++]=b[j++];
        }
        else if(a[i]<=b[j])
        {
            c[k++]=a[i++];
        }
    }
    while(i<m)
    {
        c[k++]=a[i++];
    }
    while(j<n)
    {
        c[k++]=b[j++];
    }
    for(k=0;k<m+n;k++)
    {
        printf("%d ",c[k]);
    }
    return 0;
}
*/
