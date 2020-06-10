# AnhangueraProjeto_interdisciplinar

### pontuação do grupo: Olá aluno, Seu portfólio atende boa parte dos requisitos solicitados. Segue abaixo alguns itens que podem ser melhorados caso deseje aumentar a sua pontuação. INTRODUÇÃO, CONCLUSÃO, REFERÊNCIAS E NORMAS DA ABNT : Faltou detalhar o que trabalho vai abordar e o propósito da pesquisa na introdução e incluir as referências. . Nesta tarefa você conquistou 90 pontos de um total de 150 . TAREFA 1 – LÓGICA COMPUTACIONAL: Atende os requisitos solicitados. Nesta tarefa você conquistou 670 pontos de um total de 670 . TAREFA 2 – ANÁLISE E MODELAGEM DE SISTEMAS : Faltou incluir alguns Requisitos funcionais e não-funcionais e casos de uso. Ex: Cadastrar usuário, logar sistema/app .... Nesta tarefa você conquistou 630 pontos de um total de 670 . TAREFA 3 - ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA: Neste tarefa você apresentou a estrutura de fila, porem faltou incluir no algoritmo o cadastro de áreas que possuem o foco do mosquito . Nesta tarefa você conquistou 620 pontos de um total de 670 . TAREFA 4 - MODELAGEM BANCO DE DADOS: Atende os requisitos solicitados. Nesta tarefa você conquistou 670 pontos de um total de 670. TAREFA 5 - ARQUITETURA E ORGANIZAÇÃO DE COMPUTADORES: Atende os requisitos solicitados. Nesta tarefa você conquistou 670 pontos de um total de 670 . Tutora EAD - Joice Lima

## participantes do projeto
### Nome: Eduardo Monteiro Moura 
### Nome: Flaviane Rodrigues de Lima 
### Nome: Paulo Cézar Bisarria dos Santos 
### Nome: Rodrigo Luiz da Silva Pinheiro

#### 1) Lógica Computacional
#### Pensando em nossa situação geradora de aprendizagem, vamos além. O sistema já foi concluído,
#### está em uso e o Ministério da Saúde fará uma pesquisa sobre a funcionalidade do sistema
#### Zer@Dengue. E o resultado foi esse:
#### · 3200 pessoas gostaram da função “Cadastro.”
#### · 2700 pessoas gostaram mais da função “Denúncia”.
#### · 1000 pessoas afirmaram que gostaram das duas funções.
#### · 300 pessoa não gostaram de nenhuma das duas funções. 


#### Agora com a imagenss fica mais facil de resolver as questoes

![imagens opçoes](https://github.com/pinheirosolucoes/AnhangueraProjeto_interdisciplinar/blob/master/LogicaCondicional.png)

#### a) A partir dos dados oferecidos, podemos dizer que participaram dessa entrevista;
#### Resposta: Cadastro(2200) + Denúncia(1700) + as 2 Opções(1000) + Nenhuma Opção(300)
## Total = 5200 participantes

#### b) Com base nos dados do problema, podemos dizer que o número de usuários que preferem apenas a função “Cadastro” é: 
## Resposta: 2200 Somente cadastro

#### 2) Análise e Modelagem de Sistemas
#### Baseado no cenário proposto, elabore a modelagem inicial da atividade de Análise de Sistemas em ferramentas CASE de modelagem, 
#### abrangendo a Modelagem de Processos de Negócio e a Engenharia de Requisitos do software. Considere que a solução deve abranger as 
#### funcionalidades para realização do cadastro da pessoa física que faz a denúncia, cadastro da localização (estado,cidade e bairro), 
#### cadastro da denúncia e consulta de acompanhamento do status da denúncia, no mínimo. Seja criativo e complemente a sua solução com 
#### funcionalidades inovadoras!
#### A modelagem inicial da atividade de Análise de Sistemas deve contemplar a seguinte especificação
#### referentes a:

#### 1. Modelagem de Processos de Negócio (Business Process Modeling):
#### a) O Modelo de Processos de Negócio do tipo fluxo de trabalho;

#### a resposta é o fluxograma  abaixo
![imagens opçoes](https://github.com/pinheirosolucoes/AnhangueraProjeto_interdisciplinar/blob/master/USECASE.png) 

#### b) A Documentação de todos os processos de negócio (primários, suporte e gerenciamento), descrevendo a Política de Negócio e o #### Procedimento Operacional Padrão (POP).
#### Política de Negócio
#### O usuário irá denunciar e anexa fotos sobre a denúncia, o aplicativo irá registrar e anexar os dados informados e encaminhara para #### prefeitura, que irá avaliar a denúncia e alterar o status do caso.

#### Procedimento Operacional Padrão (POP)
#### Primeiro acesso
#### 1 Baixar Aplicativo;

#### 2 Se Cadastra:
#### •	nome;
#### •	e-mail;
#### •	senha;
#### observação: após o cadastro você pode utilizar seu e-mail e senha para fazer login.
#### 3 Cadastrar novo caso ou visualizar caso:
#### Cadastrar novo caso
#### •	colocar local;
#### •	selecionar foto.
#### Visualizar caso
#### •	clica na denúncia.
#### 4 Prefeitura:
#### •	visualizar caso
#### •	alterar o status

#### 2. Engenharia de Requisitos:
#### c) Documentação (listagem, descrição e especificação) dos requisitos funcionais e não-funcionais.

#### REQUISITOS FUNCIONAIS
#### [RF001]
#### Cadastro_Usuário
#### [RF002]
#### Cadastro e editar denúncias
#### [RF003]
#### Visualizar as denúncias

#### REQUISITOS NÃO FUNCIONAIS
#### [RNF001]
#### Gerar data automático
#### [RNF002]
#### Visualizar os Status
#### [RNF003]
#### Excluir Denúncias
#### [RNF004]
#### Excluir Usuário

#### d) Diagrama de Use Cases, conforme a Unified Modeling Language (UML), correspondente aos requisitos funcionais.
![imagens opçoes](https://github.com/pinheirosolucoes/AnhangueraProjeto_interdisciplinar/blob/master/UseCaseZeraDengue.jpg)

#### Algoritmos e Programação Estruturada
####  Você faz parte da equipe de desenvolvimento do sistema Zer@Dengue e ficou encarregado de desenvolver uma estrutura de dados para  o controle de solicitações do usuário. Uma das funcionalidades do Zer@Dengue é o cadastro de áreas que possuem o foco do mosquito,  para isso, precisa-se de um método que coloque todas as solicitações do usuário em uma ordem de atendimento. A estrutura de dados  escolhidas para implementar o controle de solicitações foi a fila. Esta estrutura segue o conceito de FIFO (first in, first out),  portanto os primeiros elementos a entrarem são os primeiros a saírem da estrutura. Para o sistema do Zer@Dengue é necessário fazer  a implementação da Fila, sendo que a entrada de dados será o número da solicitação. Cada usuário pode realizar no máximo 20  solicitações simultâneas. Além destas implementações, será necessário desenvolver os métodos de criar fila, inserir item, remover  item, retornar fila vazia, tamanho da fila e a sequência armazenada. Todos esses métodos devem ser implementados em funções.  Linguagens sugeridas C / C++.

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
					printf("\n%i removido com sucesso\n\n", valor);
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

#### Modelagem Banco de Dados
#### O sistema Zer@Dengue precisa armazenar várias informações importantes e relevantes ao processo de controle da dengue. Os usuários  do sistema precisarão de um cadastro, sendo necessário armazenar suas informações pessoais, bem como de login no ambiente. Além  disso, como parte da principal funcionalidade do sistema, cada usuário poderá indicar locais de possíveis focos de dengue,  enviando fotos, localização etc. Sendo assim, precisamos de um banco de dados para guardar todos estes dados com segurança e  eficiência. Sua tarefa então é fazer um levantamento de requisitos inicial dos tipos de informação que serão armazenadas no banco  e criar a partir disto um modelo entidade-relacionamento (MER) descrevendo como estas informações estarão relacionadas dentro do  banco. Inclua no MER as entidades, os relacionamentos (com suas respectivas cardinalidades) e atributos.

![imagens opçoes](https://github.com/pinheirosolucoes/AnhangueraProjeto_interdisciplinar/blob/master/ZeraDengueBanco.png)

Arquitetura e Organização de Computadores
Faça uma pesquisa de computadores disponíveis no mercado e indique a configuração para os possíveis equipamentos que farão parte da Empresa, levando em conta os itens citados: 1. Tipo de processador, sua velocidade e quantidade de núcleos. 2. Capacidade de memória RAM. 3. Tamanho em bytes do disco rígido. 4. Se acompanha teclado e mouse. 5. O tipo e o tamanho de monitor. 6. Se acompanha algum tipo de acessório de som, jogo ou de placa gráfica. 7. O preço encontrado para esse computador.
PROCESSADOR: RYZEN 5 3400G 
QUANTIDADE DE NUCLEOS: 4 
QUANTIDADE DE THREADS: 8
CLOCK BÁSICO: 3.7 GHz
CLOCK TURBO: ATÉ 4.2 GHz 
GPU: INTEGRADA 
PLACA MÃE: ASROCK A320M-HD AM4 
MEMORIA RAM: CORSAIR VENGEANCE LPX 2X8GB DDR4 2666MHZ 
FREQUENCIA: 2666MHz 
QUANTIDADE: 2 
CAPACIDADE DE CADA: 8GB 
CAPACIDADE TOTAL: 16GB 
HD: SSD WD GREEN 250GB 2.5 SATA 3 
CAPACIDADE DE ARMAZENAMENTO: 250GB 
FONTE: FONTE CORSAIR CX SERIES CX450 
GABINETE: FORTREK FORTREK SC-501BK 
MOUSE E TECLADO: KIT DECLADO E MOUSE MULTILASER TC240 
MONITOR: ACER 19.5” LED WIDESCREEEN HDMI TAMANHO: 19 POLAGADAS
SOM: CAIXA DE SOM MULTILASER 2.0 TOTAL________________________________________________R$2.833,25
PESQUISA REALIZADA EM: https://www.pichau.com.br/

O Processador Ryzen 5 3400G tem uma boa quantidade de núcleos e threads com boas frequências de clock, facilitando e agilizando na hora de executar os programas. Acompanhado com uma APU integrada Radeon Rx Vega 11 da própria da AMD. Assim com esse modelo de processador e já com o vídeo integrado o consumo de energia é menor e não necessitando de uma placa de vídeo dedicada, mas usando uma parte da memória Ram. Placa mãe Asrock A320M-HD suportando CPU de até 65w da AMD com Socket AM4, podendo ser colocado até 32gb de memória Ram DDR4 com frequência até 3200Mhz em Dual Channel. Memória Ram com 2 pentes de 8gigabytes totalizando 16GB, facilitando o Windows, programas e deixando com um de folga para memória dedicada a APU do processador. Os 2 pentes trabalhando simultaneamente a placa mãe pode usar a tecnologia Dual Channel, assim deixando o Windows e programas mais rápidos. O armazenamento de dados é uma SSD de 250GB, ele é mais rápido para iniciar o Windows, em leituras e gravações de dados em comparação a um HD tradicional.


Conclusão
Nesse trabalho abordamos o assunto sobre a utilização do aplicativo Zer@Dengue e com o apoio de prefeitura, tivemos melhorias em várias regiões e cumprindo todos os objetivos que foram propostos, detectar quais são os pontos mais afetos e saber os locais de foco da dengue.
