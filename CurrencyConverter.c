#include <stdio.h>

int main(void) {
    //Var definition
    float dollars,toGbp,toJpy,Fee;

    //Ask for amount input
    printf("Please input the total amount of US Dollars:");
    scanf("%f",&dollars);

    //Calulate fee amount
    Fee = dollars/10;

    //Print Fee amount
    printf("Fee (10%): ");
    printf("%f\n",Fee);

    //Convert 1/2 of dollars after tax into jap and pound
    toGbp = ((dollars-(dollars/10))/2)*0.79;
    toJpy = ((dollars-(dollars/10))/2)*127.65;


    //Output after conversion
    printf("You get:\n");
    printf("%f GBP\n",toGbp);
    printf("%f JPY",toJpy);

    return 0;
}
