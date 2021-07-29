
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,b[10],t=0,w=0,i,r=0,a=0;
    printf("Enter number of processes:");
    scanf("%d",&n);
    float avg,avg1;
    printf("Enter the burst time:\n");
    for(i=1;i<=n;i++)
        scanf("%d",&b[i]);
    printf("Gantt Chart:    ");
    for(i=1;i<=n;i++)
        printf("P%d  ",i);
    printf("\nProcess\tburst time\twaiting time\tturn_around time\n");
    for(i=1;i<=n;i++)
    {
        t=t+w;
        r=r+b[i];
        printf("P%d\t%d\t%d\t%d\n",i,b[i],w,r);
        w=w+b[i];
        a=a+r;
    }
    avg=(float)t/n;
    avg1=(float)a/n;
    printf("\n Average waiting time: %f",avg);
    printf("\n Average turnaround time: %f \n",avg1);
}
