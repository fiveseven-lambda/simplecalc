#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]){
	if(argc == 1) return 0;
	int a = 0, b = 1, c = 0;
	for(char *i = argv[1]; *i; ++i){
		if(isdigit(*i)) a = a * 10 + *i - '0';
		else if(*i == '+'){
			c += a * b;
			a = 0;
			b = 1;
		}else if(*i == '-'){
			c += a * b;
			a = 0;
			b = -1;
		}else if(*i == '*'){
			b *= a;
			a = 0;
		}
	}
	printf("%d\n", a * b + c);
	return 0;
}
