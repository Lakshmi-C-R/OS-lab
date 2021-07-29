#include<stdio.h>
void main()
{
char a[10];
int i,ib,cib[10];
printf("\nEnter the file name:");
scanf("%s",a);
printf("\nIndex block:");
scanf("%d",&ib);
for(i=1;i<=5;i++)
{
    printf("enter the child of index block %d:",i);
    scanf("%d",&cib[i]);
}
printf("\n the list of files\tindex block\n");
printf("%s\t\t%d",a,ib);
printf("\n The above file utilization index block of child blocks following\t");
printf("\n");
for(i=1;i<=5;i++)
    printf("%d\t\t",cib[i]);
printf("\n");
}
