#include <stdio.h>

// Declaring the used functions
void afisare(int number);

int main()
{    
    int  n;
    // Asking the user to type a number until he types a valid one
    do
    {
        printf("Introduceti valorea numarului natural N: \n");
        scanf("%d" , &n);
    }
    while(n < 1);
    
    afisare(n);
}


// Checking if the number is divisible with 7 , 11 , both or none of those values and printing the appropriate thing
void afisare(int number)
{
    for(int i = 1 ; i <= number ; i++)
        if(i % 7 == 0 && i % 11 != 0)
            printf("Merry ");
        else if(i % 11 == 0 && i % 7 != 0)
            printf("Christmas ");
        else if(i % 7 == 0 && i % 11 == 0)
            printf("MerryChristmas ");
        else
            printf("%i " , i);
}