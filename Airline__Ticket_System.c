#include <stdio.h>
#include <time.h>
#include <string.h>

int main()
{

    // 1. Welcome Screen
    printf("*************************************************\n");
    printf("WELCOME TO SMART AIRLINE TICKET FARE SYSTEM\n");
    printf("*************************************************\n");

    // 2. Display Current Date & Time
    time_t tm;
    time(&tm);
    printf("Current Date/Time = %s\n", ctime(&tm));

    // Passenger details input
    printf("--- Passenger Details ---\n");

    char name[20], class_type[20], travel_month[20], meal_service[10], frequent_flyer[10];
    int age, luggage;
    int Ticket_price = 0;
    float final_price = 0;

    printf("Name: ");
    scanf("%s", name);
    printf("Age: ");
    scanf("%d", &age);
    printf("Class (Business/Economy): ");
    scanf("%s", class_type);
    printf("Travel Month: ");
    scanf("%s", travel_month);
    printf("Luggage (in KG): ");
    scanf("%d", &luggage);
    printf("Meal Service (Yes/No): ");
    scanf("%s", meal_service);
    printf("Frequent Flyer (Yes/No): ");
    scanf("%s", frequent_flyer);

    printf("\n--- Fare Breakdown ---\n");

    // ***************************Base fare (Busniess,Economy)*******************

    if (strcmp(class_type, "Business") == 0 || strcmp(class_type, "business") == 0) // in this line of code strcmp() is used to comapare pointer and integer.
    {
        Ticket_price = 8000;
        printf("Base Fare (Business)         = %d\n", Ticket_price);
    }
    else
    {
        Ticket_price = 5000;
        printf("Base Fare (Economy)          = %d\n", Ticket_price);
    }

    //*******************************Age Discount**********************************************

    float discount = 0;
    if (age < 12)
    {
        discount = Ticket_price * 0.50;
        printf("Childen Discount (50%%) = -%.0f\n", discount);
    }
    else if (age >= 60)
    {
        discount = Ticket_price * 0.30;
        printf("Senior Citizen Discount (30%%) = -%.0f\n", discount);
    }
    else
    {
        discount = 0;
        printf("No Discount (0%%) = %.0f\n", discount);
    }
    //******************************Additional charge******************************************

    // Extra luggage charge
    int extra_charge = 0;
    if (luggage > 20)
    {
        extra_charge = 1000;
        printf("Extra Luggage Charge          = +%d\n", extra_charge);
    }else{
    extra_charge = 0;
    printf("Extra Luggage Charge          = +%d\n", extra_charge);
    }
    // Meal service charge
    int meal_charge = 0;
    if (strcmp(meal_service, "Yes") == 0 || strcmp(meal_service, "yes") == 0)
    {
        meal_charge = 500;
        printf("Meal Service Charge           = +%d\n", meal_charge);
    }
    else{
        meal_charge = 0;
    printf("Meal Service Charge           = +%d\n", meal_charge);
    }
    //************************** Frequent flyer discount*****************************************
    float flyer_discount = 0;
    if (strcmp(frequent_flyer, "Yes") == 0 || strcmp(frequent_flyer, "yes") == 0)
    {
        flyer_discount = (Ticket_price - discount) * 0.10;
        printf("Frequent Flyer Discount (10%%) = -%.0f\n", flyer_discount);
    }
    else{
        flyer_discount = 0;
    }
    // ***********************Peak season surcharge (December = peak)*****************************
    float peak_surcharge = 0;
    if (strcmp(travel_month, "December") == 0 || strcmp(travel_month, "december") == 0)
    {
        peak_surcharge = (Ticket_price - discount) * 0.15;
        printf("Peak Season Surcharge (15%%)   = +%.0f\n", peak_surcharge);
    }else{
    peak_surcharge = 0;
    printf("Peak Season Surcharge (15%%)   = +%.0f\n", peak_surcharge);
      }
        // ******************************Final ticket price*********************************************
    final_price = Ticket_price - discount + extra_charge + meal_charge - flyer_discount + peak_surcharge;

    printf("---------------------------------------------\n");
    printf("Final Ticket Price = Rs. %.0f\n", final_price);
    printf("---------------------------------------------\n");
    printf("THANK YOU FOR USING SMART AIR LINE.");
    getchar();
    
    return 0;
    }
