# MAPA ALP 2

### Instru��es do MAPA:

Considere que voc� � um freelancer desenvolvedor de sistemas desktop. Para iniciar seu portf�lio, voc� decide testar uma ideia de sistema para bibliotecas. Assim, voc� resolve que criar� um programa como Prova de Conceito para validar suas ideias e tamb�m para poder mostrar para seus poss�veis clientes. Dessa forma, seu programa, em vers�o beta (vers�o de testes), dever� permitir armazenar o cadastro de, no m�ximo, 5 (cinco) livros por vez (por execu��o do programa).
 
Para cada livro, a aplica��o dever� armazenar as seguintes informa��es:
* Um c�digo �nico, gerado automaticamente pelo sistema;
* O nome dos autores da obra;
* O nome da obra;
* O nome da editora.
 
O programa dever� apresentar um menu de op��es ao usu�rio:
 
**1 � Inserir um novo cadastro:**  ao selecionar essa op��o, o usu�rio dever� ser capaz de informar todos os dados de um livro. A saber: seu nome, os autores, e o nome da editora; o c�digo do cadastro n�o deve ser informado pelo usu�rio pois o programa deve gerar automaticamente. Caso o programa j� tenha armazenado o n�mero m�ximo de livros (cinco), dever� ser exibida uma mensagem de erro: �Sistema de cadastro lotado. N�o � poss�vel armazenar mais informa��es!�. O c�digo de um cadastro deve ser preenchido automaticamente pelo sistema e o usu�rio n�o deve ter a op��o de alterar esse c�digo. � importante salientar que para cada cadastro, deve-se ter um c�digo distinto, ou seja, n�o deve ser poss�vel que existam dois cadastros com o mesmo c�digo, ao mesmo tempo;
 
**2 � Mostrar todos os cadastros:** ao selecionar essa op��o, o programa dever� imprimir, na tela, para cada livro, seu c�digo, seu nome, os autores e a editora. Essa op��o dever� mostrar na tela apenas os dados de livros que foram cadastrados. Caso seja impressa alguma outra informa��o sobressalente, ou caso faltem informa��es previamente cadastradas, ser� considerado um erro de programa��o. Caso nenhum cliente tenha sido cadastrado, antes de tentar executar essa op��o (2 - Mostrar todos os cadastros), o programa deve exibir a mensagem �Lista vazia!�;
 
**0 � Encerrar:** o programa deve ser encerrado se, e somente se, o usu�rio escolher essa op��o.

**Observa��es importantes:**
Sempre que o usu�rio desejar executar as op��o 1 ou 2 (exceto 0), o programa deve realizar o que � pedido no enunciado e, logo ap�s isso, o programa deve retornar ao menu, dando ao usu�rio a possibilidade de executar novamente alguma das op��es listadas no menu.
 
Caso o usu�rio escolha uma op��o que n�o conste no menu, o programa dever� exibir uma mensagem de erro como, por exemplo, �Erro: op��o inv�lida!�; retornando ao menu logo em seguida. Caso contr�rio, o programa n�o dever� imprimir essa mensagem de erro, ou seja, se o usu�rio tentar executar as op��es 0, 1 ou 2, o programa n�o entra em estado de erro.
 
**A sua atividade MAPA deve ser entregue em um arquivo de c�digo-fonte em linguagem C (extens�o .c ou .cpp).**
 
Algumas fun��es que ser�o �teis durante o desenvolvimento do programa:
* system(�pause�) � chamada de sistema que �pausa� o programa e o faz aguardar pelo usu�rio;
* system(�cls�) � chamada de sistema que limpa os caracteres que foram impressos na tela anteriormente;
* fflush(stdin) � limpar o buffer do teclado. Essa fun��o deve sempre ser utilizada ap�s ter utilizado alguma fun��o de entrada de dados como o scanf(), gets(), etc. Isso se d� pois em algumas situa��es o buffer do teclado mant�m �lixo de mem�ria�, prejudicando a pr�xima opera��o de entrada do programa.

