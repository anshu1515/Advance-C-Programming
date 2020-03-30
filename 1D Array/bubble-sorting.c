#include <stdio.h>
int main()
{
    int i,j,temp,flag,n;
    scanf("%d",&n);
    int a[n],count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                flag=1;
                count++;
            }
        }
        if(flag=0)
        break;
    }
    printf("%d\n",count);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}