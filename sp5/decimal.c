#include <stdio.h>

int main(void){
	printf("%d %x %o\n", 19, 19, 19);
	printf("%d %x %o\n", 0x1c, 0x1c, 0x1c);
	printf("%d %x %o\n", 017, 017, 017);
	printf("%d\n", 11 + 0x111 + 011);
	printf("%x\n", 2097151);
	printf("%d\n", 0x1FfFFf);
	return 0;
}
