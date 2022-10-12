//Created by Ruban on 12.10.2022
#include <stdio.h>
#include <conio.h>
int main() {
    int d;
    printf("Enter a number for the day: ");
    scanf("%d",&d);
    switch (d) {
        case 1:
            printf("\nIt is Monday");
            break;
        case 2:
            printf("\nIt is Tuesday");
            break;
        case 3:
            printf("\nIt is Wednesday");
            break;
        case 4:
            printf("\nIt is Thursday");
            break;
        case 5:
            printf("\nIt is Friday");
            break;
        case 6:
            printf("\nIt is Saturday");
            break;
        case 7:
            printf("\nIt is Sunday");
            break;
        default:
            printf("\nError Invalid");

    }
    getch();
}
