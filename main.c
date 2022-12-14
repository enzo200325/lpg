#include<stdio.h>

#include<stdlib.h>

struct Data{
  int dia,mes,ano;
};

struct Artista{
  char nome[30];
  char nacionalidade[30];
};

struct Musica{
  char nome[30];
  int duracao;
  char estilo[30];
  struct Artista artista;
  struct Data data_cadastro;
};

int main(){
  struct Artista* artistas = NULL;
  struct Musica* musicas = NULL;
  int n = 0;
  int op = -1;
  carrega_arquivo(n,musicas,"musicas.txt");
  while(op != 6){
    scanf("%d",&op);
    switch(op){
      case 1:
        inserir(&n,musicas,artistas);
        break;
      case 2:
        remover();
        break;
      case 3:
        exibir();
        break;
      case 4:
        consultar();
        break;
      case 5:
        ordenar();
        break;
      default:
        printf("opcao invalida\n");
        break;
    }
  }
  return 0;
}

void carrega_arquivo(int n,struct musica* musicas,char* arq){
  FILE *f = fopen(arq,"rt");
  if(f == NULL){
    printf("Arquivo nao encontrado\n");
    return;
  }
  fscanf(f, "%d", n);
  musicas* = malloc(n * sizeof(struct musica) * *n);
  for(int i = 0; i < *n; i++){
    scanf(
  }
}

void inserir(int n, struct musicas, struct* artistas){

}
