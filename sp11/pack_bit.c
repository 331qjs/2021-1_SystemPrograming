#include <limits.h>
#include <stdio.h>

void bit_print(int a){
	int i;
	int n = sizeof(int)*CHAR_BIT;
	int mask = 1 << (n - 1);
	for(i = 1; i <= n; ++i){
		putchar(((a & mask)==0) ? '0' : '1');
		a <<= 1;
		if(i % CHAR_BIT == 0 && i < n)
			putchar(' ');
	}
}

int pack(char a, char b, char c, char d){
	int p = a;
	p = (p << CHAR_BIT) | b;
	p = (p << CHAR_BIT) | c;
	p = (p << CHAR_BIT) | d;
	return p;

}

void main(){
	printf("abcd = ");
	bit_print(pack('a', 'b', 'c', 'd'));
	putchar('\n');
}
