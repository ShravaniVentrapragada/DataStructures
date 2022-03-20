#include <stdio.h>
#include <stdlib.h>
struct bank
{
             char name[30];
	int account;
	float balance;
};
void display(struct bank b[]);
int main()
{
int i;
struct bank b[2];
printf("enter your details\n");
for(i=0;i<1;i++)
{
printf("enter your name");
scanf("%s",&b[i].name);
printf("enter your account number");
scanf("%d",&b[i].account);
printf("enter your balance");
scanf("%f",&b[i].balance);
}
display(b);
return 0;
}
void display(struct bank b[])
{ 
int i;
for(i=0;i<1;i++)
{
	printf("name=%s\naccount number=%d\nbalance=%flakhs\n\n",b[i].name,b[i].account,b[i].balance);
}
}

