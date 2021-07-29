#include<stdio.h>
void main()
{
    int i,j,temp,f[10],fp[10];
    int no,p[15],part[15],pno,pr[15],prmem[15];
    printf("*******************************************");
    printf("\nIMPLEMENTATION OF WORST-FIT ALGORITHM");
    printf("\n*******************************************");
    printf("\nEnter the number of partitions:");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        p[i]=i;
        printf("Enter the memory for partition %d:\t",i);
        scanf("%d",&part[i]);
    }
    for(i=1;i<=no;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(part[j]<part[i])
            {
                temp=part[i];
    part[i]=part[j];
                part[j]=temp;
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    printf("\nFree memory");
    for(i=1;i<=no;i++)
        printf("\n partition %d: \t %d",p[i],part[i]);
    printf("\n Enter the number of process");
    scanf("%d",&pno);
    for(i=1;i<=pno;i++)
    {
        pr[i]=i;
        printf("Enter the size for process %d:\t",i);
        scanf("%d",&prmem[i]);
    }
    printf("\n----------------------------------------");
    printf("\nPROCESS|\t PARTITION| \t FREE_MEMORY|\n"); 
    printf("\n----------------------------------------\n"); 
    j=1; 
    for(i=1;i<=no;i++)
    {
        f[i]=0;
        fp[j]=0;
    }
    while(j<=pno)
    {
    for(i=1;i<=no;i++)
    {
    if((part[i]>=prmem[j]) && (f[i]==0))
    {
        part[i]=part[i]-prmem[j];
        fp[j]=1;
        printf("%d\t\t%d\t\t%d \n",pr[j],p[i],part[i]);
        goto l1;
    }
    }
    l1: j++;
    }
    for(i=1;i<=no;i++)
    {
        if(f[i]==0)
            printf("\t\t%d\t\t%d\n",p[i],part[i]);
    }
    printf("The following process is not allocatted:");
    for(i=1;i<=pno;i++)
{
        if(fp[i]==0)
            printf(" %d ",pr[i]);
    }
    
}

