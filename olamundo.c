#include <stdio.h>

int main(){

//Agora eu nomeio as variáveis com nomes, características e limitações//

    char cidade1[20], codigo1[2], estado1[2], resposta[15], cidade2[20], codigo2[2], estado2[2], satisfacao[15];
    int pessoas1, pessoas2, turismo1, turismo2;
    float espaço1, espaço2, pib1, pib2;

    //Aqui criaremos os códigos para fazer o computador perguntar (printf) e entender/guardar (scanf)//

    printf("Olá, seja bem vindo ao SuperTrunfo do João!\n\nDigite as informações da primeira carta!\nDiga o nome de uma cidade:\n");
    scanf("%s", &cidade1);

    printf("\nPerfeito!\nAgora, digite a sigla do estado onde essa cidade se localiza\n");
    scanf("%s", &estado1);

    printf("\nOk!\nAgora me diga quantos pontos turísticos há nessa cidade:\n");
    scanf("%d", &turismo1);

    printf("\nEm metros quadrados, qual a área dessa cidade?\n");
    scanf("%f", &espaço1);

    printf("\nAgora me diga qual o valor do PIB (Produto Interno Bruto) dessa primeira cidade\n");
    scanf("%f", &pib1);

    printf("\nEstamos quase terminando.\nQual a população dessa cidade?\n");
    scanf("%d", &pessoas1);

    printf("\nPra finalizar, informe o código que essa carta terá usando apenas 1 letra e 1 números (Ex.: A1)\n");
    scanf("%s", &codigo1);

//criarei aqui uma pequena interação com o usuário apenas para melhor entendimento e melhorar a dinâmica//

    printf("\n\nPronto pra fazer mais uma carta?");
    scanf("%s", &resposta);

//novamento perguntando e atribuindo valores/respostas às variáveis//

    printf("\n\nDigite as informações da segunda carta!\nDiga o nome de uma cidade:\n");
    scanf("%s", &cidade2);

    printf("\nPerfeito!\nAgora, digite a sigla do estado onde essa segunda cidade se localiza\n");
    scanf("%s", &estado2);

    printf("\nOk!\nAgora me diga quantos pontos turísticos há nessa cidade:\n");
    scanf("%d", &turismo2);

    printf("\nEm metros quadrados, qual a área dessa outra cidade?\n");
    scanf("%f", &espaço2);

    printf("\nAgora me diga qual o valor do PIB (Produto Interno Bruto) dessa segunda cidade\n");
    scanf("%f", &pib2);

    printf("\nEstamos quase terminando denovo.\nQual a população dessa cidade?\n");
    scanf("%d", &pessoas2);

    printf("Pra finalizar, informe o código que essa outra carta terá usando apenas 1 letra e 1 números (Ex.: A01)\n");
    scanf("%s", &codigo2);

    //Nessa parte nos será informado a ficha dessas cartas que criamos, com todas as informações guardadas no sistema//

    printf("Pronto, essa é a sua primeira carta:\n\nCodigo da carta:%s\nEstado:%s\nCidade:%s\nPopulação:%d\nPontos Turísticos:%d\nPIB:%f\nÁrea:%f\n\n", &codigo1,  &estado1, &cidade1, pessoas1, turismo1, pib1, espaço1);
    printf("E essa é a sua segunda carta:\n\nCodigo da carta:%s\nCidade:%s\nEstado:%s\nPopulação:%d\nPontos Turísticos:%d\nPIB:%f\nÁrea:%f\n\n", &codigo2, &cidade2, &estado2, pessoas2, turismo2, pib2, espaço2);

//A partir daqui fiz uma breve despedida usando na prática o que aprendi até então com a matéria, simulando uma "conversa"//

    printf("\n\nPor hoje é isso, pessoal!\n Descreve com uma palavra o que você achou do programa:");
    scanf("%s", &satisfacao);
    printf("E se me permite dizer, essa é a minha avaliação de como foi fazer esse programa funcionar com você:%s!!!\nMuito obrigado, até a próxima!:D ", &satisfacao);
    
// e o "return 0" sendo como um "câmbio desligo" pro computador entender que deve ser encerrado o porgrama//
return 0; }

/*Obs.: No meu programa pelo github, por algum motivo o primeiro estavo quando é impresso, ele imprime
junto o estado da segunda carta. Eu ainda não consegui entender por que isso funciona ou se simplesmente
é um erro no meu navegador, gostaria de saber.

Estou fazendo essa observação descrita usando várias linhas para dar um exmplo de como usa-la, inclusive
pulando mais de uma linha/string usando "Asterisco + Barra".*/

//enquanto observações assim devem ser finalizadas na mesma linha/string //