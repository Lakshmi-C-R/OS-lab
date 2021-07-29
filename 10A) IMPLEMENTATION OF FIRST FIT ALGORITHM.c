#include<stdio.h>
struct ff{
int id,as;
}mm[10];
void main()
{
int pd,i,temp,temp1,cc,j,n,a,flag=0,flag1=0;
printf("Enter the no of space to be used: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the address: ");
scanf("%d",&mm[i].id);
printf("Please enter the space for.%d: ",mm[i].id);
scanf("%d",&mm[i].as);
for(j=0;j<i;j++)
if (mm[i].id<=mm[j].id+mm[j].as && mm[i].id>mm[j].id || (mm[i].id<mm[j].id&&mm[i].id+mm[i].as>mm[j].id))
{
    flag=1;
    printf("...Duplicate address...\n");
    printf("Please enter the New Address: ");
    break;
    i--;
    break;
}
}
printf("\nEnter the space required:");
scanf("%d",&a);
printf("First Fit Algorithm:");
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(mm[i].as>=mm[j].as)
    temp1=mm[i].id;
mm[i].as=mm[j].as;
mm[i].id=mm[j].id;
if(mm[i].as>=a)
{
mm[i].id+=a;
mm[i].as-=a;
break;
}
else
    printf("\nThe space not available in:P%d\n",i+1);
}
printf("\nAfter allocation space available:\n");
printf("\n**********************************");
printf("\nProcessid \tAvailableSpace:\n");
printf("******************************\n");
for(i=0;i<n;i++)
    printf("\n%d\t\t%d",mm[i].id,mm[i].as);}
}

