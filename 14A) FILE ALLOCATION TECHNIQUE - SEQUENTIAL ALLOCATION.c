#include<stdio.h>
#include<fcntl.h>
#include<string.h>
int main()
{
char buff[10][10],name[10][10];
int fp,n[20],start=0,num,i,temp;
printf("Enter the number of files:");
scanf("%d",&num);
for(i=0;i<num;i++)
{
    printf("\nEnter the name of the file %d:",i+1);
    scanf("%s",&name[i]);
    fp=open(name[i],O_RDONLY);
    read(fp,buff[i],100);
    n[i]=strlen(buff[i]);
    printf("%d",n[i]);
}
printf("\nFilename\tStart\tEnd\tLength\n");
for(i=0;i<num;i++)
{
    if(i==0)
    temp=0;
    else
    temp=start+1;
    start=start+n[i]-1;
    if(i!=0)
    start++;
    printf("\n%s\t\t%d\t%d\t%d\n",name[i],temp,start,n[i]);
}
}

