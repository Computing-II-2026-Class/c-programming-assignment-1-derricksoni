//MULIIKA DERRICK
//25/U/BIO/05297/PD

#include <stdio.h>

int main() {
    float distance, fuel, efficiency;

    printf("Enter distance travelled (km): ");
    scanf("%f", &distance);

    printf("Enter fuel used (litres): ");
    scanf("%f", &fuel);

    efficiency = distance / fuel;

    printf("\nFuel efficiency: %.2f km/l\n", efficiency);

    return 0;
}
