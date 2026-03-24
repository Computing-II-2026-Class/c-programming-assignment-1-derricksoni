/*name:MULIIKA DERRICK*/
/*Student number:25/U /BIO/05297/PD*/
#include <stdio.h>
int main(){
float  amount , fee_percent ,fee , total;
printf("enter amount to send:");
scanf("%f",&amount);
printf("enter transaction fee(%%):");
scanf("%f",&fee_percent );
fee=(fee_percent /100)*amount;
total= amount+fee;
printf("\nTransaction fee:%.2f UGX\n",fee);
printf("total deducted: %.2f\n");
return 0;
 }

