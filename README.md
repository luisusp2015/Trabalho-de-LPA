# Trabalho-de-LPA
Trabalho de lpa - usp - 22/09/2015

1º -- Alunos:
      Luís Felipe Moreira nºUsp(9312881)
      Érico Tadeu de Paula Vieira nºUsp(9312727)

2º -- Detalhes técnicos:
       - Os programas foram escritos em liguagem "C" ;  
       - Foram usadas as bibliotecas stdio.h e stdlib.h;
       - O compilador usado foi DEV-C++ ;
       - Os programas foi contruindo em uma plataforma Win 8 - 64bits;
       - Os programas foram criados na forma de "aplicativo" para plataforma Windows;

3º -- Organização do projeto:
       - O projeto "trabalho 1 de LPA" foi dividido didaticamente em 3 partes sendo elas: 
       -->Parte 1:
       ---Armazenada na pasta "Parte 1 - par com menor diferença";
       ---Nela se encontram o arquivo read-me com as instruções de uso, o código do programa e o arquivo .exe;
       ---O PROGRAMA DESTA PASTA IRÁ IDENTICAR ENTRE OS VALORES DE ENTRADA O PAR COM A MENOR DIFERENÇA ENTRE ELES;

       -->Parte 2:
       ---Armazenada na pasta "Parte 2 - elementos unicos";
       ---Nela se encontram o arquivo read-me com as instruções de uso ,o código do programa e o arquivo .exe;
       ---O PROGRAMA DESTA PASTA IRÁ IDENTICAR ENTRE OS VALORES DE ENTRADA OS ELEMENTOS QUE APARECEM APENAS UMA VEZ;

       -->Parte 3:
       ---Armazenada na pasta "Parte 3 - elementos com maior frequência";
       ---Nela se encontram o arquivo read-me com as instruções de uso , o código do programa e o arquivo .exe;
       ---O PROGRAMA DESTA PASTA IRÁ IDENTICAR ENTRE OS VALORES DE ENTRADA OS ELEMENTOS QUE APARECEM MAIS VEZES;


4º -- Funcionamento dos programas: (mais detalhes dentro da pasta de cada programa)
     --Programa Pt1: Este programa irá , dentre os valores entrados , selecionar o par cuja a diferença seja a menor dentre os valores postos e "imprimi-lo". O programa funciona na base de dois algoritmos: um de ordenação "insertionsort" e um que seleciona o par com a menor diferença chamado de "diferenciador".Primeiramente o algoritmo de ordenação insertionsort irá ordenar o vetor formado pelos valores de entrada do usuário.Esse vetor ordenado em ordem crescente é passado como argumento para a função formada pelo algoritmo diferenciador que irá fazer a diferença entre os pares consecutivos do vetor,armazenando os resultados da diferença em um outro vetor chamado menores.Esse vetor menores é ordenado novamente pela insertionsort e atribuido o valor da primeira posição do vetor a uma variável h.Por ultimo a função irá realizar novamente a diferença entre os consecutivos e imprimir aqueles pares que tiverem a diferença igual a h.
     --Programa Pt2: Este programa identifica dentre valores entrados pelo usuário aqueles que são unicos.Ele funciona baseado em dois algoritmos :um de ordenção "insertionsort" e um que identifica elementos unicos "identificador".Depois de entrado os valores pelo usuário é formado um vetor por  esses valores e em seguida ordenado pela  insertionsort.Depois de ordenado ele é passado como argumento para a função formada pelo algoritmo identificador.o algoritmo identificador irá separar o problema em dois casos , para uma quantidade d valores maiores que 1 e para uma quantidade de valores iguais a 1.Depois irá imprimir os valores que são unicos na tela do usuário .
     --Programa Pt3: Este programa identifica dentre os valores entrados pelo usuário aqueles que  ocorrem com maior frequencia.Ele funciona baseado em dois algoritmos um de ordenação insertionsort e um que identifica os valores com maior frequencia chamado de "identificador". O algoritmo  identificador funciona somando 1 a uma variavel contadora toda vez que valores consecutivos são iguais,atribuindo esses valores de frenquencia em um vetor que é ordenado em ordem decrescente pela insertionsort.É atribuido o valor fa posição 1 deste vetor para uma variável de comparação.Ao final do processo o algoritmo faz a leitura do vetor dos valores  e imprime aqueles cuja a frequencia é igual a maior encontrada.

5º -- Obrigado! E curtam os programas!
