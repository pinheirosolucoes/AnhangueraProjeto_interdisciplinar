#include <stdio.h>


struct Fila
{
    int primeiro;
    int ultimo;
    int nItem;
    unsigned capacidade;
    int* dados;
};

struct Fila criaFila(struct Fila *fila, unsigned capacidade)
{
    fila->capacidade = capacidade;
    fila->primeiro = 0;
    fila->ultimo = -1;
    fila->nItem = 0;
    fila->dados = (int*)malloc(fila->capacidade * sizeof(int));
}

int cheio(struct Fila* fila)
{
    return (fila->nItem == fila->capacidade);
}

int vazio(struct Fila* fila)
{
    return (fila->nItem == 0);
}

void inserir(struct Fila* fila, int valor)
{
    if(fila->ultimo == fila->capacidade-1)
		fila->ultimo = -1;

	fila->ultimo++;
	fila->dados[fila->ultimo] = valor;
	fila->nItem++;
}

int retirar(struct Fila* fila)
{
    int temp = fila->dados[fila->primeiro++];

	if(fila->primeiro == fila->capacidade)
		fila->primeiro = 0;

	fila->nItem--;
	return temp;
}

int imprimirFila(struct Fila* fila)
{
    int cont, i;
	for (cont=0, i= fila->primeiro; cont < fila->nItem; cont++)
	{
		printf("%i\t",fila->dados[i++]);
		if (i == fila->capacidade)
			i=0;

	}
	printf("\n");
	printf("Total de Casos => %i\n", fila->nItem);
}

int main()
{
    int cap;
    cap=20;
    printf("ZER@ DENGUE\n");


    struct Fila fila = criaFila(&fila, cap);



    int opcao,valor;
    while( 1 )
    {

		printf("\n1 - Inserir CASO\n2 - Remover CASO\n3 - Mostrar CASOS\n0 - Sair\n\nOpcao?: ");
		scanf("%d", &opcao);

		switch(opcao){

			case 0: exit(0);

			case 1:
				if (cheio(&fila)){

					printf("\nFila Cheia!!!\n\n");

				}
				else {

					printf("\nValor do elemento a ser inserido? ");
					scanf("%i", &valor);
					inserir(&fila,valor);

				}

				break;

			case 2:
				if (vazio(&fila)){

					printf("\nFila vazia!!!\n\n");

				}
				else {

					valor = retirar(&fila);
					printf("\n%i removido com sucesso\n\n", valor) ;

				}
				break;

				case 3:
					if (vazio(&fila)){

						printf("\nFila vazia!!!\n\n");

					}
					else {

						printf("\nConteudo da fila => ");
						imprimirFila(&fila);

					}
					break;

				default:
					printf("\nOpcao Invalida\n\n");

		}
	}

}
