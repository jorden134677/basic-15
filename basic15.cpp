#include <stdio.h> 
#include<stdlib.h>

int main()
{
printf("�п�J�ɶ��G\n");
int hour,minute,mm;
while(scanf("%d%d",&hour,&minute)==2)
{

mm = hour*60 + minute;

if(mm>449 && mm<1020)

printf("�b�Ǯ�\n");

else

printf("���A�Ǯ�\n");

}
system("pause");
return 0;

}
