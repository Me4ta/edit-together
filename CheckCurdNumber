#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    printf("Give me your credit card number: ");
    long long cardNumber = GetLongLong();
    int lengthNumber = floor(log10(cardNumber)) + 1 - 1;// deleted 1 for cutting digits
    long long power = pow (10, lengthNumber);
    
    int sumDigits = 0;
    int firstDigit = 0;
    int secondDigit = 0;
    int i = 0;
    long long curdNumberLeft = 0;
    
    //check the number - delete
    printf("Your card is %lld and length is %lld\n", cardNumber, power);
    curdNumberLeft = cardNumber; //restuta is cool, love him - I love him already )))
    for (i = 0; i <= lengthNumber; i++)
    {
        firstDigit = curdNumberLeft/power;
        printf("%i\n", firstDigit);
        curdNumberLeft = curdNumberLeft - firstDigit * power;
        power = power/10;
        if (power >= 10)
        {
            secondDigit = curdNumberLeft/power;
            printf("%i\n", secondDigit);
            curdNumberLeft = curdNumberLeft - secondDigit * power;
            secondDigit = secondDigit * 2;
            power = power/10;
            if (secondDigit > 9)
                secondDigit = secondDigit / 10 + secondDigit - (secondDigit / 10) * 10; //ask Restuta! stupid girl!!!       
        }
        else
            secondDigit = 0;
        sumDigits = sumDigits + firstDigit + secondDigit;
        printf("Sum is %i\n", sumDigits);
    }
    printf("Sum is %i\n", sumDigits);
    
    
    
    //это старый первый вариант. не читай
    /**
    *convert to char
    *char cnumber[256];
    *sprintf(cnumber, "%lld",inumber);
    
    *int s = 0;
    *int doublenumber = 0;
    *
    
    *int d = 0.0;
    *for (int i = 0; i < 16; i++)
    *{
    *    printf("%c ", cnumber[i]);
    *    if (cnumber[i] >= 49)
    *    {
    *        doublenumber = (cnumber[i]-'0') * 2;
    *        //if (doublenumber > 9)
    *        {
    *            //doublenumber = doublenumber[0]+doublenumber[1];
    *            d = doublenumber;
    *            //d = d / 10.0 + d % 10.0;
    *        }
    *        printf("is %i ", doublenumber);
    *        s = s + doublenumber;
    *        printf("Sum is %i\n", s);
    *    }
    *}*/
    
}
