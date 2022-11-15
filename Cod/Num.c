#include <stdio.h>
main() {
float x;
float y;
char sign='+';
while (sign != '0'){
	printf("Deystvie:  ");
	scanf("%c%*c", &sign);
	if (sign == '0') {break;}
	if (sign == '+'||sign == '-'||sign == '*'||sign == '/'){
		printf("x= ");
		scanf("%f%*c", &x);
		printf("y= ");
		scanf("%f%*c", &y);
		switch (sign){
			case '+':
				printf("%.2f\n", x+y);
				break;
			case '-':
				printf("%.2f\n", x-y);
				break;
			case '*':
				printf("%.2f\n", x*y);
				break;
			case '/':
				if (y != 0) printf("%.2f\n", x/y);
				else printf("You are stupid animal\n");			
		}
	}
	
	
else printf("You are stupid animal\n");	
}
}
