#ifndef _TRIE_H_
#define _TRIE_H_

struct trie{
	struct trie *filho[27];
	struct trie *pai;
};

char insert(char *str, struct trie *ptr);
char busca(char *str, struct trie *ptr);
char delet(char *str, struct trie *ptr);
struct trie *testa(int tam,struct trie *ptr);
struct trie *init();



#endif
