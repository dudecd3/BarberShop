#define SBUFF 256

typedef struct servico
{
    char nome[SBUFF];
    float preco;
    struct servico *prox;
} serv_t;

typedef struct cadastro
{
    char cliente[SBUFF];
    char email[SBUFF];
    char telefone[SBUFF];
    serv_t *head;
    struct cadastro *prox;
} cad_t;
