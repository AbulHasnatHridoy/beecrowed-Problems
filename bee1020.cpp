#include<stdio.h>
int main(){
int age;
scanf("%d",&age);
int year=age/365;
int remaining=age%365;
int month=remaining/30;
int day=remaining%30;
printf("%d ano(s)\n",year);
printf("%d mes(es)\n",month);
printf("%d dia(s)\n",day);

return 0;
}
