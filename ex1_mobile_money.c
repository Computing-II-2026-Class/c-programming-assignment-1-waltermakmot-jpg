/* Name:Makmot Walter */
/* Student Number:U/2026/BIE/05296/PE*/

#include <stdio.h>

int main(void)
{
    float amount,fee_percent,fee_amount,total_deducted;
printf("Enter amount to send:");
scanf("%f",&amount);
printf("Enter transaction fee(%):");
scanf("%f",&fee_percent);
fee_amount = (fee_percent/100)*amount;
total_deducted =amount+fee_amount;
printf("Transaction fee:%.2f ugx\n",fee_amount);
printf("Total deducted:%.2fugx\n",total_deducted);

    return 0;
}
