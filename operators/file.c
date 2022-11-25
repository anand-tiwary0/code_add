/*to deal with various operations all there is special data structure called 
FILE and various file realted functions are defined in stdio.h 
fopen("file_name","mode") returns file pointer pointing to opened file
fclose(file_pointer) closes file being pointed by file_pointer
fprintf(file_pointer "format string",arguments); - prints formatted string in file
fgetc(file_pointer) - reads and returns next character from file being pointed to by file pointer
fputc(charcter_to_put,file_pointer)
fread(buffer_pointer_where_to_store, size_of_each_unit, quantity_to_read, file_pointer_from_to_read)
fwrite(buffer_from_where_to_get_data, size_of_each_unit, quantity_to_read, file_pointer_where_to_put)*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *t = fopen("file","a");
    FILE *q = NULL;
    if(t == NULL)
    {
        printf("can't point to file \n");
        return 1;
    }
    char *s;
    s = malloc(20*sizeof(char));
    printf("enter name : ");
   // scanf("%s",s);
    scanf("%c",t);

    //fwrite(s,sizeof(char),,t);
    fputc('\n' , t);
    fclose(t);

    return 0;
}

