#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char a[10];
	char i, p;
	int flag;
	printf("enter a");
	scanf("%s",&a);
	for(i=0; i<strlen(a); i++)
	{
		if(a[i]==p){
			printf("present");
		}
	}
	return 0;
}
