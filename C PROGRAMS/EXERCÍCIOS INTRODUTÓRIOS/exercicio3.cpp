#include <stdio.h>

main()
{
	int num, dobro;
	
	printf("\n\n digite um numero: ");
	scanf("%d",&num); //PEDE o que vai ser digitado
	//em caso de letra, ele tenta coverter a primeira letra em decimal/int
	dobro = 2*num;
	// i ou d tanto faz
	printf("\n\n o dobro de %d = %d", num, dobro);
	
}

//scanf - para o programa, ativa teclado e volta pro programa
//instrução 'bloqueante'

//scanf(    ,    );
//scanf( "%d" ,&num);
//& - busca na memória a variavel
	//em caso de letra, ele tenta coverter a primeira letra em decimal/int
	
	// todos os programas são sequenciais
	
	//% - pega o resto da divisão
