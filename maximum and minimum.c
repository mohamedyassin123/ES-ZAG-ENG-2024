#include <stdio.h>

int main() {
    int values[10];
    int min, max;

    for (int values_index = 0; values_index < 10; values_index++) {
        printf("Enter value %d: ", values_index + 1);
        scanf("%d", &values[values_index]);
        if (values_index == 0)
        {
            min = max = values[0];
        } else{
            if (values[values_index] < min) {
                min = values[values_index];
            }
            if (values[values_index] > max) {
                max = values[values_index];
            }
        }
    }
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    return 0;
}
