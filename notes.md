Paradigmas de linguagens de programação

    POO
    Estruturada
    Funcional

Criador do C
    Dennis Ritchie

Ponteiros
    Variáveis que armazenam o endereço de memória de outra variável

    Memória estática: Alocada quando o programa é compilado
    Memoria Dinâmica: Alocada conforme a execução do programa
    

Pré-Processador
    As instruções direcionados ao pré-processador são dados pela notação "#", seguindo-se assim
    com comandos suportados pelo mesmo, falando de arquivos de cabeçalho:
        #include                    -> Usado para importar arquivos de cabeçalho (Libs)
    
            "header.h"              -> Arquivos de cabeçalhos locais (dentro da mesma pasta)
            <header.h>              -> Arquivos de cabeçalhos angulares (dentro da pasta de libs padrões do SO)
    
        #define NAME value          -> Define uma macro **RETIRADO DO CÓDIGO FONTE APÓS A COMPILAÇÃO**
            #define QUADRADO(X) ((X) * (X))
            
        #ifdef, ifndef and endif    -> Condições do pré-processador (Usado para incluir ou remover funcionalidades)
            
        

    
