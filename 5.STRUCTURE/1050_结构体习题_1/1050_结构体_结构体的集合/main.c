//1050
/***
# include <stdio.h>
struct stud_type
{
    int num;
    char name[20];//姓名采用字符型数组输入
    float s1;
    float s2;
    float s3;
};
int main()
{
    int i=0,j=0;
    float average[5],t=0;
    struct stud_type stu[5];
    struct stud_type tran;
    for(i=0; i<5; i++)
    {
        scanf("%d%s%f%f%f",&stu[i].num,&stu[i].name,&stu[i].s1,&stu[i].s2,&stu[i].s3);
        average[i]=(stu[i].s1+stu[i].s2+stu[i].s3)/3;
    }
    for(i=0; i<5; i++)
    {
        printf("%d %s %.2f %.2f %.2f %.2f\n",stu[i].num,stu[i].name,stu[i].s1,stu[i].s2,stu[i].s3,average[i]);
    }
    for(i=0; i<5; i++)
        for(j=0; j<4; j++)
        {
            if(average[j]>average[j+1])
            {
                tran=stu[j];
                t=average[j];
                stu[j]=stu[j+1];
                average[j]=average[j+1];
                stu[j+1]=tran;
                average[j+1]=t;
            }
        }
    for(j=4; j>1; j--)
    {
        printf("%d %s %.2f %.2f %.2f %.2f\n",stu[j].num,stu[j].name,stu[j].s1,stu[j].s2,stu[j].s3,average[j]);

    }

    return 0;
}

***/
//标准
/*
#include<stdio.h>
struct stud_type
{
	int num;
	char name[20];
	float s1;
	float s2;
	float s3;
};
int main()
{
	int i=0,j=0;
	float ave[5],t=0;
	struct stud_type stu[5];
	struct stud_type tran;
	for(i=0;i<5;i++)
	{
		scanf("%d%s%f%f%f",&stu[i].num,stu[i].name,&stu[i].s1,&stu[i].s2,&stu[i].s3);
		ave[i]=(stu[i].s1+stu[i].s2+stu[i].s3)/3;
	}
	for(i=0;i<5;i++)
	{
		//printf(" ");
		printf("%d %s %.2f %.2f %.2f %.2f\n",stu[i].num,stu[i].name,stu[i].s1,stu[i].s2,stu[i].s3,ave[i]);
	}
	for(i=0;i<5;i++)
	for(j=0;j<4;j++)
		if(ave[j]>ave[j+1])
		{
			tran=stu[j];
			t=ave[j];
			stu[j]=stu[j+1];
			ave[j]=ave[j+1];
			stu[j+1]=tran;
			ave[j+1]=t;
		}
	for(j=4;j>1;j--)
		{
		printf("%d %s %.2f %.2f %.2f %.2f\n",stu[j].num,stu[j].name,stu[j].s1,stu[j].s2,stu[j].s3,ave[j]);
		}
	return 0;
}
*/
//1090:结构体：定义一个结构体
/***
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

//1091
/*
# include <stdio.h>

struct st
{
    long number;
    char name[20];
    int C_score;
};
int main()
{
    struct st s[5];
    int i,t=6;
    long a;
    for(i=0;i<5;i++)
    {
        scanf("%ld %s %d",&s[i].number,s[i].name,&s[i].C_score);
    }
    scanf("%ld",&a);
    for(i=0;i<5;i++)
    {
        if(a==s[i].number)
        {
            t=i;
        }
    }
        if(t!=6)
        {
            printf("%ld %s %d",s[t].number,s[t].name,s[t].C_score);
        }
        else
        {
            printf("not found");
        }
        return 0;

}
*/
/*
# include <stdio.h>
int main(int argc, char** argv)// -->趋向于。。。
{
    int x=10;
    while(x --> 0)
    {
        printf("%d ", x);
    }
    return 0;
}
*/
/*
# include <stdio.h>
struct student
{
    int numbers;
    char name[10];
    int score;

};

int main()
{
    int i;
    struct student s[5];
    for(i=0;i<5;i++)
    {
        scanf("%d %s %d",&s[i].numbers,&s[i].name,&s[i].score);
    }

    int t,a=6;
    scanf("%d",&t);
    for(i=0;i<5;i++)
    {
        if(t==s[i].numbers)
        {
            a=i;
        }
    }
    if(a!=6)
    {
        printf("%d %s %d",s[a].numbers,s[a].name,s[a].score);
    }
    else
        printf("not found");

}
*/
/***
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
***/
/***
# include <stdio.h>
# include <string.h>
struct voter
{
    char name[20];
    int votes;
} ver[3]={"Li",0,"Zhang",0,"Wang",0};
int main()
{
    char leader_name[20];
    int i,j;
    for(i=0;i<8;i++)
    {
        scanf("%s",&leader_name);
        for(j=0;j<3;j++)
        {
            if(strcmp(leader_name,ver[j].name)==0)
            {
                ver[j].votes++;
            }
        }
    }
    for(j=0;j<3;j++)
    {
        printf("%s:%d\n",ver[j].name,ver[j].votes);
    }
    return 0;
}
***/
/***
# include <stdio.h>
struct worker# include <string.h>
struct voter
{
    char name[20];
    int votes;
} ver[3]={"Li",0,"Zhang",0,"Wang",0};
int main()
{
    char leader_name[20];
    int i,j;
    for(i=0;i<8;i++)
    {
        scanf("%s",&leader_name);
        for(j=0;j<3;j++)
        {
            if(strcmp(leader_name,ver[j].name)==0)
            {
                ver[j].votes++;
            }
        }
    }
    for(j=0;j<3;j++)
    {
        printf("%s:%d\n",ver[j].name,ver[j].votes);
    }
    return 0;
}
{
    int numbers[10];
};
int main()
{

    return 0;
}
***/
//1092
/***
# include <stdio.h>
struct worker
{
    char num[10];
    char name[10];
    int price;
} s[5];

int main()
{
    int i,sum=0;
    int aver;
    for(i=0;i<5;i++)
    {
        scanf("%s %s %d",&s[i].num,&s[i].name,&s[i].price);
        sum+=s[i].price;
    }
    aver=sum/5.0;
    int number=0;
    for(i=0;i<5;i++)
    {
        if(s[i].price>aver)
        {
            int n;
            n=i;
            printf("%s %s %d\n",s[n].num,s[n].name,s[n].price);
            number++;
        }
    }
    printf("number=%d",number);

    return 0;
}
***/
/***
# include <stdio.h>
struct student
{
    int num;
    char name[10];
    int score;
} s[5];
int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%d %s %d",&s[i].num,&s[i].name,&s[i].score);
    }
    int t=0;

    return 0;
}
***/
/***
# include <stdio.h>
int main()
{
    int i,t;
    int a[]={15,47,58,16,37,66,54,34};
    for(i=0;i<8;i++)
    {
        if(i==0)
        {
            t=a[i];
        }
        else if(a[i]>a[i-1])
        {
            t=a[i];
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

