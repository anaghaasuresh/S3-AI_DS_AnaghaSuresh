#include<stdio.h>
int main() {
int a[50],search i,found = 0,num;
printf("enter the number of elements:");
scanf("%d",&num);
printf("enter the elements of the array:");
for(i=0;i<num;i++) {
scanf("%d",&a[i]);
}
printf("enter the element to search:");
scanf("%d",&search);
for(i=0;i<num;i++)
{
if(a[i]==search) {
found=1;
break;
}
}

if(found) {
printf("the element was found at position %d\n",i+1);
}
else {
printf("the element was not found\n");
}
return 0;
}
