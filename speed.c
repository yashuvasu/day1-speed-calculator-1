#include <stdio.h>

int main() {
    float distance, time, speed, speed_ms;

    printf("Enter distance (in km): ");
    scanf("%f", &distance);

    printf("Enter time (in hours): ");
    scanf("%f", &time);

    speed = distance / time;
    speed_ms = speed * (1000.0 / 3600.0);

    printf("\nSpeed = %.2f km/h", speed);
    printf("\nSpeed = %.2f m/s", speed_ms);

    return 0;
}
