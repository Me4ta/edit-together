#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    printf("Give me your credit card number: ");
    long long cardNumber = GetLongLong();
    int lengthNumber = floor(log10(cardNumber));// length of card number without 1 digit.
    long long power = pow (10, lengthNumber);
    
    int sumDigits = 0;
    int firstDigit = 0;
    int secondDigit = 0;
    int i = 0;
    long long curdNumberLeft = 0;
    string typeCard = "INVALID";
    
    //check the number - delete
    //printf("Your card is %lld and length is %lld\n", cardNumber, power);
    curdNumberLeft = cardNumber; //restuta is cool, love him - I love him already )))
    for (i = 0; i <= (lengthNumber + 1); i = i + 2)
    {
        firstDigit = curdNumberLeft/power;
        printf("%i", firstDigit);
        curdNumberLeft = curdNumberLeft - firstDigit * power;
        power = power/10;
        if (power >= 10)
        {
            secondDigit = curdNumberLeft/power;
            printf("%i", secondDigit);
            curdNumberLeft = curdNumberLeft - secondDigit * power;
            secondDigit = secondDigit * 2;
            power = power/10;
            if (secondDigit > 9)
                secondDigit = secondDigit / 10 + secondDigit - (secondDigit / 10) * 10; //ask Restuta! stupid girl!!!       
        }
        else
            secondDigit = 0;
        if (i == 0)
        {
            if (firstDigit == 3 && (secondDigit == 4 || secondDigit == 7))
                typeCard = "AMEX";
            if (firstDigit == 5 && secondDigit > 0 && secondDigit < 6)
                typeCard = "MASTERCARD";
            if (firstDigit == 4)
                typeCard = "VISA";
        }
        sumDigits = sumDigits + firstDigit + secondDigit;
    }
    
    if (sumDigits % 10 > 0)
       typeCard = "INVALID";
    //printf("   Sum is %i\n", sumDigits);
    printf(" is %s\n", typeCard);

    
}
