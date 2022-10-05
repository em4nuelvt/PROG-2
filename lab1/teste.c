 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct contact{
    int number;
    char name[80];
}contact;

void addContact(contact *contacts, int position){
    printf("Enter the name: ");
    setbuf(stdin, 0);
    fgets(contacts[position].name,80,stdin);

    printf("Enter the telephone number: ");
    scanf("%d", &contacts[position].number);
    return;
}

void printAllContacts(contact *contacts, int size){
    for(int i=0; i<size;i++){
        printf("Contact %d:\n",i);
        printf("Name: %s\n",contacts[i].name);
        printf("Telephone number: %d \n",contacts[i].number);
    }
}

int main() {
    int size;
    printf("Enter the list size: ");
    scanf("%d",&size);

    contact *contacts= (contact*)malloc(sizeof(contact)*size);
    int counter=0;
    int x;
    do {
        printf("------------MENU-----------\n");
        printf("1-Add contact\n");
        printf("2-Print contacts list\n");
        printf("0-Exit\n");
        printf("----------------------------\n");
        printf("Enter an option: ");
        scanf("%d",&x);

        switch (x){
            case 1:
                addContact(contacts,counter);
                counter++;
                break;
            case 2:
                printAllContacts(contacts,counter);
                break;
            case 0:
                break;
        }
    }while(x!=0);
    return 0;
}