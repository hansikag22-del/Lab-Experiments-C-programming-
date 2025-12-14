#include <stdio.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address a;

    printf("Enter your name: ");
    scanf(" %[^\n]", a.name);

    printf("Enter your hostel address: ");
    scanf(" %[^\n]", a.hostel_address);

    printf("Enter your city: ");
    scanf(" %[^\n]", a.city);

    printf("Enter your state: ");
    scanf(" %[^\n]", a.state);

    printf("Enter your ZIP code: ");
    scanf(" %[^\n]", a.zip);

    printf("\n--- Present Address ---\n");
    printf("Name: %s\n", a.name);
    printf("Hostel Address: %s\n", a.hostel_address);
    printf("City: %s\n", a.city);
    printf("State: %s\n", a.state);
    printf("ZIP: %s\n", a.zip);

    return 0;
}
