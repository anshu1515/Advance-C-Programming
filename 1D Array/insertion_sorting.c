#include <stdio.h>
void input(int *a,int n);
void insert(int *a,int n);
void print(int *a,int n);
int main()
{
    int n;
    int a[100];
    scanf("%d",&n);
    input(a,n);
    return 0;
}
void input(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insert(a,n);
}
void insert(int *a,int n)
{
    int i,j,k,count=0;
    for(i=1;i<n;i++)
    {
        k=a[i];
        j=i-1;
        while(j>=0 && a[j]>k)
        {
          a[j+1]=a[j];
          j=j-1;
        }
        a[j+1]=k;
        count++;
    }
    printf("%d\n",count);
    print(a,n);
}
void print(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}