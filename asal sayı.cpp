#include <stdio.h>
int main() {
	
	int s,y,i,asal=1;
	printf("Sayi Giriniz ");
	scanf("%d",&s);
	
	for(i=2;i<s;i++)
	{
		y=s%i;
		if(y==0)
	{
		asal=0;
		i=s-1;
	}
		
	}
	
	if(asal==1)
	{
		printf("%d Asaldir",s);
	}
	else
	{
		printf("%d Asal Degildir",s);
	}
	
	return 0;
}
