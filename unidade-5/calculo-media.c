#include<stdio.h>

int main()
{
	float x,y,z,media;
	scanf("%f%f%f",&x,&y,&z);
	media = x+y+z/3;
	printf("O valor calculado da média entre os números %f, %f, %f foi: %f\n", x,y,z,media);

	return 0;
}