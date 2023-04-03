#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    
    unsigned int len;

    char *buffer;

}string;

string* string_new(char* data){
    
    int strLen = strlen(data);

    string *pString = 0;
    pString = (char*)malloc(sizeof(string));

    if(strlen(data) == 0)
    {
        pString->len = 0;
        pString->buffer = 0;
    }
    else
    {

        pString->buffer = malloc((strLen+1)*sizeof(char));
        memcpy(pString->buffer,data,(strLen+1)*sizeof(char));

        pString->len = strlen(data);
    }

    return pString;
}

int string_append(string *newString, char *toAppend){
    
    char* buffer2 = (char*)malloc(newString->len + strlen(toAppend)*sizeof(char));

    if(!buffer2){
        return -1;
    }
        memcpy(buffer2,newString->buffer,(newString->len) * sizeof(char));
        memcpy(buffer2+newString->len,toAppend,(strlen(toAppend)+1) * sizeof(char));

        free(newString->buffer);
        newString->buffer = buffer2;
        newString->len += strlen(toAppend);
        return strlen(toAppend);
}

int main(){
    
    string *a = string_new("hello");
     printf("%s\n",a->buffer);
    printf("%i\n",string_append(a,"world"));
    printf("%s\n",a->buffer);
}
