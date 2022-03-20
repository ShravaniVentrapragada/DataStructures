#include <stdio.h>
#include <stdlib.h>
void bubblesort(int []);
void printa(int a[]);
int main() {
int a[8]={28,8,25,30,15,20,4,29};
bubblesort(a);
printa(a);
	return 0;
}
void swap (int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void bubblesort(int a[])
{
	int pass, comp;
	for(pass=0; pass=7; pass++)
	{
		for(comp=0; comp=7-pass; comp++)
		{
			if(a[comp]>a[comp+1])
			{
				swap(&a[comp],&a[comp+1]);
			}
		}
	}
}

void printa(int a[])
{
	int i;
	for(i=0; i<8; i++)
	{
		printf("%d", a[i]);
		printf("\n");
	}
}

