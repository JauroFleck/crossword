/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char sopa[16][22] = {
        {'a', 'g', 'p', 's', 'e', 'u', 'd', 'o', 'a', 'u', 't', 'o', 's', 's', 'o', 'm', 'i', 'c', 'a', 'm', 'a', 'e'},
        {'e', 'o', 'h', 'u', 'r', 't', 't', 'o', 'n', 'n', 'w', 't', 'w', 'i', 'o', 'f', 's', 'n', 'i', 'e', 'i', 'e'},
        {'h', 'k', 'u', 't', 'c', 'c', 'n', 'r', 'd', 't', 'e', 'a', 'g', 'o', 'm', 't', 'd', 'c', 'd', 'i', 'v', 'r'},
        {'f', 't', 'w', 'd', 't', 't', 'o', 'e', 't', 's', 'c', 'u', 'a', 'e', 'r', 's', 'r', 'r', 'e', 'p', 'y', 'i'},
        {'d', 't', 'o', 'a', 'i', 'i', 'u', 's', 'c', 'p', 'v', 'e', 'p', 'h', 'o', 'o', 'i', 'h', 'l', 's', 'e', 's'},
        {'c', 'r', 'k', 'e', 'a', 'i', 'i', 'u', 'g', 'a', 'w', 'o', 'o', 'l', 'd', 'i', 'h', 's', 'e', 'h', 'd', 'm'},
        {'n', 'l', 'r', 's', 'e', 'i', 'h', 'o', 'e', 's', 'e', 'm', 'f', 'e', 'o', 'n', 'o', 't', 'a', 't', 'i', 'i'},
        {'t', 'd', 'd', 'o', 'i', 'n', 's', 'e', 'u', 'o', 'r', 'a', 'l', 'f', 'o', 'i', 'n', 'h', 's', 'r', 'i', 'e'},
        {'t', 'd', 'r', 'm', 'd', 'a', 'h', 'a', 'e', 'h', 'y', 'e', 'h', 'a', 'o', 'b', 'd', 'e', 'r', 'a', 't', 'n'},
        {'o', 'r', 'r', 'b', 't', 't', 't', 'h', 'o', 'r', 'c', 'h', 'c', 's', 'a', 'i', 'p', 'i', 'i', 'r', 'l', 'a'},
        {'e', 'w', 'i', 's', 'd', 'o', 'e', 'p', 'o', 'a', 'c', 'n', 'u', 'j', 's', 'i', 'd', 'o', 'a', 'n', 'e', 'o'},
        {'e', 'b', 'o', 'i', 'd', 'o', 'c', 'f', 'o', 't', 't', 'n', 'e', 'd', 'r', 'w', 'f', 'n', 't', 'a', 'e', 'e'},
        {'s', 't', 'c', 'a', 'r', 'i', 'o', 't', 'i', 'p', 'o', 'e', 'o', 't', 'e', 'i', 'b', 'n', 't', 'o', 'n', 'e'},
        {'r', 'a', 'u', 'd', 'a', 'b', 'a', 'd', 'u', 'o', 'v', 'w', 'e', 'f', 'v', 'd', 'n', 'r', 'a', 'e', 'n', 'e'},
        {'o', 'c', 'i', 'r', 't', 'n', 'e', 'c', 'o', 'r', 'c', 'a', 'l', 'i', 'n', 't', 'i', 'h', 't', 's', 'e', 'r'},
        {'o', 'o', 's', 'r', 'e', 'e', 'r', 's', 'r', 'f', 'd', 'e', 'e', 't', 'i', 'a', 'f', 'r', 's', 's', 'd', 'r'}
    };
    
    char palavra[] = "centri";
    int result = 0;
    
    for(int i = 0; i < 16; i++) {
        
        for(int j = 0; j < 22; j++) {
            
            if(sopa[i][j] == palavra[0]) {
                
                int l = sizeof(palavra) - 1;
                
                // Leitura para a direita
                if(j+l < 23) {
                    
                    for(int p = 1; p < l; p++) {
                    
                        if(sopa[i][j+p] == palavra[p]) {
                            
                            if(p == l-1) {
                                
                                printf("Encontrado \"%s\" na linha %d, coluna %d, lendo para a direita.\n", palavra, i+1, j+1);
                                result++;
                                break;
                                
                            }
                            
                        } else {
                            
                            break;
                            
                        }
                        
                    }
                    
                }
                    
                // Leitura para a esquerda
                if(j-l > -2) {
                    
                    for(int p = 1; p < l; p++) {
                    
                        if(sopa[i][j-p] == palavra[p]) {
                            
                            if(p == l-1) {
                                
                                printf("Encontrado \"%s\" na linha %d, coluna %d, lendo para a esquerda.\n", palavra, i+1, j+1);
                                result++;
                                break;
                                
                            }
                            
                        } else {
                            
                            break;
                            
                        }
                        
                    }
                    
                }
                
                // Leitura para cima
                if(i-l > -2) {
                    
                    for(int p = 1; p < l; p++) {
                    
                        if(sopa[i-p][j] == palavra[p]) {
                            
                            if(p == l-1) {
                                
                                printf("Encontrado \"%s\" na linha %d, coluna %d, lendo para cima.\n", palavra, i+1, j+1);
                                result++;
                                break;
                                
                            }
                            
                        } else {
                            
                            break;
                            
                        }
                        
                    }
                    
                }
                
                // Leitura para baixo
                if(i+l < 17) {
                    
                    for(int p = 1; p < l; p++) {
                    
                        if(sopa[i+p][j] == palavra[p]) {
                            
                            if(p == l-1) {
                                
                                printf("Encontrado \"%s\" na linha %d, coluna %d, lendo para baixo.\n", palavra, i+1, j+1);
                                result++;
                                break;
                                
                            }
                            
                        } else {
                            
                            break;
                            
                        }
                        
                    }
                    
                }
                
                // Leitura para diagonal inferior direita
                if(i+l < 17 && j+l < 23) {
                    
                    for(int p = 1; p < l; p++) {
                    
                        if(sopa[i+p][j+p] == palavra[p]) {
                            
                            if(p == l-1) {
                                
                                printf("Encontrado \"%s\" na linha %d, coluna %d, lendo para diagonal inferior direita.\n", palavra, i+1, j+1);
                                result++;
                                break;
                                
                            }
                            
                        } else {
                            
                            break;
                            
                        }
                        
                    }
                    
                }
                
                // Leitura para diagonal inferior esquerda
                if(i+l < 17 && j-l > -2) {
                    
                    for(int p = 1; p < l; p++) {
                    
                        if(sopa[i+p][j-p] == palavra[p]) {
                            
                            if(p == l-1) {
                                
                                printf("Encontrado \"%s\" na linha %d, coluna %d, lendo para diagonal inferior esquerda.\n", palavra, i+1, j+1);
                                result++;
                                break;
                                
                            }
                            
                        } else {
                            
                            break;
                            
                        }
                        
                    }
                    
                }
                
                // Leitura para diagonal superior direita
                if(i-l > -2 && j+l < 23) {
                    
                    for(int p = 1; p < l; p++) {
                    
                        if(sopa[i-p][j+p] == palavra[p]) {
                            
                            if(p == l-1) {
                                
                                printf("Encontrado \"%s\" na linha %d, coluna %d, lendo para diagonal superior direita.\n", palavra, i+1, j+1);
                                result++;
                                break;
                                
                            }
                            
                        } else {
                            
                            break;
                            
                        }
                        
                    }
                    
                }
                
                // Leitura para diagonal superior esquerda
                if(i-l > -2 && j-l > -2) {
                    
                    for(int p = 1; p < l; p++) {
                    
                        if(sopa[i-p][j-p] == palavra[p]) {
                            
                            if(p == l-1) {
                                
                                printf("Encontrado \"%s\" na linha %d, coluna %d, lendo para diagonal superior esquerda.\n", palavra, i+1, j+1);
                                result++;
                                break;
                                
                            }
                            
                        } else {
                            
                            break;
                            
                        }
                        
                    }
                    
                }
                
            }
            
        }
        
    }
    
    if(!result) {
        
        printf("Não foi encontrada a palavra \"%s\"", palavra);
        
    }

    return 0;
}
