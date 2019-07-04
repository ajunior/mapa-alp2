/* mapa.c
 *
 * Unicesumar - Análise e Desenvolvimento de Sistema
 * Aluno: Adjamilton M. A. Junior (jr@ieee.org)
 * RA: 1875652-5
 * Repositório: https://github.com/ajunior/mapa-alp2
 *
 * Dev-C++ 5.11 (TDM-GCC 4.9.2 64-bit)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// CONSTANTES
#define QTDE_MAX_LIVROS    5
#define TRUE               1
#define FALSE              0
#define OPC_EXIT           '0'
#define OPC_CAD_NOVO_LIVRO '1'
#define OPC_LISTAR_LIVROS  '2'

// ESTRUTURAS
typedef struct livro {
    int  codigo;
    char titulo[100];
    char editora[100];
    char autoria[100][100];
    int  qtde_autores;
} Livro;

// FUNÇÕES
void quit() {
    exit(EXIT_SUCCESS);
}

int main(int argc, char ** argv) {
    
    /* Configura a acentuação das palavras */
    setlocale(LC_ALL, "Portuguese");
	
    char opcao, opc;
    int qtde_livros = 0, qtde_autores = 0; 
    int i = 0, j, k, m; 
    Livro livros[QTDE_MAX_LIVROS];
    
    /* Código do livro, único e sequencial */
    int livro_id = 1;
    
    do {
        system("cls");
		
        printf("SISTEMA DE BIBLIOTECA\n");
        printf("=====================\n\n");
        printf("MENU DE OPÇÕES:\n");
        printf("   [1] Inserir um novo cadastro\n");
        printf("   [2] Mostrar todos os cadastros\n");
        printf("   [0] Encerrar\n\n");
        printf("Escolha uma opção: ");
		
        fflush(stdin);
        scanf("%c", &opcao);
		
        switch(opcao) {
            // ADCIONAR NOVO LIVRO
            case OPC_CAD_NOVO_LIVRO:
                if (qtde_livros == QTDE_MAX_LIVROS) 
                    printf("\nSistema de cadastro lotado. Não é possível armazenar mais informações!\n\n");
                else {
                    system("cls");
                    
                    printf("CADASTRAR LIVRO\n");
                    printf("===============\n\n");
                    
                    // Código do livro (Não é inserido pelo usuário)
                    livros[i].codigo = livro_id;
                    
                    // Título
                    printf("Digite o título do livro: ");
                    fflush(stdin); 
                    gets(livros[i].titulo);
                    
                    // Editora
                    printf("Digite o nome da editora: ");
                    fflush(stdin);
                    gets(livros[i].editora);
                     
                    // Autor(es)
                    j = 0;
                    
                    do {
                        // adicionar autor(es)
                        printf("Digite o nome do autor(a): ");
                        fflush(stdin);
                        gets(livros[i].autoria[j]);
                        
                        j++;
                        livros[i].qtde_autores = j;
                        
                        printf("Deseja cadastrar outro autor? (S ou N): ");
                        fflush(stdin);
                        scanf("%c", &opc);
                        
                        if (opc != 'n' && opc != 'N' && opc != 's' && opc != 'S')
                           printf("\nErro: opção inválida. Digite S ou N.\n\n");
                        
                    } while (opc != 'n');
                    
                    i++;
                    livro_id++;
                    qtde_livros++;
                    
                    printf("\nLivro cadastrado.\n\n");
                }
					
                system("pause");
                break;
				
            // LISTAR LIVROS
            case OPC_LISTAR_LIVROS:
                if (qtde_livros == 0)
                    printf("\nLista vazia!\n\n");
                else {
                    system("cls");
                    printf("LISTAGEM DOS LIVROS\n");
                    printf("===================\n\n");
                	
                    for(k = 0; k < qtde_livros; k++) {
                        printf("Código: %d\n", livros[k].codigo);
                        printf("Título: %s\n", &livros[k].titulo);
                        printf("Editora: %s\n", &livros[k].editora);
                        
                        printf("Autor(es):\n");
                        
                        qtde_autores = livros[k].qtde_autores;
                        
                        for(m = 0; m < qtde_autores; m++) {
                            printf(" - %s\n", &livros[k].autoria[m]);
                        }
                        
                        printf("\n");
                    }
                }
				
                system("pause");
                break;
				
            // SAIR
            case OPC_EXIT:
                printf("\nSistema finalizado!\n");
                quit();
				
            // OPÇÕES INVÁLIDAS
            default:
                printf("\nErro: opção inválida!\n\n");
                system("pause");
                break;
        }	
   } while(opcao != OPC_EXIT);
}
/* EOF */
