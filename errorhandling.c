#include <stdio.h>       
#include <errno.h>       
#include <string.h> 
 
int main ()
{
    FILE *fp;
 
    /* 
        If a file, which does not exists, is opened,
        we will get an error
    */ 
    fp = fopen("IWillReturnError.txt", "r");
 
    printf("Value of errno: %d\n ", errno);
    printf("The error message is : %s\n", strerror(errno));
    perror("Message from perror");
 
    return 0;
}