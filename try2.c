#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void sendtoLCD(char []);

void main()
{
    char* x = (char*)malloc(16);

    printf("%s \n", x+1);

    char input[] = "We're no strangers to love, you know the rules and so do I, A full commitments what I'm thinking of, I just wanna tell you how I'm feeling, Never gonna give uyou up, never gonna let you down, never gonna run aaround and Deseeert you";
    char i1[17];
    printf("%ld", strlen(input));
    for(int i = 0; i+16<strlen(input);i++)
        {
            memcpy(i1, input+i, 16);
            i1[17] = '\0';
            sendtoLCD(i1);
        }
}


void sendtoLCD(char x[])
{
    printf("%s\n", x);
    // printf("%ld\n", strlen(x));
}