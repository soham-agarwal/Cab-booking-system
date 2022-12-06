#include <stdio.h>
#include <strings.h>
int main()
{
    char name[64], address_p[32], address_d[32];
    char time_am[3] = "am";
    char time_pm[3] = "pm";
    char vehicle, timing[2], place, confirmation;
    int time, distance, total_cost;
    int b_i = 15, b_s = 12, b_w = 10;
    int b_t = 15, b_d = 12, b_z = 10;
    int result;
    printf("Enter your name \n");
    scanf("%s", &name);
    printf("Enter your pickup address \n");
    scanf("%s", &address_p);
    printf("Enter your drop address \n");
    scanf("%s", &address_d);
    printf("Enter your required timing \n");
    scanf("%d", &time);
    printf("Enter the approximate distance for your ride \n");
    scanf("%d", &distance);
    if (distance > 30)
    {
        printf("This ride cannot be provided !!! \n ");
    }
    else
    {
        printf("Enter am or pm \n");
        scanf("%s", &timing);
        result = strcasecmp(timing, time_am);
        if (result == 0)
        {
            printf("Select your vehicle from Innova (I), Skoda (S), WagonR (W) \n");
            scanf(" %c", &vehicle);
        }
        result = strcasecmp(timing, time_pm);
        if (result == 0)
        {
            printf("Select your vehicle from Toyota (T),Duster (D),Swift Dezire (Z) \n");
            scanf(" %c", &vehicle);
        }
        switch (vehicle)
        {
        case 'i':
        case 'I':
            printf("The base price for 1 km is 15 \n");
            total_cost = b_i * distance;
            printf("The total cost for %d distance will be %d \t", distance, total_cost);
            break;
        case 's':
        case 'S':
            printf("The base price for 1 km is 12 \n");
            total_cost = b_s * distance;
            printf("The total cost for %d distance will be %d \t", distance, total_cost);
            break;
        case 'w':
        case 'W':
            printf("The base price for 1 km is 10 \n");
            total_cost = b_w * distance;
            printf("The total cost for %d distance will be %d \t", distance, total_cost);
            break;
        case 't':
        case 'T':
            printf("The base price for 1 km is 15 \n");
            total_cost = b_t * distance;
            printf("The total cost for %d distance will be %d \t", distance, total_cost);
            break;
        case 'd':
        case 'D':
            printf("The base price for 1 km is 12 \n");
            total_cost = b_d * distance;
            printf("The total cost for %d distance will be %d \t", distance, total_cost);
            break;
        case 'z':
        case 'Z':
            printf("The base price for 1 km is 10 \n");
            total_cost = b_z * distance;
            printf("The total cost for %d distance will be %d \t", distance, total_cost);
            break;
        }
        printf("\nPress 'Y' or 'N' for confirmation \n");
        scanf(" %c", &confirmation);
        switch (confirmation)
        {
        case 'y':
        case 'Y':
            printf("Your ride will arrive in 20 minutes enjoy your ride !!!");
            break;
        case 'n':
        case 'N':
            printf("Your ride has been cancelled enjoy your day !!!");
            break;
        }
    }
}
