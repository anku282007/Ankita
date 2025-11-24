#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct appointment {
    char name[50];
    int age;
    char gender[10];
    char doctor[50];
    char date[20];
};

void addAppointment() {
    struct appointment a;
    FILE *fp = fopen("appointments.txt", "a");

    printf("\nEnter patient name: ");
    scanf(" %[^\n]", a.name);

    printf("Enter age: ");
    scanf("%d", &a.age);

    printf("Enter gender: ");
    scanf(" %[^\n]", a.gender);

    printf("\nAvailable Doctors:\n");
    printf("1. Dr. Raj (Cardiologist)\n");
    printf("2. Dr. Anita (Dentist)\n");
    printf("3. Dr. Vivek (Orthopedic)\n");

    int choice;
    printf("Choose doctor (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: strcpy(a.doctor, "Dr. Raj (Cardiologist)"); break;
        case 2: strcpy(a.doctor, "Dr. Anita (Dentist)"); break;
        case 3: strcpy(a.doctor, "Dr. Vivek (Orthopedic)"); break;
        default: strcpy(a.doctor, "General Doctor"); break;
    }

    printf("Enter appointment date (DD/MM/YYYY): ");
    scanf(" %[^\n]", a.date);

    fprintf(fp, "%s,%d,%s,%s,%s\n", a.name, a.age, a.gender, a.doctor, a.date);
    fclose(fp);

    printf("\n✔ Appointment booked successfully!\n");
}

void viewAppointments() {
    FILE *fp = fopen("appointments.txt", "r");
    struct appointment a;
    if (!fp) {
        printf("\nNo appointments found!\n");
        return;
    }
    printf("\n===== Booked Appointments =====\n");
    char line[200];

    while (fgets(line, sizeof(line), fp)) {
        sscanf(line, "%[^,],%d,%[^,],%[^,],%[^\n]", 
               a.name, &a.age, a.gender, a.doctor, a.date);
        printf("\nPatient Name: %s\nAge: %d\nGender: %s\nDoctor: %s\nDate: %s\n",
               a.name, a.age, a.gender, a.doctor, a.date);
    }

    fclose(fp);
}

int main() {
    int choice;

    while (1) {
        printf("\n======= HOSPITAL APPOINTMENT SYSTEM =======");
        printf("\n1. Book Appointment");
        printf("\n2. View All Appointments");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addAppointment(); break;
            case 2: viewAppointments(); break;
            case 3: printf("\nThank you!\n"); exit(0);
            default: printf("\nInvalid choice! Try again.\n");
        }
    }
    return 0;
}
