#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

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

char unpack(int p, int k){
	int n = k*CHAR_BIT;
	unsigned mask = 255;
	mask <<= n;
	return((p & mask) >> n);
}

int main(int argc, char *argv[]){
	if(argc < 3){
		printf("usage : bitwise num1, num2\n");
		exit(1);
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	printf("%d, %d : ", num1, num2);
	bit_print(num1);
	printf(",");
	bit_print(num2);
	printf("\n");

	printf("~%d, ~%d :", num1, num2);
	bit_print(~num1);
	printf(",");
	bit_print(~num2);
	printf("\n");

	printf("%d & %d : ", num1, num2);
	bit_print(num1 & num2);
	printf("\n");

	printf("%d | %d : ", num1, num2);
	bit_print(num1 | num2);
	printf("\n");

	printf("%d ^ %d : ", num1, num2);
	bit_print(num1 ^ num2);
	printf("\n");

	printf("%d << 2, %d >> 5 : ", num1, num2);
	bit_print(num1 << 2);
	printf(",");
	bit_print(num2 >> 5);
	printf("\n");

	char c1 = 'c', c2 = 'h', c3 = 'a', c4 = 'r';
	printf("%c, %c, %c, %c : \n", c1, c2, c3, c4);
	bit_print(c1); printf("\n");
	bit_print(c2); printf("\n");
	bit_print(c3); printf("\n");
	bit_print(c4); printf("\n");

	int pdata = pack(c1, c2, c3, c4);
	printf("packed data : \n");
	bit_print(pdata);
	printf("\n");
	printf("unpack(pdata, 0) : %c\n", unpack(pdata, 0));
	printf("unpack(pdata, 2) : %c\n", unpack(pdata, 2));

	return 0;
}
