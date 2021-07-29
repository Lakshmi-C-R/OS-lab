
#include<stdio.h>
int main()
{
    int n,temp=0,w[20],b[20],p[20],t2[20],j,t1,d[20],i,te=0,b1[20],t3=0;
    float t,r;
    w[1]=0;
    printf("Enter no of processes:");
    scanf("%d",&n);
    printf("Enter the burst times:\n");
    for(i=1;i<=n;i++)
{
        printf("P%d:",i);
        scanf("%d",&b[i]);
        d[i]=i;
    }
    printf("Enter the priorities:\n");
    for(i=1;i<=n;i++)
    {
        for(i=1;i<=n;i++)
        {
            printf("P%d:",i);
            scanf("%d",&p[i]);
        }
    for(i=1;i<=n;i++)
        for(j=i+1;j<=n;j++)
            if(p[i]<p[j])
            {
                temp=p[i];
                t1=d[i];
                te=b[i];
                p[i]=p[j];
                d[i]=d[j];
                b[i]=b[j];
                p[j]=temp;
                d[j]=t1;
                b[j]=te;
            }
    printf("Gantt chart:");
    for(i=1;i<=n;i++)
        printf(" P %d\t",d[i]);
    printf("\n Process\t priority \t burst time \t waiting time \t turnaround time");
    for(i=1;i<=n;i++)
    {
        t=d[i];
        w[i+1]=w[i]+b[i];
        t2[i]=b[i]+w[i];
        t3+=t2[i];
        printf("\nP %d\t\t %d\t\t%d\t\t%d\t\t%d",d[i],p[i],b[i],w[i],t2[i]);
    }
    }
    temp=0;
    for(i=1;i<=r;i++)
        temp+=w[i];
    t=(float)temp/n;
    r=(float)t3/n;
    printf("\n Average waiting time:%.2f",t);
    printf("\n Averageturnaround time:%.2f",r);
