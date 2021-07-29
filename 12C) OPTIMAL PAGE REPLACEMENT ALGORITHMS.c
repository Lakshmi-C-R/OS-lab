#include<stdio.h>
int frames[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1};
int nf,pf=0,pageno[50],np=0,location[10];
int search(int i);
void replace(int i);
void print(int i);
int main()
{
int i=0;
printf("Optimal Page Replacement Algorithm :\n"); 
printf("-----------------------------------\n\n"); 
printf("Enter the number of frames : ");
scanf("%d",&nf);
printf("Enter the page numbers one by one.");
printf("(Enter -1 when finished)\n");
do
{
    scanf("%d",&pageno[i]);
    np++;
    i++;
}while(pageno[i-1] != -1);
i=0;
np--;
printf("\nInput	Frame Status\n");
printf("------------------------\n");
while(pageno[i] != -1)
{
    if(!search(i))
    {
        replace(i);
        pf++;
        print(i);
    }
    else
        print(i);
    i++;
}
printf("\n\nPage faults : %d",pf);
}
int search(int i)
{
    int j;
    for(j=0;j<nf;j++)
    {
        if(frames[j] == pageno[i])
        return 1;
    }
    return 0;
}
void replace(int i)
{
    int j,k,max;
    for(j=0;j<nf;j++)
    {
        if(frames[j] == -1)
        {
            frames[j] = pageno[i];
            return 0;
        }
    }
    for(j=0;j<nf;j++)
    {
        for(k=i+1;k<np;k++)
        {
            location[j] = np+1;
            if(pageno[k] == frames[j])
            {
                location[j] = k;
                break;
            }
        }
    }
    max = 0;
    for(j=0;j<nf;j++)
    {
        if(location[j] > location[max])
max = j;
    }
    frames[max] = pageno[i];
}
void print(int i)
{
    int j;
    printf("\n  %d	-  ",pageno[i]);
    for(j=0;j<nf;j++)
    printf("  %2d",frames[j]);
}
