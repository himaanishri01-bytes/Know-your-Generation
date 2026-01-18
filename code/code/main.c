#include <stdio.h>

int main() {
    int year;

    printf("Enter your birth year (1900 - 2026): ");
    scanf("%d", &year);
    printf("\n") ;
    // Validation for the requested range
    if (year < 1900 || year > 2026) {
        printf("Year out of range. Please enter a year between 1900 and 2026.\n");
    } 
    else if (year >= 1901 && year <= 1927) {
        printf("Generation: The Greatest Generation\n");
    } 
    else if (year >= 1928 && year <= 1945) {
        printf("Generation: The Silent Generation\n");
    } 
    else if (year >= 1946 && year <= 1964) {
        printf("Generation: Baby Boomers\n");
    } 
    else if (year >= 1965 && year <= 1980) {
        printf("Generation: Generation X\n");
    } 
    else if (year >= 1981 && year <= 1996) {
        printf("Generation: Millennials (Gen Y)\n");
    } 
    else if (year >= 1997 && year <= 2012) {
        printf("Generation: Generation Z\n");
    } 
    else if (year >= 2013 && year <= 2024) {
        printf("Generation: Generation Alpha\n");
    } 
    else if (year >= 2025) {
        printf("Generation: Generation Beta (Beginning)\n");
    } 
    else {
        // Specifically for the year 1900 or edge cases
        printf("Generation: Lost Generation / Early 20th Century\n");
    }

    return 0;
}
