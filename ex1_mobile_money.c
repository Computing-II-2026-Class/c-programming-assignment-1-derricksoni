/* Name: MULIIKA DERRICK */
/* Student Number: 25/U/BIO/05297/PD */

#include <stdio.h>

int main(void)
{

   int amount_to_send;
    float transaction_fee;
    int total_aamount_deducted;

   printf("ENTER AMOUNT TO SEND :  ");
    scanf("%d", &amount_to_send);

    printf("ENTER TRANSACTION FEE :  ");
    scanf("%f", &transaction_fee);s

    float fee= transaction_fee*amount_to_send/100;

    printf("YOUR FEE AMOUNT IS : %f and  ",fee);

    float amount_deducted = amount_to_send+fee;
    printf("AMOUNT DEDUCTED IS : %f", amount_deducted);


    

    return 0;
}
