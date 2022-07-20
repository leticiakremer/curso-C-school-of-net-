#include <stdio.h>
int main()
{
    int counter; 
    //counter é contador em ing
    //int controle = 0;

    printf("Insert counter times: ");
    //eu peço para o usuário informar quantas vezes quer que tenha essa interação e depois faço minha leitura armazenado na minha variavel.
    scanf("%d", &counter);

    
	for (int controle = 0; controle < counter; controle++) {
		printf("Value : %d", controle);
	}

    /*do {
        printf("Value %d : " , controle);
        controle++;
    } while (controle < counter );*/
    

    /*while (controle < counter){
        printf("Value: %d" , controle);
        controle++;
    }*/

    return 0;
}