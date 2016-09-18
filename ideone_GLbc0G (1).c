#include<stdio.h>
int main(void){
    int num,r,sum,temp,i,a;
    scanf("%d %d",&i,&a);
    printf("Armstrong numbers in given range are:");
    for(num=i;num<=a;num++)
    {
         temp=num;
         sum = 0;
         while(temp!=0){
             r=temp%10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
         printf("\n%d",num);
    }
    return 0;
}