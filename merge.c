#include<stdio.h>
#include<conio.h>
void main()
{
    int a1[20],a2[20],a3[40],i,j,k=0,m,n;
    printf("enter the size of array1\t");
    scanf("%d",&m);
    printf("enter the element of arr1 \t");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("enter the size of array2\t");
    scanf("%d",&n);
    printf("enter the element of arr2 \t");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a2[i]);
    }
    i=0;j=0;
    while(i<m&&j<n)
    {
        if(a1[i]<a2[j])
        {
            a3[k]=a1[i];
            i++;
        }
        else
         {
            a3[k]=a2[j];
            j++;
        }
        k++;
    }
    if(i>=m)
    {
        while(j<n)
        {
           a3[k]=a2[j];
            j++;
            k++;  
        }
    }
    if(j>=n)
    {
        while(i<m)
        {
           a3[k]=a1[i];
            i++;
            k++;  
        }
    }
    printf("after merging \t");
    for(i=0;i<m+n;i++)
    {
    printf("%d\t",a3[i]);
    }
}