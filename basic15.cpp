#include <stdio.h> 
#include<stdlib.h>

int main()
{
printf("請輸入時間：\n");
int hour,minute,mm;
while(scanf("%d%d",&hour,&minute)==2)
{

mm = hour*60 + minute;

if(mm>449 && mm<1020)

printf("在學校\n");

else

printf("不再學校\n");

}
system("pause");
return 0;

}
