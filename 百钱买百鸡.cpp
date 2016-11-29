#include<stdio.h>
void main(){
	int x, y, z;
	for ( x= 0; x <=20; x++)
	{
		for (y = 1; y <= 33; y++)
		{
			for ( z = 0; z <=99; z+=3)
			{
				if ((5*x + 3 * y + z / 3 == 100) && (x + y + z == 100))
					printf("¹«¼¦=%d£¬Ä¸¼¦=%d,Ð¡¼¦=%d/n", x, y, z);
			}
		}
	}
}