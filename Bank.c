#include <stdio.h>

int main(){
    int choice;
    printf("\t Wellcome to PP Bank\n");
    printf("1. create new account\n");
    printf("2. update information\n");
    printf("3. check anccout\n");
    printf("4. transaction\n");
    printf("5. remove account\n");
    printf("6. quit\n");
    printf("\n");
    printf("Enter your choice\n");
    scanf("%d", &choice);

    switch (choice){
    case 1:
        printf("1. create new account\n");
        break;
    case 2:
        printf("2. update information\n");
        break;
    case 3:
        printf("3. check anccout\n");
        break;
    case 4:
        printf("4. transaction\n");
        break;
    case 5:
        printf("5. remove account\n");
        break;
    case 6:
        printf("Thank you, see you again!\n");
        break;
    default:
        break;
    }

    return 0;
}