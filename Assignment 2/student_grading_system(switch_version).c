#include <stdio.h>

int main(){

    char Registration_number[20];
    char Name[50];
    double student_marks;
    int N;

    printf("Enter number of students:");
    if(scanf("%d", &N) != 1){
        printf("Invalid input!\n");
        return 1;
    }
    for(int i = N; i > 0; i--){
        printf("Enter your registration number:");
        if(scanf("%s", Registration_number) != 1) {
            printf("Error reading reg no.\n");
            return 1;
        }

        printf("Enter your name:");
        if(scanf(" %s", Name) != 1){
            printf("Error reading name.\n");
            return 1;
        }

        printf("Enter your marks:");
        if(scanf("%lf", &student_marks) != 1){
            printf("Error reading marks.\n");
            return 1;
        }

        printf("\n------------------------------------\n");
        printf("\n\tSTUDENT INFORMATION\t\n");
        printf("\n------------------------------------\n");
        printf("\nRegistration No: %s\n", Registration_number);
        printf("\nName: %s\n", Name);
        printf("\nMarks: %.2f\n\n", student_marks);

        switch((int)student_marks){
            case 70 ... 100:
                printf("Grade: A\n");
                break;
            case 60 ... 69:
                printf("Grade: B\n");
                break;
            case 50 ... 59:
                printf("Grade: C\n");
                break;
            case 40 ... 49:
                printf("Grade: D\n");
                break;
            default:
                printf("Grade: F\n");
                break;
        }
        switch((int)student_marks){
            case 40 ... 100:
                printf("\nPASS\n");
                break;
            default:
                printf("\nFAIL\n");
                break;
        }
    printf("\n-------------------------------------\n");

    }
return 0;
}
