#include <stdio.h>

struct Employee {
    char name[50];
    float basicPay, grossPay;
};

int main() {
    struct Employee emp[100];
    int i, n;

    printf("Enter number of employees (max 100): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter employee %d name: ", i + 1);
        scanf("%s", emp[i].name);
        printf("Enter basic pay: ");
        scanf("%f", &emp[i].basicPay);

        float DA = 0.52 * emp[i].basicPay;
        emp[i].grossPay = emp[i].basicPay + DA;
    }

    printf("\n--- Employee Gross Salary Details ---\n");
    for(i = 0; i < n; i++) {
        printf("Name: %-15s  Gross Salary: %.2f\n", emp[i].name, emp[i].grossPay);
    }

    return 0;
}
