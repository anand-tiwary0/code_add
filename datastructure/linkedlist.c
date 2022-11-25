#include <stdio.h>
#include <stdlib.h>  //for atoi() and malloc()

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(int argc, char *argv[])
{
    if(argc == 1)
    {
        return 1;
    }

    node *list = NULL;
    //iterate over command line arguments
    for (int i =1 ; i<argc; i++)
    {
        int number = atoi(argv[i]);
        node *n = malloc(sizeof(node));
        if(n == NULL)
        {
            return 1;
        }

        n -> number = number;
        n -> next = NULL;
        n -> next = list;
        list = n;
    }

    //iteration and printing data in linked list
    for(node *ptr= list; ptr != NULL; ptr = ptr -> next)
    {
        printf("%d \n",ptr -> number);
    }

    //freeing all memory allocations
    node *temp = list->next;
    for(node *ptr = list; ptr != NULL; ptr = temp )
    {
        node *temp = ptr -> next;
        free(ptr);
    }

    return 0;
}
