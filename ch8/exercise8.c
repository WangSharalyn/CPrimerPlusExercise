// the code is from spencerpomme in github.
#include <stdio.h>
#include <ctype.h>
char get_choice(void);
float get_num(void);
int main(void)
{
	float first_num, second_num;
	char choice;
	printf("Enter the option of your choice:\n");
	printf("a. add\t\ts. subtract\nm. multiply\td. divide\nq. quit\n");
	while ((choice = get_choice()) != 'q')
	{
		if ((choice != 'a') && (choice != 's') && (choice != 'm') && (choice != 'd'))
		{
			printf("If you don't choose right then default 'a'\n");
			printf("Applying addition...\n");
			choice = 'a';
		}
		printf("Enter first number: ");
		first_num = get_num();
		printf("Enter second number: ");
		second_num = get_num();
		while (choice == 'd' && second_num == 0)
		{
			printf("Can not devide by 0, try another number: ");
			first_num = get_num();
		}
		switch (choice)
		{
			case 'a':
			printf("Applying addition...\n");
			printf("%.1f + %.1f = %.1f\n", first_num, second_num, first_num + second_num);
			break;
			case 's':
			printf("Applying subtraction...\n");
			printf("%.1f - %.1f = %.1f\n", first_num, second_num, first_num - second_num);
			break;
			case 'm':
			printf("Applying multiplication...\n");
			printf("%.1f * %.1f = %.1f\n", first_num, second_num, first_num * second_num);
			break;
			case 'd':
			printf("Applying division...\n");
			printf("%.1f / %.1f = %.1f\n", first_num, second_num, first_num / second_num);
			break;
			default: printf("Only responde to a,s,m or d.\n");
					 printf("%c --> %d\n", choice, choice);
			break;
		}
		printf("\n");
		printf("Enter the option of your choice:\n");
		printf("a. add\t\ts. subtract\nm. multiply\td. divide\nq. quit\n");
	}
	printf("Bye.\n");
	return 0;
}

char get_choice(void)
{
	char ch;
	while (isspace(ch = getchar()))
		continue;
	while (getchar() != '\n')
		continue;
	return ch;
}

float get_num(void)
{
	float num;
	char ch;
	while (scanf("%f", &num) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an number.\n Please enter an ");
		printf("valid number, such as 25, 10.23, -0.56:\n");
	}
	return num;	
}