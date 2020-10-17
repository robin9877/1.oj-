#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int m[10]={1,2,3,4,5,6};
    m[9]=m[3]*6;
    printf("%d",m[9]);
    return 0;
}
*/
//简单选择法对10个数字进行排序
int main()
{
    int a[11],i,j,k,x;
    printf("input 10 numbers:\n");
    for(i=1; i<11;i++)
    {
        scanf("%d", &a[i]);

    }
    printf("\n");

    for(i=1; i<=10; i++)
    {
        k=i;
        for(j=i+1;j<=10;j++)
        {
            if(a[j]<a[k])
                k=j;
        }
        if(i!=k)
        {
            x=a[i];
            a[i]=a[k];
            a[k]=x;
        }
    }
    printf("The sorted numbers:\n");
    for(i=1;i<11;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
