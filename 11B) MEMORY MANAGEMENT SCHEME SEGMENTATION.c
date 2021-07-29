#include<stdio.h>
void main()
{
    printf("LAKSHMI C R-201901065");
    int n,sn[50],li[50],base[50],la,pa,i,b,s;
    printf("\nEnter the number of segments:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the limit (%d):",i);
        scanf("%d",&li[i]);
    }
    printf("Enter the base for segment(0):");
    scanf("%d",&base[0]);
    for(i=1;i<n;i++)
    {
        printf("Enter the base for segment(%d):",i);
        scanf(" %d",&base[i]);
        if(base[i]<li[i-1]+base[i-1])
        {
        printf("Enter the valid base (%d)",i);
        scanf("%d",&base[i]);
        }
    }
    printf("Enter the segment no and offset:");
    scanf("%d %d",&s,&la);
    if(la>li[s]);
    {
        printf("Enter a valid la:");
        scanf("%d",&la);
}
    pa=base[s]+la;
    printf("The segment table is:\n");
    printf("seg number\tlimit\tbase\n");
    for(i=0;i<n;i++)
        printf("%d\t%d\t%d\n",i,li[i],base[i]);
    printf("The physical address is %d",pa);
}

