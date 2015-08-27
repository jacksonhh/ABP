#ifndef _funcoes_abp.h
#define TRUE 1
#define FALSE 0

typedef struct _nodo{
	int key;
	int fat_b;
	struct _nodo esq;
	struct _nodo dir;
}NODO;


// Função para criação de árvore

NODO* criaArvore(); // retorna um nodo NULL, a raiz da arvore

// Função para criação de nodo

NODO* criaNodo();


// 1. Função para inserção de nodos em uma ABP que armazene números inteiros.

NODO* inserir(int new, NODO* root);


/* 2. Função que recebe como parâmetro a árvore gerada no exercício 1 
 * e um valor e procura o valor em um nó da árvore e retorna o fator
 * do nó.
 */
 
int fator(NODO* root, int key);
 
/* 3. Função que recebe como parâmetro a árvore gerada no exercício 1
 * e retorna uma informação dizendo se a árvore é ou não AVL.
 */
 
int eh_AVL(NODO* root);

/* 4. Função que recebe como parâmetro a árvore gerada no exercício 1
 * e retorna uma informação dizendo se a árvore está ou não
 * completamente balanceada.
 */
 
int estah_balanceada(NODO* root);





#endif
