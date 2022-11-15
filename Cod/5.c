#include <stdio.h>

void main(){

long long int NOD (long long int a,long long int b) {
             if (a>b) a-=b;
             else if (a<b) b-=a;
             else return a;
}
long long int NOK (long long int a,long long int b) {
           return a*b/NOD(a,b);
}
 
int main() {
long long int a, b;
 scanf("%lld %lld", &a, &b);
 printf("\n");
 printf("%lld\n",NOK(a,b));
return 0;
 }
}
