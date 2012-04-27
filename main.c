#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trie.c"

#define MAX 10000

int main(){
	char pal[MAX];
	char in;
	struct trie *ptr;
	ptr=init();
	while(scanf("%c %s",&in,pal)==2){
		if(in=='i'){
			printf("%c\n",insert(pal,ptr));
			getchar();
		}
		if(in=='b'){
			printf("%c\n",busca(pal,ptr));
			getchar();
		}
		if(in=='r'){
			printf("%c\n",delet(pal,ptr));
			getchar();
		}
		if(in=='@'){
			return 0;
		}
	}
	
	return 0;
}
