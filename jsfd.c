#include <stdio.h>

void message(void)
{

	printf("Assume a natural number in Your mind!\n");
	printf("Multily Your number by 2 and Add 8 to it!\n");
	return;

}

int calculation(int a);

int main()
{

	int number = 0;
	message();
	scanf("%d", &number);
	printf("%d\n", calculation(number));
	
	return 0;
}

int calculation(int a)
{

	a = ((a/2)-4);
	return a;		

}