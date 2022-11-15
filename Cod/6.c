#include <stdio.h>
main() {
int n,s;
printf ("Ny ");
scanf("%d", &n);
s=0;
while(n > 0){
	s +=n%10;
	n/= 10;
	
}
printf ("%d",s);

	
	
}


