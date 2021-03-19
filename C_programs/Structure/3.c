#include<stdio.h>
struct number 
{ 
	float x; 
}; 
int main() 
{ 
	struct number n1,n2,n3; 
    int n=0;
	n1.x=4; 
	n2.x=3; 
	n=n1.x+n2.x; 
	printf("%d", n);
    return 0; 

} 

/*Output: 

prog.c: In function 'main': 
prog.c:10:7: error: 
invalid operands to binary + (have 'struct number' and 'struct number') 
n3=n1+n2; 

*/
