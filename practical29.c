#include <stdio.h>
#include <string.h>

struct Coach {
    char name[50];
    int age;
    int experience;
};


struct Team {
    char teamName[50];
    char sportType[30];
    struct Coach coach;
};

int main() {
    struct Team teams[50];
    int n = 0, choice;
    char searchName[50];

    while (1) {
        printf("CHARUSAT SPORTS TEAM MANAGEMENT\n");
        printf("1. Add New Team\n");
        printf("2. Search Team by Name\n");
        printf("3. Display All Teams\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Team Name: ");
                scanf(" %s", teams[n].teamName);


                int duplicate = 0;
                for (int i = 0; i < n; i++) {
                    if (strcmp(teams[i].teamName, teams[n].teamName) == 0) {
                        duplicate = 1;
                        break;
                    }
                }
                if (duplicate) {
                    printf("Team already exists!\n");
                    break;
                }

                printf("Enter Sport Type: ");
                scanf("%s", teams[n].sportType);
                printf("Enter Coach Name: ");
                scanf("%s", teams[n].coach.name);
                printf("Enter Coach Age: ");
                scanf("%d", &teams[n].coach.age);
                printf("Enter Coach Experience : ");
                scanf("%d", &teams[n].coach.experience);

                n++;
                printf("Team added successfully!\n");
                break;

            case 2:
                printf("\nEnter Team Name to Search: ");
                scanf("%s", searchName);
                int found = 0;
                for (int i = 0; i < n; i++) {
                    if (strcmp(teams[i].teamName, searchName) == 0) {
                        printf("Team Found!\n");
                        printf("Team Name: %s\n", teams[i].teamName);
                        printf("Sport Type: %s\n", teams[i].sportType);
                        printf("Coach Name: %s\n", teams[i].coach.name);
                        printf("Coach Age: %d\n", teams[i].coach.age);
                        printf("Experience: %d years\n", teams[i].coach.experience);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Team not found!\n");
                break;

            case 3:
                printf(" All Teams\n");
                for (int i = 0; i < n; i++) {
                    printf("Team %d:\n", i + 1);
                    printf("Team Name: %s\n", teams[i].teamName);
                    printf("Sport Type: %s\n", teams[i].sportType);
                    printf("Coach Name: %s\n", teams[i].coach.name);
                    printf("Coach Age: %d\n", teams[i].coach.age);
                    printf("Experience: %d years\n", teams[i].coach.experience);
                }
                if (n == 0)
                    printf("No teams added yet.\n");
                break;

            case 4:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}

