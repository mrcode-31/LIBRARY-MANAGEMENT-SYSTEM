#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

struct Member {
    int id;
    char name[50];
    char email[50];
};

int main() {
    struct Book b;
    struct Member m;
    int choice;

    // Initialize book and member IDs to indicate no data
    b.id = -1;
    m.id = -1;

    while (1) {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. View Book\n");
        printf("3. Add Member\n");
        printf("4. View Member\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar(); // Clear input buffer

        if (choice == 1) {
            printf("Enter Book ID: ");
            scanf("%d", &b.id);
            getchar();
            printf("Enter Book Title: ");
            fgets(b.title, sizeof(b.title), stdin);
            b.title[strcspn(b.title, "\n")] = 0;
            printf("Enter Author Name: ");
            fgets(b.author, sizeof(b.author), stdin);
            b.author[strcspn(b.author, "\n")] = 0;
            printf("Book Added Successfully!\n");
        } 
        else if (choice == 2) {
            if (b.id == -1) {
                printf("\nNo Book Added Yet!\n");
            } else {
                printf("\nBook Details:\n");
                printf("ID: %d\n", b.id);
                printf("Title: %s\n", b.title);
                printf("Author: %s\n", b.author);
            }
        } 
        else if (choice == 3) {
            printf("Enter Member ID: ");
            scanf("%d", &m.id);
            getchar();
            printf("Enter Member Name: ");
            fgets(m.name, sizeof(m.name), stdin);
            m.name[strcspn(m.name, "\n")] = 0;
            printf("Enter Email: ");
            fgets(m.email, sizeof(m.email), stdin);
            m.email[strcspn(m.email, "\n")] = 0;
            printf("Member Added Successfully!\n");
        } 
        else if (choice == 4) {
            if (m.id == -1) {
                printf("\nNo Member Added Yet!\n");
            } else {
                printf("\nMember Details:\n");
                printf("ID: %d\n", m.id);
                printf("Name: %s\n", m.name);
                printf("Email: %s\n", m.email);
            }
        } 
        else if (choice == 5) {
            printf("Exiting...\n");
            break;
        } 
        else {
            printf("Invalid Choice! Try Again.\n");
        }
    }

    return 0;
}
