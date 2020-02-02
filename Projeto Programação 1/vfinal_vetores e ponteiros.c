#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
//defines
int tam1 = 20;
int tam2 = 50;

//structs
typedef struct Tcad_fornecedor
{
    char nome[50];
    char telefone[10];
    char endereco[50];
    char cnpj[15];
    int atividade;
} Tcad_fornecedor;

typedef struct Tcad_medicamento
{
    char nome[50];
    float  valor;
    Tcad_fornecedor dados;
    int codigo;
    int situacao;
    int quantidade_estoque;
    char resumo[200];//descrição do remedio
    char key[10];//chave de funcionamento do remedio,previamente informada.
} Tcad_medicamento;

typedef struct Tcad_cliente
{
    char nome[20];
    char sobrenome[50];
    char endereco[50];
    char telefone[11];
    int  idade;
    char cpf[12];
    int situacao;//ativo=1 | inativo=0
} Tcad_cliente;


//procedimentos
void cadastrar_remedio(Tcad_medicamento *produto,Tcad_medicamento vector[],int ct_med)
{
    int ct,cod,bloq=1;

    printf("Informe o nome:\n");
    gets(produto->nome);
    printf("Informe o valor R$:\n");
    scanf("%f",&produto->valor);
    printf("Informe o codigo:\n");
    scanf("%i",&cod);
    do{
        for(ct;ct<ct_med;ct++){
            if(vector[ct].codigo==cod){
                printf("Você informou um codigo já utilizado por favor informe outro!\n");
                scanf("%i",&cod);
                bloq=0;
                break;
            }else{
                bloq=1;
            }
        }
    }while(!bloq);
    produto->codigo=cod;
    printf("Informe a quantidade em estoque \n");
    scanf("%i",&produto->quantidade_estoque);
    printf("Informe um resumo sobre o produto:\n");
    getchar();
    gets(produto->resumo);
    printf("Informe a primeira palavra chave:\n");
    getchar();
    gets(produto->key);
    //dados do fornecedor
    printf("Informe a empresa fornecedora: \n");
    getchar();
    gets((*produto).dados.nome);
    printf("Informe ao telefone da  empresa fornecedora: \n");
    getchar();
    gets(produto->dados.telefone);
    printf("Informe o endereço da  empresa fornecedora: \n");
    getchar();
    gets(produto->dados.endereco);
    printf("Informe o CNPJ da  empresa fornecedora: \n");
    getchar();
    gets(produto->dados.cnpj);
    printf("A empresa se encontra ativa[1] ou não fornece[0]:\n");
    scanf("%i",&produto->dados.atividade);
    //fim dos dados do fonecedos
    printf("Situação do Medicamento: \n Disponivel pra venda[1]\n Indisponível[0] \n");
    scanf("%i",&produto->situacao);
    getchar();
    printf("Medicamento cadastrado!");
    printf("Retornando ao menu principal...\n");
    //Sleep(2500);

}

void cadastra_cliente(Tcad_cliente *usuario)
{
    printf("Informe o nome:\n");
    gets(usuario->nome);
    printf("Informe o seu sobrenome\n");
    gets(usuario->sobrenome);
    printf("Informe o endereço:\n");
    getchar();
    gets(usuario->endereco);
    printf("Informe o CPF do cliente\n");
    gets(usuario->cpf);
    printf("Informe o telefone:\n");
    getchar();
    gets(usuario->telefone);
    printf("Informe a idade:\n");
    scanf("%i",&usuario->idade);
    usuario->situacao=1;
    printf("Retornando ao menu principal...\n");
    //Sleep(2500);
}
void realizar_compra(Tcad_medicamento *estoque_medicamento[tam2],int ct_med){

    int cod=0,qt_prod=0,bus,max,op=-1,resp=0,achou=0;
    float vl_final=0,vl_parcial=0,ent=0,troco=0;

    do{
        printf("Informe o codigo do produto:\n");
        scanf("%i",&cod);
        printf("Informe na quantidade:\n");
        scanf("%i",&qt_prod);
        for (bus = 0; bus < ct_med; bus++)
        {
            if ((cod==estoque_medicamento[bus]->codigo)&&estoque_medicamento[bus]->situacao==1)
            {
                achou=1;
                if (qt_prod>=estoque_medicamento[bus]->codigo)
                {
                    vl_parcial=estoque_medicamento[bus]->valor*qt_prod;
                    estoque_medicamento[bus]->quantidade_estoque=estoque_medicamento[bus]->quantidade_estoque-qt_prod;
                    break;
                }
                else{

                    printf("Não podemos atender a demanda do cliente o maximo que podemos ofertar é :  %i Unidades \n",estoque_medicamento[bus]->quantidade_estoque);
                    printf("Realizar a venda ? [1]--Sim [0]--Não\n");
                    scanf("%i",&op);
                    if (op==1)
                    {
                        vl_parcial=estoque_medicamento[bus]->quantidade_estoque*estoque_medicamento[bus]->valor;
                        estoque_medicamento[bus]=0;
                        printf("$$$$$$$$$$$$$$$$$$$[É importante checar o estoque ao terminar essa venda !]$$$$$$$$$$$$$$$$$$$$\n");
                    }
                    else{
                        vl_parcial=0;
                    }
                    break;
                }
            }
        }
        if(achou<1){
            printf("\nProduto não encontrado!\n");
        }
        printf("O cliente deseja comprar outro produto ? [1]--Sim [0]--Não\n");
        scanf("%i",&resp);
        if (resp==0)
        {
            vl_final=vl_parcial;
        }else{
            vl_final=vl_parcial+vl_final;
            vl_parcial=0;
            achou=0;
        }
    }while(resp!=0);
        if(vl_final!=0){
        printf("Total da Compra= R$ %.2f\n",vl_final);
        printf("Valor pago pelo cliente = \n");
        scanf("%f",&ent);
        troco=ent-vl_final;
        printf("Troco do cliente=  %.2f\n",troco);
        printf("Venda realizada com sucesso!!!");
    }
    printf("Retornando ao menu principal...\n");
    //Sleep(2500);
}
void busca_keys_remedio(Tcad_medicamento busca[tam2], int *qt){


    int ct, remedios_encontrados =0;
    char key[20];
    printf("\n");
    printf("===========================================\n");
    printf("Digite o sintoma que esta sentindo\n");
    getchar();
    gets(key);
    printf("===========================================\n");
    printf("\n");

        for (ct = 0; ct < *qt; ct++)
        {
            if(busca[ct].situacao == 0)
            {
               printf("O remedio encontrado, porem não esta disponivel para venda no momento\n");
               system("pause");
            }
            if( strcmp(strlwr(key), strlwr(busca[ct].key)) == 0 )
            {
                printf("######################## REMEDIO ENCONTRADO ########################\n");
                printf("Nome: %s\n",busca[ct].nome);
                printf("Valor: R$%.2f\n",busca[ct].valor);
                printf("Codigo: %d\n",busca[ct].codigo);
                printf("Quantidade em estoque: %d\n",busca[ct].quantidade_estoque);
                printf("Resumo: %s\n",busca[ct].resumo);
                printf("####################################################################\n");
                remedios_encontrados++;
            }

        }
         if(remedios_encontrados > 0)
            {
                printf("\n");
                printf("Mais nenhum remédio encontrado\n");
                printf("\n");

            }else
            {
                printf("\n");
                printf("Nenhum remédio encontrado com base \n");
                printf("\n");

            }
            system("pause");

}
void consultar_remedios(Tcad_medicamento re_cad[tam2], int *qt){
     int ct,remedios_encontrados=0;
    char nome[20];
    printf("\n");
    printf("===============================================\n");
    printf("Digite o nome do remedio que deseja consultar\n");
    gets(nome);
    printf("===============================================\n");
    printf("\n");

    for (ct = 0; ct < *qt; ct++)
        {
            if(re_cad[ct].situacao == 0)
            {
               printf("O remedio encontrado, porem não esta disponivel para venda no momento\n");
               system("pause");
            }
            if(strcmp(strlwr(nome),strlwr(re_cad[ct].nome)) == 0)
            {
                printf("######################## REMEDIO ENCONTRADO ########################\n");
                printf("Nome: %s\n",re_cad[ct].nome);
                printf("Valor: R$%.2f\n",re_cad[ct].valor);
                printf("Codigo: %d\n",re_cad[ct].codigo);
                printf("Quantidade em estoque: %d\n",re_cad[ct].quantidade_estoque);
                printf("Fornecedor: %s\n", re_cad[ct].dados.nome);
                printf("Telefone do Fornecedor: %s\n", re_cad[ct].dados.telefone);
                printf("Endereço do Fornecedor: %s\n", re_cad[ct].dados.endereco);
                printf("CNPJ do Fornecedor: %s\n", re_cad[ct].dados.cnpj);
                printf("Resumo do remedio: %s\n", re_cad[ct].resumo);
                printf("####################################################################\n");
                printf("\n");
                remedios_encontrados++;
                break;
            }
        }
        if(remedios_encontrados == 0)
        {
            printf("Nenhum remedio encontrado!!\n");
            printf("\n");

        }
        system("pause");
}
void estoque_baixo(Tcad_medicamento est_baixo[tam2], int *qt)
{
    int ct,remedios_encontrados=0;
    for(ct=0; ct<*qt; ct++)
    {
        if(est_baixo[ct].situacao == 0)
            {
               printf("O remedio encontrado, porem não esta disponivel para venda no momento\n");
               system("pause");
            }
        if(est_baixo[ct].quantidade_estoque <= 4)
        {
            printf("######################## REMEDIO COM ESTOQUE BAIXO ########################\n");
            printf("Nome: %s\n",est_baixo[ct].nome);
            printf("Valor: R$%.2f\n",est_baixo[ct].valor);
            printf("Codigo: %d\n",est_baixo[ct].codigo);
            printf("Quantidade em estoque: %d\n",est_baixo[ct].quantidade_estoque);
            printf("Resumo: %s\n", est_baixo[ct].resumo);
            printf("############################################################################\n");
            printf("\n");
            remedios_encontrados++;
            break;
        }
    }
    if(remedios_encontrados == 0)
        {
            printf("Nenhum remedio com estoque baixo!!\n");
            printf("\n");

        }
        system("pause");
}
void consultar_cliente(Tcad_cliente cli_cad[tam1], int *qt){
     int ct,clientes_encontrados=0;
    char cpf[20];
    printf("\n");
    printf("===============================================\n");
    printf("Digite o CPF que deseja consultar\n");
    gets(cpf);
    printf("===============================================\n");
    printf("\n");

    for (ct = 0; ct < *qt; ct++)
        {
            if(strcmp(cpf,cli_cad[ct].cpf) == 0)
            {
                printf("######################## CLIENTE ENCONTRADO ########################\n");
                printf("Nome: %s",cli_cad[ct].nome);
                printf(" %s\n",cli_cad[ct].sobrenome);
                printf("CPF: %s\n",cli_cad[ct].cpf);
                printf("Telefone: %s\n",cli_cad[ct].telefone);
                printf("####################################################################\n");
                printf("\n");
                clientes_encontrados++;
                //break;
            }
        }
        if(clientes_encontrados > 0)
        {
            printf("Mais nenhum cliente encontrado!!\n");
            printf("\n");

        }
        if(clientes_encontrados == 0)
        {
            printf("Nenhum cliente encontrado!!\n");
            printf("\n");

        }
        system("pause");
}
void ordena(Tcad_cliente *vetor, int max){
    int i,  j;
    for(i = 1;i < max;i++){
        Tcad_cliente chave = vetor[i];
        j = i-1;
        while(j >= 0 && strcmp(chave.nome, vetor[j].nome) < 0){
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = chave;
    }
}
void lista_clientes(Tcad_cliente *lista, int contador){

    int contadorcliente;
    int i, recebe;
    for(contadorcliente = 0; contadorcliente < contador; contadorcliente++){
       //printf("%d\n", contadorcliente);
        if(contadorcliente % 5 == 0 && contadorcliente != 0){
            printf("Digite 1 para exibir mais resultados.");
            scanf("%i", &recebe);
            if(!recebe)
                break;
        }
        //printf("%d\n", lista[contadorcliente].situacao);
        if(contadorcliente < contador && lista[contadorcliente].situacao){
            ordena(lista, contador);
            printf("Nome: %s %s\n", lista[contadorcliente].nome, lista[contadorcliente].sobrenome);
        }
    }
    system("pause");
}
void excluir_cliente(Tcad_cliente clientes[],int ct_cli){


    int i = 0;
    int ct,achou=0;
    char cpf[12];
    printf("Informe o CPF do cliente que deseja excluir:");
    gets(cpf);
    cpf[11] = '\0';
    for(ct=0;ct<ct_cli;ct++){
        if(!(strcmp(cpf,clientes[ct].cpf))){
            //clientes[ct].cpf =:= *(clientes+ct).cpf;
            achou=1;
            clientes[ct].situacao=0;
            printf("Cliente foi excluido com sucesso! \n");
            break;
        }
    }
    if(!achou){
        printf("CPF Não encontrado!");
    }
    system("pause");
}
void alterar_cliente(Tcad_cliente *clientes, int *ct_cli){
    int ct,achou=0,number;
    char cpf[12];
    printf("Informe o CPF do cliente que deseja editar: ");
    gets(cpf);
    cpf[11] = '\0';
    for(ct=0; ct < *ct_cli; ct++){
        if(!strcmp(cpf,clientes[ct].cpf)){
                achou = 0;
                printf("Informe o nome:\n");
                gets(clientes[ct].nome);
                printf("Informe o seu sobrenome\n");
                //getchar();
                gets(clientes[ct].sobrenome);
                printf("Informe o endereço:\n");
                getchar();
                gets(clientes->endereco);
                printf("Informe o CPF do cliente: \n");
                //getchar();
                gets(clientes->cpf);
                printf("Informe o telefone:\n");
                getchar();
                gets(clientes->telefone);
                printf("Informe a idade:\n");
                scanf("%i",&clientes->idade);

        }
    }
    if(achou==1){
        printf("Cliente Não encontrado!");
    }

}

void alterar_medicamento(Tcad_medicamento estoque_medicamentos[],Tcad_medicamento vector[], int ct_med){

    int ct,cod,bloq=1;
    char nome[50];
    printf("Informe do medicamento que deseja alterar: \n");
    gets(nome);
    for(ct=0;ct<ct_med;ct++){

        if((strcmp(strupr(estoque_medicamentos[ct].nome),strupr(nome))==0)){

                printf("Informe o nome:\n");
                gets(estoque_medicamentos->nome);
                printf("Informe o valor R$:\n");
                scanf("%f",&estoque_medicamentos->valor);
                printf("Informe o codigo:\n");
                scanf("%i",&cod);
                do{
                    for(ct;ct<ct_med;ct++){
                        if(vector[ct].codigo==cod){
                            printf("Você informou um codigo já utilizado por favor informe outro!\n");
                            scanf("%i",&cod);
                            bloq=0;
                            break;
                        }else{
                            bloq=1;
                            }
                    }
                }while(!bloq);
                estoque_medicamentos->codigo=cod;
                printf("Informe a quantidade em estoque \n");
                scanf("%i",&estoque_medicamentos->quantidade_estoque);
                printf("Informe um resumo sobre o produto:\n");
                getchar();
                gets(estoque_medicamentos->resumo);
                printf("Informe a palavra chave:\n");
                getchar();
                gets(estoque_medicamentos->key);
                //dados do fornecedor
                printf("Informe a empresa fornecedora: \n");
                getchar();
                gets((*estoque_medicamentos).dados.nome);
                printf("Informe ao telefone da  empresa fornecedora: \n");
                getchar();
                gets(estoque_medicamentos->dados.telefone);
                printf("Informe o endereço da  empresa fornecedora: \n");
                getchar();
                gets(estoque_medicamentos->dados.endereco);
                printf("Informe o CNPJ da  empresa fornecedora: \n");
                getchar();
                gets(estoque_medicamentos->dados.cnpj);
                printf("A empresa se encontra ativa[1] ou não fornece[0]:\n");
                scanf("%i",&estoque_medicamentos->dados.atividade);
                //fim dos dados do fonecedos
                printf("Situação do Medicamento: \n Disponivel pra venda[1]\n Indisponível[0] \n");
                scanf("%i",&estoque_medicamentos->situacao);
                break;

        }
    }
}

void excluir_medicamento(Tcad_medicamento estoque_medicamentos[tam2],int ct_med){

    int ct,achou=0;
    char nome[50];
    printf("Informe o nome do remedio que deseja excluir: \n");
    gets(nome);
    for(ct=0;ct<ct_med;ct++){

        if((strcmp(strupr(estoque_medicamentos[ct].nome),strupr(nome))==0)){
            achou=1;
            estoque_medicamentos[ct].situacao=0;
            printf("Medicamento foi excluido com sucesso!");
            break;
        }
    }
    if(achou==0){
        printf("Medicamento Não encontrado!");
    }
    system("pause");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Tcad_cliente clientes[tam1];
    Tcad_medicamento estoque_medicamentos[tam2];
    int op=0,ct_clientes=0,ct_medicamentos=0,pedido_unidades=0;
    int cod=0;
    char tag[10];
    //off-set

    //exec
    do
    {
    system("cls");
 printf("====================================================================================\n");
        printf("################################ MENU DE OPÇÕES ###################################\n");
        printf("====================================================================================\n");
        printf("\n");
        printf("\n");
        printf("Informe a opção desejada:\n");
        printf("[Medicamento]\n");
        printf("1--Adicionar Medicamento\n");
        printf("2--Editar Medicamento\n");
        printf("3--Excluir Medicamento\n");
        printf("4--Consultar Medicamentos\n");
        printf("5--Buscar por Palavra-chave\n");
        printf("6--Medicamentos com estoque baixo\n");
        printf("[Cliente]\n" );
        printf("7--Cadastrar Cliente\n");
        printf("8--Editar Cliente\n");
        printf("9--Excluir Cliente\n");
        printf("10--Listar Clientes\n");
        printf("11--Consultar Cliente\n");
        printf("[Finalizar]\n");
        printf("0--Finalizar Programa\n");
        printf("Opção desejada:");
        scanf("%i",&op);
        while(op<0||op>15){
            system("cls");
            printf("\n[Opção INVALIDA,porfavor informe uma opção valida!]\n");
            printf("\n");
            printf("====================================================================================\n");
            printf("################################ MENU DE OPÇÕES ###################################\n");
            printf("====================================================================================\n");
            printf("\n");
            printf("\n");
            printf("Informe a opção desejada:\n");
            printf("[Medicamento]\n");
            printf("1--Adicionar Medicamento\n");
            printf("2--Editar Medicamento\n");
            printf("3--Excluir Medicamento\n");
            printf("4--Consultar Medicamentos\n");
            printf("5--Buscar por Palavra-chave\n");
            printf("6--Medicamentos com estoque baixo\n");
            printf("[Cliente]\n" );
            printf("7--Cadastrar Cliente\n");
            printf("8--Editar Cliente\n");
            printf("9--Excluir Cliente\n");
            printf("10--Listar Clientes\n");
            printf("11--Consultar Cliente\n");
            printf("[Finalizar]\n");
            printf("0--Finalizar Programa\n");
            printf("Opção desejada:");
            scanf("%i",&op);
        }
        getchar();
        switch(op)
        {

        case
         1:
            cadastrar_remedio(&estoque_medicamentos[ct_medicamentos],estoque_medicamentos,ct_medicamentos);
                ct_medicamentos=ct_medicamentos+1;
            break;
        case 2:
            alterar_medicamento(estoque_medicamentos, estoque_medicamentos, ct_medicamentos);
            break;
        case 3:
           excluir_medicamento(estoque_medicamentos,  ct_medicamentos);
            break;
        case 4:
            consultar_remedios(estoque_medicamentos, &ct_medicamentos);
            break;
        case 5:
            busca_keys_remedio(estoque_medicamentos, ct_medicamentos);
            break;
        case 6:
            estoque_baixo(estoque_medicamentos, ct_medicamentos);
            break;
        case 7:
            cadastra_cliente(&clientes[ct_clientes]);
                ct_clientes=ct_clientes+1;
                break;
        case 8:
            alterar_cliente(clientes,&ct_clientes);
            break;
        case 9:
            excluir_cliente(clientes,ct_clientes);
            break;
        case 10:
            lista_clientes(clientes,ct_clientes);
            break;

        case 11:
            consultar_cliente(clientes, ct_clientes);
            break;


        }
    }
    while(op!=0);

return 0;
}
