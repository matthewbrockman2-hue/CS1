#include <stdio.h>

int main(void) {
    float dollars=1.0;
    printf("Please input the total amount of US Dollars:");
    scanf("%f",&dollars);
    float helper = dollars/10;
    printf("Fee (10%): ");
    printf("%f\n",helper);
    printf("You get:\n");
    float contogbp = ((dollars-(dollars/10))/2)*0.79;
    float contojpy = ((dollars-(dollars/10))/2)*127.65;
    printf("%f GBP\n",contogbp);
    printf("%f JPY",contojpy);

    return 0;
}
