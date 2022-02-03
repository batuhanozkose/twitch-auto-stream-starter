#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //Twitch Auto Stream Starter

    int userselection;

    printf("Twitch Auto Stream Starter\n");
    printf("By: senius'dev\n");
    printf("\n");

    printf("Select the user you want to start automatic broadcasting from the list.\n");

    printf("1. Sizophren\n");
    printf("2. Saamtwo\n");
    printf("3. Wtcn\n");
    printf("4. Kendine Muzisyen\n");
    printf("5. Elraen\n");

    printf("\n");

    printf("Write the number of the user you want to start broadcasting from: ");
    scanf("%d", &userselection);

    if (userselection == 1) {
        system("start https://twitch.tv/sizophren");
    } else if (userselection == 2) {
        system("start https://twitch.tv/saamtwo");
    } else if (userselection == 3) {
        system("start https://twitch.tv/wtcn");
    } else if (userselection == 4) {
        system("start https://twitch.tv/kendinemuzisyen");
    } else if (userselection == 5) {
        system("start https://twitch.tv/elraenn");
    } else {
        printf("Invalid selection.\n");
    }
}
