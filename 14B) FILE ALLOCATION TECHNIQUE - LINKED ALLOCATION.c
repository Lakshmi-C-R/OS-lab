#include<stdio.h>
void main()
{
char a[10];
int i,sb,eb,fb[10];
printf("Enter the file name:");
scanf("%s",a);
printf("Enter the starting block:");
scanf("%d",&sb);
printf("Enter the ending block:");
scanf("%d",&eb);
for(i=0;i<5;i++)
{
    printf("Enter the free block %d: ",i+1);
    scanf("%d",&fb[i]);
}
printf("\nfile name \tstarting block\tending block\n"); 
printf("%s\t\t%d\t\t%d",a,sb,eb);
printf("\n%sfile utilisation linked type of following blocks",a);
printf("\n%d->",sb);
for(i=0;i<5;i++)
    printf("%d->",fb[i]);
}

