/*
Owu - Tradutor de uwu e owo
Copyright (C) 2019 OnikenX

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/


//owo _ ; uwu .
#include <stdio.h>
#include <string.h>

void luwutonormal(){

    char letterStr[27][40];
    
    //defenindo as letras
    strcpy(letterStr[0],"uwu.owo.");//a
    strcpy(letterStr[1],"owo.uwu.uwu.uwu.");//b
    strcpy(letterStr[2],"owo.uwu.owo.uwu.");//c
    strcpy(letterStr[3],"owo.uwu.uwu.");//d
    strcpy(letterStr[4],"uwu.");//e
    strcpy(letterStr[5],"uwu.uwu.owo.uwu.");//f
    strcpy(letterStr[6],"owo.owo.uwu.");//g
    strcpy(letterStr[7],"uwu.uwu.uwu.uwu.");//h
    strcpy(letterStr[8],"uwu.uwu.");//i
    strcpy(letterStr[9],"uwu.owo.owo.owo.");//j
    strcpy(letterStr[10],"owo.uwu.owo.");//k
    strcpy(letterStr[11],"uwu.owo.uwu.uwu.");//l
    strcpy(letterStr[12],"owo.owo.");//m
    strcpy(letterStr[13],"owo.uwu");//n
    strcpy(letterStr[14],"owo.owo.owo.");//o
    strcpy(letterStr[15],"uwu.owo.owo.uwu.");//p
    strcpy(letterStr[16],"owo.owo.uwu.owo.");//q
    strcpy(letterStr[17],"uwu.owo.uwu.");//r
    strcpy(letterStr[18],"uwu.uwu.uwu.");//s
    strcpy(letterStr[19],"owo.");//t
    strcpy(letterStr[20],"uwu.uwu.owo.");//u
    strcpy(letterStr[21],"uwu.uwu.uwu.owo.");//v
    strcpy(letterStr[22],"uwu.owo.owo.");//w
    strcpy(letterStr[23],"owo.uwu.uwu.owo.");//x
    strcpy(letterStr[24],"owo.uwu.owo.owo.");//y
    strcpy(letterStr[25],"owo.owo.uwu.uwu.");//z
    strcpy(letterStr[26]," ");
    
    char stringado[10000][50],tradu[10000];
    int len;
    printf("largura(o numero de palavras entre espaços)e aseguir o codigo\n");
    fflush(stdin);
    scanf("%d",&len);
    //printf("digite o codigo:");
    for(int i=0;i<len;i++){
        fflush(stdin);
        scanf("%s",stringado[i]);
    }
    for(int i=0;i<len;i++){
    }
    //fazer a traduçao
    for(int i=0;i<len;i++){
        if(stringado[i][0]=='_'){
            tradu[i]='.';
            
        }
        else 
        for(int l=0;l<26;l++){
            if(!strcmp(stringado[i],letterStr[l])){
                tradu[i]=l+97;
            }
        }
    }
    printf("\ntradução:\n");
    //printf("len=%d\n",len);
    
    for(int i=0;i<len;i++){
        //tradu[i]=97;
        printf("%c",tradu[i]);   
    }printf("\n");

}



void normaltoluwu(){
    //printf("");
    char str1[10000];
    printf("digite a frase com apenas caracteres \ndo alfabeto ingles e utilize so \npontos para os espaços:\n");
    fflush(stdin);
    scanf(" %s",str1);   
    int len;
    len = strlen(str1);
    char str2[len][30];
    char letterStr[27][40];
    
    //defenindo as letras
    strcpy(letterStr[0],"uwu.owo.");//a
    strcpy(letterStr[1],"owo.uwu.uwu.uwu.");//b
    strcpy(letterStr[2],"owo.uwu.owo.uwu.");//c
    strcpy(letterStr[3],"owo.uwu.uwu.");//d
    strcpy(letterStr[4],"uwu.");//e
    strcpy(letterStr[5],"uwu.uwu.owo.uwu.");//f
    strcpy(letterStr[6],"owo.owo.uwu.");//g
    strcpy(letterStr[7],"uwu.uwu.uwu.uwu.");//h
    strcpy(letterStr[8],"uwu.uwu.");//i
    strcpy(letterStr[9],"uwu.owo.owo.owo.");//j
    strcpy(letterStr[10],"owo.uwu.owo.");//k
    strcpy(letterStr[11],"uwu.owo.uwu.uwu.");//l
    strcpy(letterStr[12],"owo.owo.");//m
    strcpy(letterStr[13],"owo.uwu");//n
    strcpy(letterStr[14],"owo.owo.owo.");//o
    strcpy(letterStr[15],"uwu.owo.owo.uwu.");//p
    strcpy(letterStr[16],"owo.owo.uwu.owo.");//q
    strcpy(letterStr[17],"uwu.owo.uwu.");//r
    strcpy(letterStr[18],"uwu.uwu.uwu.");//s
    strcpy(letterStr[19],"owo.");//t
    strcpy(letterStr[20],"uwu.uwu.owo.");//u
    strcpy(letterStr[21],"uwu.uwu.uwu.owo.");//v
    strcpy(letterStr[22],"uwu.owo.owo.");//w
    strcpy(letterStr[23],"owo.uwu.uwu.owo.");//x
    strcpy(letterStr[24],"owo.uwu.owo.owo.");//y
    strcpy(letterStr[25],"owo.owo.uwu.uwu.");//z
    

    for(int l=0;l<len;l++){
        str1[l]=tolower(str1[l]);
    }
    char letter;
    for (int i=0;i<len;i++)
    {
        if(str1[i]=='.'){
            strcpy(str2[i],"_");
        }else{
            for(int c=97;c<123;c++){
                letter=c;
                if(str1[i]==letter)strcpy(str2[i],letterStr[c-97]);
                
            }
        }
        


    }
    printf("frase digitada = %s  \nlargura = %d",str1,len);
    printf("\n");
    for(int i=0;i<len;i++){
        printf("%s ",str2[i]);
    }
    
}

int main ()
{
    printf("deseja coverter normal para luwu ou luwu para normal?\n1 - normal->luwu\n2 - luwu->normal\n");
    int select=0;
    fflush(stdin);
    scanf("%d",&select);
    if (select==1)normaltoluwu(); 
    else if (select==2)luwutonormal();
    else printf("1 ou 2 para alguma merda acontecer");
    printf("\n");
    return 0;
}
