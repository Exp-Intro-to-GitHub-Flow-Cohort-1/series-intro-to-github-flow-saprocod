#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	char cumle[100];
	int sayac=0;
	int i=0;
	
	printf("Lutfen cumlenizi yaziniz:");
	gets(cumle);
	
	while(cumle[i])
	{
		if (cumle[i]==32)
		{
			sayac++;
		}
		i++;
		
	}
	
	printf("Cumledeki kelime sayisi: %d",sayac+1);
	
	return 0;

}	
