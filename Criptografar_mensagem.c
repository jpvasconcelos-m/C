#include <stdio.h>
#include <string.h>
char* decodificar(int chave,char* msg){
    int tam;
    tam = strlen(msg);
    for(int i=0;i<tam;i++){
        if (msg[i]==' ')
            continue;
        else   
        msg[i]=msg[i]-chave; //volta cada caractere da string para letras x posições atrás na ordem alfabética.
    }
    return msg;
}

char* codificar(int chave,char* msg){
    int tam;
    tam = strlen(msg);
    for(int i=0;i<tam;i++){
        if (msg[i]==' ')
            continue;
        else   
        msg[i]=msg[i]+chave; //Avança cada caractere da string para letras x posições a frente na ordem alfabética.
    }
    return msg;
}

int main(){
    
    int N1 = 3; 
    int N2 = 5; //Chaves para criptografar/descriptografar a mensagem.
    char mensagem1[]="Sdodflr gr Sodqdowr";
    char mensagem2[]="Rua da moeda";

    
    printf("A mensagem para decodificar: %s", mensagem1);
    printf("\n--> Decodificada usando a chave %d- eh: %s",N1, decodificar(N1,mensagem1));
    
    printf("\n\nMensagem para ser codificada: %s", mensagem2);
    printf("\n-->Codificada utilizando a chave %d+ se torna: %s",N2, codificar(N2,mensagem2));
    
}
