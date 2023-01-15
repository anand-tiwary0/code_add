 #include <stdio.h>
    #include <string.h>
    int main()
    {
        char *str =  "Sanfoundry.com\0" "training classes";;
        char c = 'x';
        char ary[1];
        ary[0] = c;
        printf("%d %d", strlen(str), strlen(ary));
        printf("%c",(*(str+16)));
        printf("thisisyiy\rexample of carriage\rcarr return which moves the cursor back \n");
        return 0;
    }