#include<stdio.h>  
#include<conio.h>
void main()
{
  int process,resource,i,j,instanc,k=0,count1=0,count2=0;
  printf("\nEnter No. of Process:");
  scanf("%d",&process);                
  printf("Enter No. of Resources:");
  scanf("%d",&resource);        
  int avail[resource],max[process][resource],allot[process][resource],need[process][resource],completed[process];
  for(i=0;i<process;i++)
  completed[i]=0;                        
  printf("Enter No. of Available Instances:\n");
  for(i=0;i<resource;i++)
  {
    scanf("%d",&instanc);
    avail[i]=instanc;                     
  }
  printf("Enter Maximum No. of instances of resources that a Process need:\n");
  for(i=0;i<process;i++)
  {
    printf("For P[%d]\n",i);
    for(j=0;j<resource;j++)
     {
        scanf("%d",&instanc);
        max[i][j]=instanc;              
     }
  }    
  printf("Enter no. of instances already allocated to process of a resource:\n");
  for(i=0;i<process;i++)
  {
    printf("For P[%d]\n",i);
    for(j=0;j<resource;j++)
     {
        scanf("%d",&instanc);
        allot[i][j]=instanc;
        need[i][j]=max[i][j]-allot[i][j];      
     } 
 }
printf("\nSafe Sequence is:  ");
while(count1!=process)
{
count2=count1;
  for(i=0;i<process;i++)
  {
    for(j=0;j<resource;j++)
    {
        if(need[i][j]<=avail[j])
            k++;
    }    
    if(k==resource && completed[i]==0 )
     {
       printf("P[%d] ",i);
       completed[i]=1;
       for(j=0;j<resource;j++)
           avail[j]=avail[j]+allot[i][j];
         count1++;
     }
     k=0;
   }
    if(count1==count2)
    {
    printf("\nStop ..After this.....Deadlock\n");
    break;
    } 
 }
}   
