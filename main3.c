// C program to implement
// the above approach
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct list_tokens
{
    char str[20];
    char value[30];
};

void insert(struct list_tokens lista[],char str[],char value[],int i)
{
    
    strcpy(lista[i].str,str);
    printf("%s",lista[i].str);
    strcpy(lista[i].value,value);
    printf("%s\n",lista[i].str);

    return;
}


int keyword(char* str,struct list_tokens lista[],int i)
{
    if(strcmp(str,"program"))
    {
       insert(lista,"program","keyword",i);
       return 1;
    }
    
    else if(strcmp(str,"begin"))
    {
        puts("Here");
        return 2;
    }

    else if(strcmp(str,"procedure"))
    {
        return 3;
    }

    else if(strcmp(str,"function"))
    {
        return 4;
    }

    else if(strcmp(str,"read"))
    {
        return 5;
    }

    else if(strcmp(str,"write"))
    {
        return 6;
    }

    else if(strcmp(str,"for"))
    {
        return 7;
    }
    
    else if(strcmp(str,"to"))
    {
        return 8;
    }
    
    else if(strcmp(str,"do begin"))
    {
        return 9;
    }

    else if(strcmp(str,"do begin"))
    {
        return 10;
    }

    else if(strcmp(str,"then begin"))
    {
        return 11;
    }

    else if(strcmp(str,"end"))
    {
        return 12;
    }


    
}

void prin_struct(struct list_tokens lista[],int i,int n)
{
    for(int i = 0;i < n;i++)
    {
        printf("%s",lista[i].str);
        printf("%s\n",lista[i].value);
    }
    return;
}

// Driver code
int main()
{
    FILE* ptr;
    char str[50];
    ptr = fopen("exemplo.txt", "a+");
    int i = 0;
    struct list_tokens lista[10];
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
 
    while (fgets(str, 50, ptr) != NULL) {
        printf("%d\n",keyword(str,lista,i));
        int i = i + 1;
        
    }
    fclose(ptr);
    
   //prin_struct(lista,0,3);
    
    
    
    return 0;
}