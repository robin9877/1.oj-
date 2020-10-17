/*
//last fisr number has some errors;

# include <stdio.h>
struct worker
{
    char num[100];
    char name[100];
    int money;
};
int main()
{
    struct worker s[5];
    int i,n;
    for(i=1;i<=5;i++)
    {
        scanf("%s %s %d",&s[i].num,&s[i].name,&s[i].money);
    }
    for(i=1;i<=5;i++)
    {
        printf("%s %s %d\n",s[i].num,s[i].name,s[i].money);

    }


    return 0;
}
*/
//1092
/***
# include <stdio.h>
struct worker
{
    char num[100];
    char name[100];
    int money;
};
int main()
{
    struct worker s[5];
    int i;
    float aver;

    for(i=0;i<5;i++)
    {
        scanf("%s %s %d",&s[i].num,&s[i].name,&s[i].money);
    }
    int l=0;
    aver=(s[0].money+s[1].money+s[2].money+s[3].money+s[4].money)/5.0;
    for(i=0;i<5;i++)
    {
        if(s[i].money>aver)
        {
            printf("%s %s %d\n",s[i].num,s[i].name,s[i].money);
            l++;
        }
    }
    printf("number=%d",l);
    return 0;
}

/*
# include <stdio.h>
struct st
{
    char name[100];
    int vote;
};
int main()
{
    int votnum=8,i;
    for(i=0;i<n;i++)
    {
        scanf("%s",&votnum);
    }
    i=0;
    for(i=0;i<n)
    return 0;
}
***/
/*
#include <stdio.h>
#include <string.h>
struct Person
{
    char name[20];
    int count;
}leader[3]={"Li",0,"Zhang",0,"Wang",0};
int main()
{
    int i,j;
    char leader_name[20];
    for(i=0;i<8;i++)
    {
		scanf("%s",leader_name);
        for(j=0;j<3;j++)
        {
			if(strcmp(leader_name,leader[j].name)==0)
                leader[j].count++;
        }
    }
    for(j=0;j<3;j++)
    {
        printf("%s:%d\n",leader[j].name,leader[j].count);
    }
    return 0;

}
*/
/*
//1090
# include <stdio.h>
# include <string.h>
struct person
{
    char name[20];
    int count;
}leader[3]={"Li",0,"Zhang",0,"Wang",0};
int main()
{
    int i,j;
    char leader_name[20];
    for(i=0;i<8;i++)
    {
        scanf("%s",&leader_name);
        for(j=0;j<10;j++)
        {
            if(strcmp(leader_name,leader[j].name)==0)//put numbers(1) to it(it:it is your name).
            leader[j].count++;//it can help yoy identify your number is equal to right number.if(true),+1.
        }
    }
    for(j=0;j<3;j++)
    {
        printf("%s:%d\n",leader[j].name,leader[j].count);
    }
    return 0;
}
*/
//1090:practise
/*
# include <stdio.h>
# include <string.h>
struct st
{
    char name[20];
    int num;
}leader[3]={"Li",0,"Zhang",0,"Wang",0};
int main()
{
    char leader_name[20];
    int i,j;
    for(i=0;i<8;i++)
    {
        scanf("%s",&leader_name);
        for(j=0;j<10;j++)
        {
            if(strcmp(leader_name,leader[j].name)==0)
            {
                leader[j].num++;
            }
        }
    }

    for(j=0;j<3;j++)
    {
        printf("%s:%d\n",leader[j].name,leader[j].num);
    }
    return 0;
}
*/
//1091:
/***
# include <stdio.h>
struct st
{
    int num;
    char name[20];
    int score;
};
int main()
{
    struct st s[5];
    int i,t=6;
    for(i=0;i<5;i++)
    {
        scanf("%d %s %d",&s[i].num,&s[i].name,&s[i].score);

    }
    int a;
    scanf("%d",&a);
    for(i=0;i<5;i++)
    {
        if(a==s[i].num)
        {
            t=i;
        }
    }

    if(t!=6)
    {
        printf("%d %s %d",s[t].num,s[t].name,s[t].score);
        //printf("%d %s %d",&s[t].num,&s[t].name,&s[t].score);
        //
         in printf£ºDon not input "&" in it.if in,it will disapper(bugs);

    }
    else
    {
        printf("not found");
    }

    return 0;
}
***/

/***bascical answer:   ***/
/*
#include<stdio.h>
struct st
{
	int no;
	char name[20];
	int score;
};
int main()
{
	struct st s[5];
	int i,t=6;
	int a;
	for(i=0;i<5;i++)
	{
		scanf("%d%s%d",&s[i].no,&s[i].name,&s[i].score);
	}
	scanf("%d",&a);
	for(i=0;i<5;i++)
	{
		if(a==s[i].no)
			t=i;
	}
	if(t!=6)
        printf("%d %s %d",s[t].no,s[t].name,s[t].score);
	else
		printf("not found");
	return 0;
}
*/
# include <stdio.h>
int main()
{

    return 0;
}
