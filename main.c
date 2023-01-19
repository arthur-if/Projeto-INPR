#include <stdio.h>
#define BOLD "\033[1m" 
#define UNDERSCORE "\033[4m"
#define REVERSE "\033[7m"
#define VERMELHO "\x1b[31m" 
#define ROSA "\x1b[35m"
#define ROXO "\x1b[31m"
#define CIANO "\x1b[36m"
#define VERDE "\x1b[32m"
#define AZUL "\x1b[34m"
#define AMARELO "\x1b[33m"
#define RESET "\x1b[0m"

int main() {

  char escolha, medida_e, discente[100], i; // strings //
  char gab[5] = {'B', 'C', 'A', 'C', 'A'}; // gabarito //
  char resp[5]; // matriz de resposta //
  float lado_quad, area_quad, prm_quad; // quadrado //
  float base_r, altura_r, area_r, prm_r; // retângulo //
  float base_teq, area_teq, prm_teq; // triângulo equil... //
  float base_ti, altura_ti, area_ti, prm_ti; // trian iso. //
  float base_tes, altura_tes, lado_c_tes, area_tes, prm_tes;
  float raio_c, PI = 3.14, area_c, prm_c; // círculo //
  float D_l, d_l, area_l, prm_l; // losango //
  float b_maior, b_menor, altura_t, area_t, prm_t; // trap //

  printf(VERDE BOLD);
  printf("\nInstituto Federal de Alagoas - IFAL");
  printf("\nAplicação feita por: Arthur de Lima Silva");
  printf("\nTurma: 911 \t\t\t Curso: Infórmatica");
  printf("\n\nGuerreiro(a), Informe aqui o seu nome: ");
  fgets(discente, 100, stdin);
  printf("Seja bem vindo(a), %s", discente);
  printf("A aplicação será manuseada por você!");
  printf("\nSe divirta com a Matemática...\n");
  printf(RESET);

  printf(VERDE BOLD UNDERSCORE"\n");
  system("pause");
  printf("\nCONTINUE O PROGRAMA...\n\n");
  printf(RESET); // esperar o enter //
  
  do{
     printf(VERDE BOLD"\n\t\tCÁLCULO DE ÁREA E PERÍMETRO");
     // \t gera um novo espaçamento //
  
     printf("\n\nESCOLHA A OPÇÃO DESEJADA: ");
     printf(RESET); // RESETAR O NEGRITO // 

     printf(VERDE); // lista de escolha //
  printf("\n Z | FECHAR O PROGRAMA");
  printf("\n A | INTRODUÇÃO DA APLICAÇÃO");
  printf("\n B | FÓRMULAS DE ÁREAS");
  printf("\n C | FÓRMULAS DE PERÍMETRO");
  printf("\n D | FIGURA DO QUADRADO");
  printf("\n E | FIGURA DO RETANGULO");
  printf("\n F | FIGURA DO TRIANGULO EQUILÁTERO");
  printf("\n G | FIGURA DO TRIANGULO ISÓCELES");
  printf("\n H | FIGURA DO TRIANGULO ESCALENO");
  printf("\n I | FIGURA DO CÍRCULO");
  printf("\n J | FIGURA DO LOSANGO");
  printf("\n K | FIGURA DO TRAPÉZIO");
  printf("\n L | EXERCÍCIOS DE MEMÓRIA");
  printf("\n M | REFERÊNCIAS DA APLICAÇÃO");
  printf("\nINFORME AQUI A OPÇÃO DESEJADA POR VOCÊ: ");
  scanf("%s", &escolha); // leitura da escolha //

  switch (escolha){

    case 'Z': // fechamento do programa //
    case 'z':{
      printf(VERMELHO BOLD);
      printf("\nVOCÊ ESCOLHEU SAIR DO PROGRAMA");
      printf("\nO PROGRAMA ENCERROU... ADEUS <3\n");
      return 0;
        break;
    }

    case 'A': // fechamento do programa //
    case 'a':{
      printf(AZUL BOLD);
      printf("\nBREVE ABORDAGEM DA APLICAÇÃO\n");
      printf(RESET);
      printf(AZUL);
      printf("\n\tNesta aplicação, será possível compreender as fórmulas de áreas e perímetros de figuras planas, além disso, sendo possível mostrar a resposta da figura desejada com exercícios de fixação para melhorar ainda mais a compreensão do discente. Para que os mesmos possam usurfruir da aplicação, e que se sintam a vontade de utilizarem da maneira que desejam... explore o seu conhecimento..." AZUL BOLD  " Bons estudos!!! \n");

      printf(AZUL BOLD UNDERSCORE"\n");
      system("pause");
      printf("\nCONTINUE O PROGRAMA...\n\n");
      printf(RESET); // esperar o enter //
        break;
    }
      
    case 'B': // fórmulas das áreas //
    case 'b':{
      printf(VERDE BOLD UNDERSCORE);
      printf("\nFÓRMULA DE ÁREAS DAS FIGURAS:\n");
      printf(RESET);

      printf(VERDE BOLD UNDERSCORE);
      printf("\nO QUE É A ÁREA DE UMA FIGURA:\n");
      printf(RESET);
      printf(VERDE);
      printf("A área é uma grandeza importante da geometria. Dada uma figura geométrica, a área é a medida de superfície dessa figura plana, onde variam suas fórmulas de acordo com o formato de cada uma.\n");
      printf(RESET);

      printf(VERDE BOLD UNDERSCORE"\n");
      system("pause");
      printf("\nCONTINUE O PROGRAMA...\n");
      printf(RESET);

      printf(AMARELO BOLD);
      printf("\nFÓRMULA DO QUADRADO: ");
      printf("\nAREA = base * altura");
      printf(RESET);

      printf(CIANO BOLD);
      printf("\n\nFÓRMULA DO RETANGULO: ");
      printf("\nÁREA = base * altura");

      printf(ROXO BOLD);
      printf("\n\nFÓRMULA DO TRIANGULO EQUILÁTERO: ");
      printf("\nÁREA = (base * altura) / 2 ");
      printf(RESET);

      printf(ROSA BOLD);
      printf("\n\nFÓRMULA DO TRIANGULO ISÓCELES: ");
      printf("\nÁREA = (base * altura) / 2 ");
      printf(RESET);

      printf(AMARELO BOLD);
      printf("\n\nFÓRMULA DO TRIANGULO ESCALENO");
      printf("\nÁREA = (base * altura) / 2 ");
      printf(RESET);

      printf(CIANO BOLD);
      printf("\n\nFÓRMULA DO CÍRCULO:");
      printf("\nÁREA = π * r²");
      printf("\nPI (π) = 3,14");
      printf("\nr = raio do círculo");
      printf("(distância entre o centro e a extremidade)");
      printf(RESET);

      printf(ROSA BOLD);
      printf("\n\nFÓRMULA DO LOSANGO: ");
      printf("\nÁREA = (D * d) / 2 ");
      printf("\nD = dimensão maior");
      printf("\nd = dimensão menor");
      printf(RESET);

      printf(ROXO BOLD);
      printf("\n\nFÓRMULA DO TRAPÉZIO: ");
      printf("\nÁREA = ((b_maior + b_menor) * altura_t) / 2 \n");
      printf(RESET);

      printf(ROXO BOLD UNDERSCORE"\n");
      system("pause");
      printf("\nCONTINUE O PROGRAMA...\n");
      printf(RESET);
        break;
    }
      
    case 'C': // fórmulas do perímetro //
    case 'c':{
      printf(VERDE BOLD UNDERSCORE);
      printf("\nFÓRMULA DE PERÍMETRO DAS FIGURAS\n");
      printf(RESET);

      printf(VERDE BOLD UNDERSCORE);
      printf("\nO QUE É O PERÍMETRO DE UMA FIGURA:\n");
      printf(RESET);
      printf(VERDE);
      printf("O perímetro equivale à soma das medidas de todos os lados de uma figura, independentemente do modo como eles são calculados ou obtidos.\n");
      printf(RESET);

      printf(VERDE BOLD UNDERSCORE"\n");
      system("pause");
      printf("\nCONTINUE O PROGRAMA...\n");
      printf(RESET);

      printf(AMARELO BOLD);
      printf("\nFÓRMULA DO QUADRADO: ");
      printf("\nPERÍMETRO = lado * 4 ");
      printf(RESET);

      printf(CIANO BOLD);
      printf("\n\nFÓRMULA DO RETANGULO: ");
      printf("\nPERÍMETRO = (base * 2) + (altura * 2) ");

      printf(ROSA BOLD);
      printf("\n\nFÓRMULA DO TRIANGULO EQUILÁTERO: ");
      printf("\nÁREA = lado * 3 ");
      printf(RESET);

      printf(ROXO BOLD);
      printf("\n\nFÓRMULA DO TRIANGULO ISÓCELES: ");
      printf("\nPERÍMETRO =  base + (a * 2) ");
      printf(RESET);

      printf(AMARELO BOLD);
      printf("\n\nFÓRMULA DO TRIANGULO ESCALENO: ");
      printf("\nPERÍMETRO = l1 + l2 + l3");

      printf(CIANO BOLD);
      printf("\n\nFÓRMULA DO CÍRCULO:");
      printf("\nPERÍMETRO = 2 * π * r ");
      printf(RESET);

      printf(ROSA BOLD);
      printf("\n\nFÓRMULA DO LOSANGO: ");
      printf("\nPERÍMETRO = l1 + l2 + l3 + l4");
      printf(RESET);

      printf(ROXO BOLD);
      printf("\n\nFÓRMULA DO TRAPÉZIO: ");
      printf("\nPERÍMETRO = l1 + l2 + l3 + l4 \n");
      printf(RESET);

      printf(ROXO BOLD UNDERSCORE"\n");
      system("pause");
      printf("\nCONTINUE O PROGRAMA...\n");
      printf(RESET);
        break;
    }
      
    case 'D': // figura do quadrado //
    case 'd':{
      printf(AMARELO BOLD);
      printf("\nCÁLCULO DE ÁREA E PERÍMETRO DO QUADRADO\n");

      printf(AMARELO BOLD UNDERSCORE);
      printf("\nO QUADRADO:");
      printf(RESET);
      printf(AMARELO);
      printf("\nO quadrado é uma figura plana, classificado como polígono, composto por 4 lados e 4 ângulos congruentes entre si, ou seja, que possuem as mesmas medidas. O quadrado é uma figura geométrica bastante comum no cotidiano e é um caso especial de quadrilátero estudado pela geometria plana.\n");
      printf(RESET);
      printf(AMARELO BOLD UNDERSCORE);
      printf("\nFÓRMULA DA ÁREA:");
      printf(RESET);
      printf(AMARELO);
      printf("\nAREA = base * altura");
      printf(RESET);
      printf(AMARELO BOLD UNDERSCORE);
      printf("\nFÓRMULA DO PERÍMETRO:");
      printf(RESET);
      printf(AMARELO);
      printf("\nPERÍMETRO = lado * 4 \n");
      printf(RESET);

      printf(AMARELO);
      printf("\n\nInforme aqui a medida do lado: ");
      scanf("%f", &lado_quad);

      if (lado_quad < 0){
        printf(VERMELHO BOLD);
        printf("\nESTE NÚMERO É INVALIDO");
        printf("\nREINICIE O PROGRAMA...");
        printf(RESET);
        return 0;
      }
      
      area_quad = (lado_quad * lado_quad);
      prm_quad = (lado_quad * 4);

      printf(AMARELO BOLD);
      printf("\n\n\tESCOLHA AQUI A GRANDEZA: ");
      printf("\n1 | GRANDEZA EM QUILÔMETROS");
      printf("\n2 | GRANDEZA EM METROS");
      printf("\n3 | GRANDEZA EM CENTÍMETROS");
      printf("\n4 | GRANDEZA EM MILÍMETROS");
      printf("\nINFORME AQUI A ESCOLHA DESEJADA: ");
      scanf("%s", &medida_e);
      printf(RESET);

      printf(AMARELO);
      if (medida_e == '1'){
         printf("\nA área é equivalente à: %.2f km²", area_quad);
         printf("\nO perímetro equivale à: %.2f km\n\n", prm_quad);
      }
      if (medida_e == '2'){
         printf("\nA área é equivalente à: %.2f m²", area_quad);
         printf("\nO perímetro equivale à: %.2f m\n\n", prm_quad);
        }
      if (medida_e == '3'){
         printf("\nA área é equivalente à: %.2f cm²", area_quad);
         printf("\nO perímetro equivale à: %.2f cm\n\n", prm_quad);
        }
      if (medida_e == '4'){
         printf("\nA área é equivalente à: %.2f mm²", area_quad);
         printf("\nO perímetro equivale à: %.2f mm\n\n", prm_quad);
        }
      printf(RESET);

      printf(AMARELO BOLD UNDERSCORE"\n");
      system("pause");
      printf("\nCONTINUE O PROGRAMA...\n\n");
      printf(RESET);
       break;
    }
      
    case 'E': // figura do retângulo //
    case 'e':{
      printf(CIANO BOLD);
      printf("\nCÁLCULO DE ÁREA E PERÍMETRO DO RETANGULO\n");

      printf(CIANO BOLD UNDERSCORE);
      printf("\nO RETANGULO:");
      printf(RESET);
      printf(CIANO);
      printf("\nO retângulo é um polígono de quatro lados e recebe esse nome por possuir todos os ângulos internos retos, ou seja, medindo 90°. Essa forma é composta por 4 vértices e 4 lados.\n");
      printf(RESET);
      printf(CIANO BOLD UNDERSCORE);
      printf("\nFÓRMULA DA ÁREA:");
      printf(RESET);
      printf(CIANO);
      printf("\nAREA = base * altura");
      printf(RESET);
      printf(CIANO BOLD UNDERSCORE);
      printf("\nFÓRMULA DO PERÍMETRO:");
      printf(RESET);
      printf(CIANO);
      printf("\nPERÍMETRO = (base * 2) + (altura * 2) \n");
      printf(RESET);

      printf(CIANO);
      printf("\nInforme aqui a medida da base: ");
      scanf("%f", &base_r);
      printf("Informe aqui a medida da altura: ");
      scanf("%f", &altura_r);

      if (base_r < 0){ // se for negativo... programa fecha //
        printf(VERMELHO BOLD);
        printf("\nALGUM NÚMERO É INVALIDO");
        printf("\nREINICIE O PROGRAMA...");
        printf(RESET);
        return 0;
      }

      if (altura_r < 0){ //se for negativo... programa fecha //
        printf(VERMELHO BOLD);
        printf("\nALGUM NÚMERO É INVALIDO");
        printf("\nREINICIE O PROGRAMA...");
        printf(RESET);
        return 0;
      }

      area_r = base_r * altura_r;
      prm_r = (base_r * 2) + (altura_r * 2);

      printf(CIANO BOLD);
      printf("\n\n\tESCOLHA AQUI A GRANDEZA: ");
      printf(RESET);
      printf(CIANO);
      printf("\n1 | GRANDEZA EM QUILÔMETROS");
      printf("\n2 | GRANDEZA EM METROS");
      printf("\n3 | GRANDEZA EM CENTÍMETROS");
      printf("\n4 | GRANDEZA EM MILÍMETROS");
      printf("\nINFORME AQUI A ESCOLHA DESEJADA: ");
      scanf("%s", &medida_e);
      printf(RESET);

      printf(CIANO);
      if (medida_e == '1'){
         printf("\nA área é equivalente à: %.2f km²", area_r);
         printf("\nO perímetro equivale à: %.2f km\n\n", prm_r);
      }
      if (medida_e == '2'){
         printf("\nA área é equivalente à: %.2f m²", area_r);
         printf("\nO perímetro equivale à: %.2f m\n\n", prm_r);
        }
      if (medida_e == '3'){
         printf("\nA área é equivalente à: %.2f cm²", area_r);
         printf("\nO perímetro equivale à: %.2f cm\n\n", prm_r);
        }
      if (medida_e == '4'){
         printf("\nA área é equivalente à: %.2f mm²", area_r);
         printf("\nO perímetro equivale à: %.2f mm\n\n", prm_r);
        }
      printf(RESET);

      printf(CIANO BOLD UNDERSCORE"\n");
      system("pause");
      printf("\nCONTINUE O PROGRAMA...\n\n");
      printf(RESET);
        break;
    }
      
    case 'F': // figura do triângulo equilátero //
    case 'f':{
      printf(ROSA BOLD);
      printf("\nCÁLCULO DE ÁREA E PERÍMETRO DO TRIANGULO EQUILÁTERO\n");

      printf(ROSA BOLD UNDERSCORE);
      printf("\nO TRIANGULO EQUILÁTERO:");
      printf(RESET);
      printf(ROSA);
      printf("\nUm triângulo é conhecido como equilátero quando ele possui a medida dos três lados congruentes, assim, consequentemente, os seus ângulos internos também são congruentes.\n");
      printf(ROSA BOLD UNDERSCORE);
      printf("\nFÓRMULA DA ÁREA:");
      printf(RESET);
      printf(ROSA);
      printf("\nAREA = (base * altura) / 2");
      printf(RESET);
      printf(ROSA BOLD UNDERSCORE);
      printf("\nFÓRMULA DO PERÍMETRO:");
      printf(RESET);
      printf(ROSA);
      printf("\nPERÍMETRO = lado * 3 \n");
      printf(RESET);

      printf(ROSA);
      printf("\nInforme aqui a medida da base: ");
      scanf("%f", &base_teq);

    if (base_teq < 0){ //se for negativo... programa fecha //
        printf(VERMELHO BOLD);
        printf("\nALGUM NÚMERO É INVALIDO");
        printf("\nREINICIE O PROGRAMA...");
        printf(RESET);
        return 0;
        }

      area_teq = (base_teq * base_teq) / 2;
      prm_teq = base_teq * 3;

      printf(ROSA BOLD);
      printf("\n\n\tESCOLHA AQUI A GRANDEZA: ");
      printf(RESET);
      printf(ROSA);
      printf("\n1 | GRANDEZA EM QUILÔMETROS");
      printf("\n2 | GRANDEZA EM METROS");
      printf("\n3 | GRANDEZA EM CENTÍMETROS");
      printf("\n4 | GRANDEZA EM MILÍMETROS");
      printf("\nINFORME AQUI A ESCOLHA DESEJADA: ");
      scanf("%s", &medida_e);
      printf(RESET);

      printf(ROSA);
      if (medida_e == '1'){
         printf("\nA área é equivalente à: %.2f km²", area_teq);
         printf("\nO perímetro equivale à: %.2f km\n\n", prm_teq);
      }
      if (medida_e == '2'){
         printf("\nA área é equivalente à: %.2f m²", area_teq);
         printf("\nO perímetro equivale à: %.2f m\n\n", prm_teq);
        }
      if (medida_e == '3'){
         printf("\nA área é equivalente à: %.2f cm²", area_teq);
         printf("\nO perímetro equivale à: %.2f cm\n\n", prm_teq);
        }
      if (medida_e == '4'){
         printf("\nA área é equivalente à: %.2f mm²", area_teq);
         printf("\nO perímetro equivale à: %.2f mm\n\n", prm_teq);
        }
      printf(RESET);

      printf(ROSA BOLD UNDERSCORE"\n");
      system("pause");
      printf("\nCONTINUE O PROGRAMA...\n\n");
      printf(RESET);
        break;
    }

    case 'G': // figura do triângulo isóceles //
    case 'g':{
      printf(ROXO BOLD);
      printf("\nCÁLCULO DE ÁREA E PERÍMETRO DO TRIANGULO ISÓCELES\n");

      printf(ROXO BOLD UNDERSCORE);
      printf("\nO TRIANGULO ISÓCELES:");
      printf(RESET);
      printf(ROXO);
      printf("\nTriângulo isósceles é um polígono que apresenta três lados, sendo dois deles congruentes (mesma medida). O lado com medida diferente é chamado base do triângulo isósceles.\n");
      printf(ROXO BOLD UNDERSCORE);
      printf("\nFÓRMULA DA ÁREA:");
      printf(RESET);
      printf(ROXO);
      printf("\nAREA = (base * altura) / 2");
      printf(RESET);
      printf(ROXO BOLD UNDERSCORE);
      printf("\nFÓRMULA DO PERÍMETRO:");
      printf(RESET);
      printf(ROXO);
      printf("\nPERÍMETRO = lado * 3 \n");
      printf(RESET);

      printf(ROXO);
      printf("\nInforme aqui a medida da base: ");
      scanf("%f", &base_ti);
      printf("Informe aqui a medida da altura: ");
      scanf("%f", &altura_ti);

    if (base_ti < 0){ //se for negativo... programa fecha //
        printf(VERMELHO BOLD);
        printf("\nALGUM NÚMERO É INVALIDO");
        printf("\nREINICIE O PROGRAMA...");
        printf(RESET);
        return 0;
        }

    if (altura_ti < 0){ //se for negativo... programa fecha //
        printf(VERMELHO BOLD);
        printf("\nALGUM NÚMERO É INVALIDO");
        printf("\nREINICIE O PROGRAMA...");
        printf(RESET);
        return 0;
        }

        area_ti = (base_ti * altura_ti) / 2;
        prm_ti = base_ti + (altura_ti * 2);

      printf(ROXO BOLD);
      printf("\n\n\tESCOLHA AQUI A GRANDEZA: ");
      printf(RESET);
      printf(ROXO);
      printf("\n1 | GRANDEZA EM QUILÔMETROS");
      printf("\n2 | GRANDEZA EM METROS");
      printf("\n3 | GRANDEZA EM CENTÍMETROS");
      printf("\n4 | GRANDEZA EM MILÍMETROS");
      printf("\nINFORME AQUI A ESCOLHA DESEJADA: ");
      scanf("%s", &medida_e);
      printf(RESET);

      printf(ROXO);
      if (medida_e == '1'){
         printf("\nA área é equivalente à: %.2f km²", area_ti);
         printf("\nO perímetro equivale à: %.2f km\n\n", prm_ti);
      }
      if (medida_e == '2'){
         printf("\nA área é equivalente à: %.2f m²", area_ti);
         printf("\nO perímetro equivale à: %.2f m\n\n", prm_ti);
        }
      if (medida_e == '3'){
         printf("\nA área é equivalente à: %.2f cm²", area_ti);
         printf("\nO perímetro equivale à: %.2f cm\n\n", prm_ti);
        }
      if (medida_e == '4'){
         printf("\nA área é equivalente à: %.2f mm²", area_ti);
         printf("\nO perímetro equivale à: %.2f mm\n\n", prm_ti);
        }
      printf(RESET);

      printf(ROXO BOLD UNDERSCORE"\n");
      system("pause");
      printf("\nCONTINUE O PROGRAMA...\n\n");
      printf(RESET);
        break;
    }

    case 'H': // figura do triângulo escaleno //
    case 'h':{
      printf(AMARELO BOLD);
      printf("\nCÁLCULO DE ÁREA E PERÍMETRO DO TRIANGULO ESCALENO\n");

      printf(AMARELO BOLD UNDERSCORE);
      printf("\nO TRIANGULO ESCALENO:");
      printf(RESET);
      printf(AMARELO);
      printf("\nUm triângulo é classificado como escaleno quando todos os seus lados possuem medidas diferentes.\n");
      printf(RESET);
      printf(AMARELO BOLD UNDERSCORE);
      printf("\nFÓRMULA DA ÁREA:");
      printf(RESET);
      printf(AMARELO);
      printf("\nAREA = (base * altura) / 2");
      printf(RESET);
      printf(AMARELO BOLD UNDERSCORE);
      printf("\nFÓRMULA DO PERÍMETRO:");
      printf(RESET);
      printf(AMARELO);
      printf("\nPERÍMETRO = l1 + l2 + l3 \n\n");

      printf("Informe aqui o valor da base: ");
      scanf("%f", &base_tes);
      printf("Informe aqui o valor da altura: ");
      scanf("%f", &altura_tes);
      printf("Informe aqui o valor do lado c: ");
      scanf("%f", &lado_c_tes);

      if (base_tes < 0){ //se for negativo. programa fecha //
        printf(VERMELHO BOLD);
        printf("\nALGUM NÚMERO É INVALIDO");
        printf("\nREINICIE O PROGRAMA...");
        printf(RESET);
        return 0;
        }

      if (altura_tes < 0){ //se for negativo. fecha //
        printf(VERMELHO BOLD);
        printf("\nALGUM NÚMERO É INVALIDO");
        printf("\nREINICIE O PROGRAMA...");
        printf(RESET);
        return 0;
        }

      if (lado_c_tes < 0){ //se for negativo. fecha //
        printf(VERMELHO BOLD);
        printf("\nALGUM NÚMERO É INVALIDO");
        printf("\nREINICIE O PROGRAMA...");
        printf(RESET);
        return 0;
        }

      area_tes = (base_tes * altura_tes) / 2;
      prm_tes = base_tes + altura_tes + lado_c_tes;

      printf(AMARELO BOLD);
      printf("\n\n\tESCOLHA AQUI A GRANDEZA: ");
      printf(RESET);
      printf(AMARELO);
      printf("\n1 | GRANDEZA EM QUILÔMETROS");
      printf("\n2 | GRANDEZA EM METROS");
      printf("\n3 | GRANDEZA EM CENTÍMETROS");
      printf("\n4 | GRANDEZA EM MILÍMETROS");
      printf("\nINFORME AQUI A ESCOLHA DESEJADA: ");
      scanf("%s", &medida_e);
      printf(RESET);

      printf(AMARELO);
      if (medida_e == '1'){
         printf("\nA área é equivalente à: %.2f km²", area_tes);
         printf("\nO perímetro equivale à: %.2f km\n\n", prm_tes);
      }
      if (medida_e == '2'){
         printf("\nA área é equivalente à: %.2f m²", area_tes);
         printf("\nO perímetro equivale à: %.2f m\n\n", prm_tes);
        }
      if (medida_e == '3'){
         printf("\nA área é equivalente à: %.2f cm²", area_tes);
         printf("\nO perímetro equivale à: %.2f cm\n\n", prm_tes);
        }
      if (medida_e == '4'){
         printf("\nA área é equivalente à: %.2f mm²", area_tes);
         printf("\nO perímetro equivale à: %.2f mm\n\n", prm_tes);
        }
      printf(RESET);

      printf(AMARELO BOLD UNDERSCORE"\n");
      system("pause");
      printf("\nCONTINUE O PROGRAMA...\n\n");
      printf(RESET);
        break;
    }

    case 'I': // figura do círculo //
    case 'i':{
      printf(AMARELO BOLD);
      printf("\nCÁLCULO DE ÁREA E PERÍMETRO DO CÍRCULO\n");

      printf(AMARELO BOLD UNDERSCORE);
      printf("\nO CÍRCULO:");
      printf(RESET);
      printf(AMARELO);
      printf("\nCírculo é a união de uma circunferência com todos os pontos internos a ela. Em outras palavras, a circunferência é apenas o contorno de um círculo.\n");
      printf(RESET);
      printf(AMARELO BOLD UNDERSCORE);
      printf("\nFÓRMULA DA ÁREA:");
      printf(RESET);
      printf(AMARELO);
      printf("\nAREA = π * r²");
      printf(RESET);
      printf(AMARELO BOLD UNDERSCORE);
      printf("\nFÓRMULA DO PERÍMETRO:");
      printf(RESET);
      printf(AMARELO);
      printf("\nPERÍMETRO = 2 * PI (π) * r \n");

      printf("\nInforme aqui o raio do círculo: ");
      scanf("%f", &raio_c);
      printf(RESET);

      if (raio_c < 0){
        printf(VERMELHO BOLD);
        printf("\nALGUM NÚMERO É INVALIDO");
        printf("\nREINICIE O PROGRAMA...");
        printf(RESET);
        return 0;
      }

      area_c = PI * raio_c * raio_c;
      prm_c = 2 * PI * raio_c;

      printf(AMARELO BOLD);
      printf("\n\n\tESCOLHA AQUI A GRANDEZA: ");
      printf(RESET);
      printf(AMARELO);
      printf("\n1 | GRANDEZA EM QUILÔMETROS");
      printf("\n2 | GRANDEZA EM METROS");
      printf("\n3 | GRANDEZA EM CENTÍMETROS");
      printf("\n4 | GRANDEZA EM MILÍMETROS");
      printf("\nINFORME AQUI A ESCOLHA DESEJADA: ");
      scanf("%s", &medida_e);
      printf(RESET);

      printf(AMARELO);
      if (medida_e == '1'){
         printf("\nA área é equivalente à: %.2f km²", area_c);
         printf("\nO perímetro equivale à: %.2f km\n\n", prm_c);
      }
      if (medida_e == '2'){
         printf("\nA área é equivalente à: %.2f m²", area_c);
         printf("\nO perímetro equivale à: %.2f m\n\n", prm_c);
        }
      if (medida_e == '3'){
         printf("\nA área é equivalente à: %.2f cm²", area_c);
         printf("\nO perímetro equivale à: %.2f cm\n\n", prm_c);
        }
      if (medida_e == '4'){
         printf("\nA área é equivalente à: %.2f mm²", area_c);
         printf("\nO perímetro equivale à: %.2f mm\n\n", prm_c);
        }
      printf(RESET);
      
      printf(AMARELO BOLD UNDERSCORE"\n");
      system("pause");
      printf("\nCONTINUE O PROGRAMA...\n\n");
      printf(RESET);
        break;
    }
      
    case 'J': // figura do losango //
    case 'j':{
      printf(CIANO BOLD);
      printf("\nCÁLCULO DE ÁREA E PERÍMETRO DO LOSANGO\n");

      printf(CIANO BOLD UNDERSCORE);
      printf("\nO LOSANGO:");
      printf(RESET);
      printf(CIANO);
      printf("\nTrata-se de uma figura geométrica que possui quatro lados iguais e, como consequência, seus lados opostos são paralelos. Um losango é um polígono que possui quatro lados congruentes.\n");
      printf(RESET);
      printf(CIANO BOLD UNDERSCORE);
      printf("\nFÓRMULA DA ÁREA:");
      printf(RESET);
      printf(CIANO);
      printf("\nAREA = (D * d) / 2");
      printf(RESET);
      printf(CIANO BOLD UNDERSCORE);
      printf("\nFÓRMULA DO PERÍMETRO:");
      printf(RESET);
      printf(CIANO);
      printf("\nPERÍMETRO = l1 + l2 + l3 + l4 \n");

      printf("\nInforme aqui o valor da dimensão maior: ");
      scanf("%f", &D_l);
      printf("Informe aqui o valor da dimensão menor: ");
      scanf("%f", &d_l);

      if (D_l < d_l){
        printf(VERMELHO BOLD);
        printf("\nOS NÚMEROS DITOS ESTÃO MAL COLOCADOS");
        printf("\nREINICIE O PROGRAMA...");
        printf(RESET);
        return 0;
      }

      if (D_l < 0){
        printf(VERMELHO BOLD);
        printf("\nALGUM NÚMERO É INVALIDO");
        printf("\nREINICIE O PROGRAMA...");
        printf(RESET);
        return 0;
      }

      if (d_l < 0){
        printf(VERMELHO BOLD);
        printf("\nALGUM NÚMERO É INVALIDO");
        printf("\nREINICIE O PROGRAMA...");
        printf(RESET);
        return 0;
      }
    
      area_l = (D_l * d_l) / 2;
      prm_l = (D_l * 2) + (d_l * 2);

      printf(CIANO BOLD);
      printf("\n\n\tESCOLHA AQUI A GRANDEZA: ");
      printf(RESET);
      printf(CIANO);
      printf("\n1 | GRANDEZA EM QUILÔMETROS");
      printf("\n2 | GRANDEZA EM METROS");
      printf("\n3 | GRANDEZA EM CENTÍMETROS");
      printf("\n4 | GRANDEZA EM MILÍMETROS");
      printf("\nINFORME AQUI A ESCOLHA DESEJADA: ");
      scanf("%s", &medida_e);
      printf(RESET);

      printf(CIANO);
      if (medida_e == '1'){
         printf("\nA área é equivalente à: %.2f km²", area_l);
         printf("\nO perímetro equivale à: %.2f km\n\n", prm_l);
      }
      if (medida_e == '2'){
         printf("\nA área é equivalente à: %.2f m²", area_l);
         printf("\nO perímetro equivale à: %.2f m\n\n", prm_l);
        }
      if (medida_e == '3'){
         printf("\nA área é equivalente à: %.2f cm²", area_l);
         printf("\nO perímetro equivale à: %.2f cm\n\n", prm_l);
        }
      if (medida_e == '4'){
         printf("\nA área é equivalente à: %.2f mm²", area_l);
         printf("\nO perímetro equivale à: %.2f mm\n\n", prm_l);
        }
      printf(RESET);
      
      printf(CIANO BOLD UNDERSCORE"\n");
      system("pause");
      printf("\nCONTINUE O PROGRAMA...\n\n");
      printf(RESET);
        break;
    }

    case 'K': // figura do trapézio //
    case 'k':{
      printf(CIANO BOLD);
      printf("\nCÁLCULO DE ÁREA E PERÍMETRO DO TRAPÉZIO\n");

      printf(CIANO BOLD UNDERSCORE);
      printf("\nO TRAPÉZIO:");
      printf(RESET);
      printf(CIANO);
      printf("\nTrata-se de um polígono que possui quatro lados, sendo dois lados paralelos (conhecidos como base maior e base menor) e dois não paralelos (lados oblíquos).");
      printf(RESET);
      printf(CIANO BOLD UNDERSCORE);
      printf("\nFÓRMULA DA ÁREA:");
      printf(RESET);
      printf(CIANO);
      printf("\nAREA = ((b_maior + b_menor) * altura_t) / 2");
      printf(RESET);
      printf(CIANO BOLD UNDERSCORE);
      printf("\nFÓRMULA DO PERÍMETRO:");
      printf(RESET);
      printf(CIANO);
      printf("\nPERÍMETRO = l1 + l2 + l3 + l4 \n");

      printf("\nInforme aqui o valor da base maior: ");
      scanf("%f", &b_maior);
      printf("Informe aqui o valor da base menor: ");
      scanf("%f", &b_menor);
      printf("Informe aqui o valor da altura: ");
      scanf("%f", &altura_t);

      if (b_maior < 0){
        printf(VERMELHO BOLD);
        printf("\nOS NÚMEROS DITOS ESTÃO MAL COLOCADOS");
        printf("\nREINICIE O PROGRAMA...");
        printf(RESET);
        return 0;
      }

      if (b_menor < 0){
        printf(VERMELHO BOLD);
        printf("\nOS NÚMEROS DITOS ESTÃO MAL COLOCADOS");
        printf("\nREINICIE O PROGRAMA...");
        printf(RESET);
        return 0;
      }

      if (altura_t < 0){
        printf(VERMELHO BOLD);
        printf("\nOS NÚMEROS DITOS ESTÃO MAL COLOCADOS");
        printf("\nREINICIE O PROGRAMA...");
        printf(RESET);
        return 0;
      }

      if (b_menor > b_maior){
        printf(VERMELHO BOLD);
        printf("\nOS NÚMEROS DITOS ESTÃO MAL COLOCADOS");
        printf("\nREINICIE O PROGRAMA...");
        printf(RESET);
        return 0;
      }

      area_t = ((b_maior + b_menor) * altura_t) / 2;
      prm_t = ((b_maior + b_menor) + (altura_t * 2));

      printf(CIANO BOLD);
      printf("\n\n\tESCOLHA AQUI A GRANDEZA: ");
      printf(RESET);
      printf(CIANO);
      printf("\n1 | GRANDEZA EM QUILÔMETROS");
      printf("\n2 | GRANDEZA EM METROS");
      printf("\n3 | GRANDEZA EM CENTÍMETROS");
      printf("\n4 | GRANDEZA EM MILÍMETROS");
      printf("\nINFORME AQUI A ESCOLHA DESEJADA: ");
      scanf("%s", &medida_e);
      printf(RESET);

      printf(CIANO);
      if (medida_e == '1'){
         printf("\nA área é equivalente à: %.2f km²", area_t);
         printf("\nO perímetro equivale à: %.2f km\n\n", prm_t);
      }
      if (medida_e == '2'){
         printf("\nA área é equivalente à: %.2f m²", area_t);
         printf("\nO perímetro equivale à: %.2f m\n\n", prm_t);
        }
      if (medida_e == '3'){
         printf("\nA área é equivalente à: %.2f cm²", area_t);
         printf("\nO perímetro equivale à: %.2f cm\n\n", prm_t);
        }
      if (medida_e == '4'){
         printf("\nA área é equivalente à: %.2f mm²", area_t);
         printf("\nO perímetro equivale à: %.2f mm\n\n", prm_t);
        }
      printf(RESET);
      
      printf(CIANO BOLD UNDERSCORE"\n");
      system("pause");
      printf("\nCONTINUE O PROGRAMA...\n\n");
      printf(RESET);
        break;
    }

    case 'L': // exercícios de memória //
    case 'l':{
      printf(CIANO BOLD);
      printf("\n\t\tEXERCÍCIOS DE MEMÓRIA\n");
      printf("\n\nAnote o gabarito em seu caderno");
      printf("\nColoque o gabarito no final das questões");
      printf(RESET);

      printf(CIANO UNDERSCORE);
      printf("\nIREMOS PARA A PRIMEIRA PERGUNTA:\n");
      printf(RESET);
      printf(CIANO BOLD REVERSE);
      printf("\n1ª Questão");
      printf(RESET);
      printf(CIANO);
      printf("\nSeu Francisco possui dois tapetes de mesma área. O tapete quadrado possui lado de 4 m e o tapete retangular tem altura de 2 m e base de 8 m. Qual tapete apresenta o maior perímetro?");
      printf("\nA) O tapete quadrado");
      printf("\nB) O tapete retangular");
      printf("\nC) Os perímetros são iguais");

      printf(CIANO BOLD UNDERSCORE"\n");
      system("pause");
      printf(RESET);

      printf(CIANO UNDERSCORE);
      printf("\nIREMOS PARA A SEGUNDA PERGUNTA:\n");
      printf(RESET);
      printf(CIANO BOLD REVERSE);
      printf("\n2ª Questão");
      printf(RESET);
      printf(CIANO);
      printf("\nSeu Zé resolveu fazer um cercado em sua fazenda com o intuito de plantar algumas verduras. Para impedir que os animais comam seu plantio, ele decidiu cercar a região com arame. Sabendo que a parte do terreno que seu João utilizou forma um quadrilátero com os lados 50 m, 18 m, 42 m e 16 m, quantos metros de arame seu João precisa comprar para cercar o terreno?");
      printf("\nA) 121 m");
      printf("\nB) 138 m");
      printf("\nC) 126 m");
      printf("\nD) 134 m");

      printf(CIANO BOLD UNDERSCORE"\n");
      system("pause");
      printf(RESET);

      printf(CIANO UNDERSCORE);
      printf("\nIREMOS PARA A TERCEIRA PERGUNTA:\n");
      printf(RESET);
      printf(CIANO BOLD REVERSE);
      printf("\n3ª Questão");
      printf(RESET);
      printf(CIANO);
      printf("\nSeu Domingues decidiu pintar uma das paredes de seu quarto com uma cor diferente. Para isso, ela escolheu uma lata de tinta rosa, cujo rótulo diz que o rendimento do conteúdo é 20 m2. Se a parede que Márcia pretende pintar é retangular, com as medidas de 4 m de comprimento e 3 m de altura, quantas latas de tinta Márcia precisará comprar?");
      printf("\nA) uma lata");
      printf("\nB) duas latas");
      printf("\nC) três latas");
      printf("\nD) quatro latas");

      printf(CIANO BOLD UNDERSCORE"\n");
      system("pause");
      printf(RESET);

      printf(CIANO UNDERSCORE);
      printf("\nIREMOS PARA A QUARTA PERGUNTA:\n");
      printf(RESET);
      printf(CIANO BOLD REVERSE);
      printf("\n4ª Questão");
      printf(RESET);
      printf(CIANO);
      printf("\nZezinho comprou uma peça retangular de tecido e cortou 10 retângulos iguais com altura de 1,5 m e base de 2 m. Qual a área a peça original?");
      printf("\nA) 15 m2");
      printf("\nB) 25 m2");
      printf("\nC) 30 m2");
      printf("\nD) 40 m2");

      printf(CIANO BOLD UNDERSCORE"\n");
      system("pause");
      printf(RESET);

      printf(CIANO UNDERSCORE);
      printf("\nIREMOS PARA A QUINTA PERGUNTA:\n");
      printf(RESET);
      printf(CIANO BOLD REVERSE);
      printf("\n5ª Questão");
      printf(RESET);
      printf(CIANO);
      printf("\nJoãozinho irá contruir uma praça pública em forma de circunferência possuindo um raio de 18 metros. Diante disto, assinale a alternativa que apresenta sua área.");
      printf("\nA) 1.017,36 m2");
      printf("\nB) 1.254,98 m2");
      printf("\nC) 1.589,77 m2");
      printf("\nD) 1.698,44 m2");
      printf("\nE) 1.710,34 m2\n");

      printf(CIANO BOLD UNDERSCORE"\n");
      system("pause");
      printf(RESET);

      printf(CIANO BOLD REVERSE);
      printf("\nPREENCHA AQUI O GABARITO\n");
      printf(RESET);

      printf(CIANO);
      for(i = 0; i < 5; i++) {
         printf("Informe a resposta da pergunta %d: ", i+1);
         scanf("%s", &resp[i]);
      }
      
      for(i = 0; i < 5; i++){  
         if(toupper(resp[i]) == gab[i]) {
           printf("\nVOCÊ ACERTOU A %dª QUESTÃO", i + 1);
         }else{
           printf("\nVOCÊ ERROU A %dª QUESTÃO", i + 1);
         }
      }
      printf(RESET);

      printf(CIANO BOLD UNDERSCORE"\n");
      system("pause");
      printf("\nCONTINUE O PROGRAMA...\n\n");
      printf(RESET);
        break;
    }

    case 'M': // referências da aplicação //
    case 'm':{
      printf(VERDE BOLD);
      printf("\n\t\tREFERÊNCIAS DA APLICAÇÃO\n");
      printf(RESET);

      printf(VERDE);
      printf("\nNesta aplicação foram utilizados alguns sites da internet, e logo abaixo estarão as suas referencias para caso o discente queira se aprofundar no assunto, que possa ter ainda mais esta oportunidade.");
      printf(RESET);

      printf(VERDE UNDERSCORE);
      printf("\n\nSITE: todamatéria.com.br");
      printf("\nSITE: mundoeducacao.com.br");
      printf("\nSITE: brasilescola.com.br");
      printf("\nSITE: blogdoenem.com.br\n");
      printf(RESET);
        
      printf(VERDE BOLD UNDERSCORE"\n");
      system("pause");
      printf("\nCONTINUE O PROGRAMA...\n\n");
      printf(RESET);
        break;
    }
    
    default:
      printf(VERMELHO BOLD); // reinicia o código //
      printf("\nLETRA INCORRETA!");
      printf("\nINFORME UMA OPÇÃO CORRETA...\n\n");
      system("pause");
      printf(RESET);
  }
    
  }while (escolha != '0');

  return 0;
}