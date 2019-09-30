#include<stdio.h>
void main()
{
int top1=0,top2=0,s1[100],s2[100],s3[100],m=0,i,n,count;
printf("enter no of disck\n");
scanf("%d",&n);
printf("enter no of elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&s1[i]);
}
for(i=0;i<n;i++)
{
if(s1[i]==m+1)
{
s2[top1]=s1[i];
m++;
top1++;
}
else
{
s3[top2]=s1[i];
top2++;
}}
for(i=0;i<n-m;i++)
{
s2[top1++]=s3[top2-1];
        --top2;
}
m=0;

for(i=0;i<n;i++)
{
if(s2[i]==m+1)
{
m++;
        count=1;
}
else

{
count=0;
break;
}
}
if(count==1)
printf("happy");
else
{
printf("sad");
}
}
