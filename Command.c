#include<stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    printf("Number of coomand line argument are :%d\n",argc);

    for(i = 0; i < argc; i++)
    {
        printf("%s\n",argv[i]);
    }
    return 0;

}