//1091

#include <stdio.h>
#include <stdlib.h>
struct st_student
{
    long num;
    char name[20];
    int score;
};

int main()
{
    int i,t;
    long s;
    struct st_student o[5];
    for(i=0;i<5;i++)
    {
        scanf("%ld %s %d",&o[i].num,&o[i].name,&o[i].score);
    }

    scanf("%ld",&s);
    for(i=0;i<5;i++)
    {
        if(s==o[i].num)//notice:"==",it always make mistakes,number is always false
        {
            t=i;
            printf("%ld %s %d",o[t].num,o[t].name,o[t].score);
        }
    }
    /*
    if(t !=6)
    {
        printf("%ld %s %d",o[t].num,o[t].name,o[t].score);
    }
    else
    {
        printf("not found");
    }
*/
    return 0;
}
