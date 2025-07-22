#include <stdio.h>

int main() {
    // Create int variable and initialize with a value
    int temperature;
    printf("Hows the weather?: ");
    scanf("%d", &temperature);
    // Use if statements to check temperature ranges
    if (temperature > 30) {
        printf("It's a hot day!\n");
    }
    else if (temperature >= 20 && temperature < 30) {
        printf("The weather is nice.\n");
    }
    else if (temperature < 20) {
        printf("It's a bit cold today.\n");
    
    }
    return 0;
}
