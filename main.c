
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct list_tokens // Struct para salvar 
{
    char str[20];
    char value[30];
};

void continua(char acumula[],struct list_tokens lista[],int i)
{
    while(acumula[i]!= ';')
    {
        lista[1].str[i-7] = acumula[i];
        i = i + 1;
    }
    strcpy(lista[1].value,"ID");
    lista[2].str[0] = ';';
    strcpy(lista[2].value,"Delimiter");
    return;
    
}

void all(char acumula[],struct list_tokens lista[],int i,int n)
{
    while(acumula[i] != '.')
    {
    //printf("%c",acumula[i]);
       if(acumula[i] == 'v')
       {
        if(acumula[i+1] == 'a')
        {
            if(acumula[i+2] == 'r')
            {
                strcpy(lista[n].str,"var");
                strcpy(lista[n].value,"keyword");
                //printf("%s\n",lista[n].str);
                //printf("%s\n",lista[n].value);

            }
        }
       }


       else if(acumula[i] == ' ')
       {
          strcpy(lista[n].str,"Empty");
          strcpy(lista[n].value,"delimiter");
         //printf("%s\n",lista[n].str);
         //printf("%s\n",lista[n].value);
       }

       else if(acumula[i] == 'p')//Continua daqui
       { 
          if(acumula[i+1] == 'r')
          {
            if(acumula[i+2] == 'o')
            {
                if(acumula[i+3] == 'c')
                {
                    if(acumula[i+4] == 'e')
                    {
                        if(acumula[i+5] == 'd')
                        {
                            if(acumula[i+6] == 'u')
                            {
                                if(acumula[i+7] == 'r')
                                {
                                    if(acumula[i+8] == 'e')
                                    {
                                        strcpy(lista[n].str,"procedure");
                                        strcpy(lista[n].value,"keyword");
                                        
                                    }
                                }
                            }
                        }
                    }
                }
            }
          } 
       }

       else if(acumula[i] == 'b')
       { //puts("Here");
        if(acumula[i+1] == 'e')
        {
            if(acumula[i+2] == 'g')
            {
                if(acumula[i+3] == 'i')
                {
                    if(acumula[i+4] == 'n')
                    { //puts("hERE");
                        strcpy(lista[n].str,"begin");
                        strcpy(lista[n].value,"keyword");
                        //printf("%s\n",lista[n].str);
                        //printf("%s\n",lista[n].value);
                    }
                }
            }
        }
       }
       else if(acumula[i] == 'e')
       {
            if(acumula[i+1] == 'n')
            {
                if(acumula[i+2] == 'd')
                {
                    strcpy(lista[n].str,"end");
                    strcpy(lista[n].value,"keyword");
                    //printf("%s\n",lista[n].str);
                    //printf("%s\n",lista[n].value);
                }
            }
       }

       else if(acumula[i] == 'i')
       {
            if(acumula[i+1] == 'n')
            {
                if(acumula[i+2] == 't')
                {
                    if(acumula[i+2] == 'e')
                    {
                        if(acumula[i+3] == 'g')
                        {
                            if(acumula[i+4] == 'e')
                            {
                                if(acumula[i+5] == 'r')
                                {
                                    strcpy(lista[n].str,"integer");
                                    strcpy(lista[n].value,"type");
                                   
                                }
                            }
                        }
                    }
                }
            }
       }
       else if(acumula[i] == '(')
       {
        strcpy(lista[n].str,"Quotation");
        strcpy(lista[n].value,"delimiter");
        
        while(acumula[i] != ')')
        {

        }

       }
       else if(acumula[i] == '[')
       {
        strcpy(lista[n].str,"Quotation");
        strcpy(lista[n].value,"delimiter");
       }

       else if(acumula[i] == ',')
       {

        strcpy(lista[n].str,"Comman");
        strcpy(lista[n].value,"delimiter");
       }
       
        else if()


       i = i + 1;
       n = n + 1;
    }
   
}

void start(char acumula[],struct list_tokens lista[],int i)
{
    char program;
    if(acumula[0] == 'p')
    {
        if(acumula[1] == 'r')
        {
            if(acumula[2] == 'o')
            {
                if(acumula[3] == 'g')
                {
                    if(acumula[4] == 'r')
                    {
                        if(acumula[5] == 'a')
                        {
                            if(acumula[6] == 'm')
                            {
                              strcpy(lista[0].str,"program");
                              strcpy(lista[0].value,"keyword");
                              return;
                            }
                        }
                    
                    }
                }
            }
        }
    }

    

}


// Driver code
int main()
{
    FILE* ptr;
    char str;
    ptr = fopen("exemplo.txt", "r");
    int i = 0;
    struct list_tokens lista[100];
    char acumula[200];
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
 
    while ((str = fgetc(ptr))!= EOF) 
    {
        
        //printf("Valor de i:%d ",i);
        //printf("%c\n",str);
        acumula[i] = str;
        
        i = i + 1;
    }
    fclose(ptr);
    
   start(acumula,lista,0);
   //printf("%s\n",lista[0].str);
   //printf("%s\n",lista[0].value);
   continua(acumula,lista,7);
   //printf("%s\n",lista[1].str);
   //printf("%s\n",lista[1].value);
   //printf("%s\n",lista[2].str);
   //printf("%s",lista[2].value);
   all(acumula,lista,0,3);
    
    
    
    return 0;
}
