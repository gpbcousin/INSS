//      trie.c
//  Guilherme Porto Britto Cousin 10203298  


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trie.h"







/* Função init inicializa o nodo */
struct trie *init(){
	struct trie *t;
	int i;
	if (!(t = malloc(sizeof(struct trie)))){
		exit (1);
	}
	t->pai=NULL;
	for(i=0;i<27;i++){
		t->filho[i]=NULL;
		}

	return t;
	
}

/* insert faz a inserção da string */

char insert(char *str, struct trie *ptr){
	struct trie *t; //cria um nodo para nao manipular a raiz
	int tam;
	int i;
	int local;
	tam=strlen(str);
	t=ptr;
	for(i=0;i<tam;i++){
		local=str[i]-'a';
		if(t->filho[local]){
			//printf("\n %p",t);
			t=t->filho[local];
			
		}else{
			t->filho[local]=init();
		//	printf("\n %p",t);
			t=t->filho[local];
		}
		
	}
	if(!(t->filho[26])){
		t->filho[26]=init();
	}
	
	
	
	return 'v';
}

char busca(char *str, struct trie *ptr){
	struct trie *t;
	int tam;
	int i;
	int local;
	tam=strlen(str);
	t=ptr;
	for(i=0;i<tam;i++){
		local=str[i]-'a';
		t=t->filho[local];
		if(!t){
			return 'f';
		}
		
		
	}
	if(!t->filho[26]){
		return 'f';
	}
		
	return 'v';
}
char delet(char *str, struct trie *ptr){
	struct trie *t;
	int tam;
	int i;
	int local;
	tam=strlen(str);
	t=ptr;
	for(i=0;i<tam;i++){
		local=str[i]-'a';
		t=t->filho[local];
		if(!t){
			return 'f';
		}
		
		
	}
	if(!t->filho[26]){
		return 'f';
	}
	t->filho[26]=NULL;
	
	return 'v';
}

