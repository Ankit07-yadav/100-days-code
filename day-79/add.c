#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr=fopen("numbers.txt","r");

    if(ptr==NULL)
    {
        printf("ERROR file does not open ");
        return 1;
    }

    int num;
    int sum=0;
    int avg=0;
    int count=0;

    while(fscanf(ptr,"%d",&num)==1)    
    {
        sum=sum+num;
        count++;
    }

    if(count==0)
    {
        printf("No numbers found");
        return 1;
    }

    avg=sum/count;

    printf("SUM=%d \n",sum);
    printf("AVERAGE=%d",avg);

    fclose(ptr);

    return 0;
}