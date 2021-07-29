#include<conio.h>
#include<stdio.h>
struct page
{
int nopages,sms,mms,sme,mme,pno,psize,residentbit;
} table[30]; void main()
{
int ch, resibit, i=0, ss=4000, se=7000, ms=6000, me=9000, pn,j; int flag;
printf("PAGING OPERATIONS"); 
printf("\n---DETAILS OF SECONDARY MEMORY---"); 
printf("\nstarting address of secondary memory=%d", ss);
printf("\nending address of secondary memory=%d", se);
printf("\n\n---DETAILS OF MAIN MEMORY---"); 
printf("\nstarting address of main memory=%d", ms); 
printf("\nending address of main memory=%d", me);
printf("\nPAGE SIZE=50");
do
{
printf("\nMENU");
printf("\n1.LOAD");
printf("\n2.DISPLAY");


printf("\n3.EXECUTE");
printf("\n4.EXIT");
printf("\nENTER THE CHOICE:");
scanf("%d", &ch);
switch(ch)
{
    case 1:
    {
        printf ("Enter the process number:");
        scanf("%d", &table[i].pno);
        printf("\nEnter the process size:");
        scanf("%d", &table[i].psize);
        table[i].nopages=table[i].psize/50;
        if(table[i].psize%50!=0)
            table[i].nopages++;
        table[i].residentbit=0;
        table[i].sms=ss;
        table[i].sme=table[i].sms+table[i].nopages*50;
        ss=table[i].sme;
        table[i].mms=-1;
        table[i].mme=-1;
        i++;
        break;
    }
    case 2:
    {
        printf("\n------------------------------------------------	");
        printf("\n PNO  PSIZE	NOPAGES  SMS  MMS  SME  MME  RSBIT");
        printf("\n-------------------------------------------------	");
        for (j=0;j<i;j++)	
        {	
            printf("\n%d", table[j].pno);
            printf("\t %d", table[j].psize);
            printf("\t %d", table[j].nopages);
            printf("\t %d", table[j].sms);
            printf("\t %d", table[j].mms);
            printf("\t %d", table[j].sme);
            printf("\t %d", table[j].mme);
            printf("\t %d", table[j].residentbit);
        }
        printf("\n ----------------------------------");
        break;
    }
    case 3:
    {
        flag=0;
        printf("\nENTER THE PROCESS NUMBER TO BE EXECUTED:");
        scanf("%d", &pn);
        for(j=0;j<i;j++)
        {
            if(pn==table[j].pno)
            {
            flag=1;
            if(table[j].residentbit==0);
            {
                table[j].mms=ms;
                table[j].mme=table[j].mms+table[j].nopages*50;
                ms=table[j].mme;
                table[j].residentbit=1;
            }
        }
    }
    if(flag==0)
        printf("\nPROCESS NOT PRESENT IN THE MAIN MEMORY FOR EXECUTION");
    else
        printf("\nPROCESS PRESENT IN THE MAIN MEMORY FOR EXECUTION");
    break;
    }
    case 4:
    {
        exit(0);
        break;
    }
}
}
while(ch!=4);
}
