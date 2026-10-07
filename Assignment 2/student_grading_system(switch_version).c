/*
 * PSEUDOCODE:
 *
 * MAIN:
 *     Declare variables: Registration_number, Name, student_marks, grade, pass_fail, N
 *
 *     Prompt user for number of students (N)
 *     IF input for N fails:
 *         Display "Invalid input!"
 *         Exit program
 *
 *     FOR i FROM N DOWN TO 1:
 *         Prompt user for registration number
 *         IF input fails:
 *             Display "Error reading reg no."
 *             Exit program
 *
 *         Prompt user for name
 *         IF input fails:
 *             Display "Error reading name."
 *             Exit program
 *
 *         Prompt user for marks
 *         IF input fails:
 *             Display "Error reading marks."
 *             Exit program
 *
 *         SWITCH integer cast of student_marks:
 *             CASE 70 TO 100:
 *                 Set grade = 'A'
 *             CASE 60 TO 69:
 *                 Set grade = 'B'
 *             CASE 50 TO 59:
 *                 Set grade = 'C'
 *             CASE 40 TO 49:
 *                 Set grade = 'D'
 *             DEFAULT:
 *                 Set grade = 'F'
 *         END SWITCH
 *
 *         SWITCH integer cast of student_marks:
 *             CASE 40 TO 100:
 *                 Set pass_fail = "PASS"
 *             DEFAULT:
 *                 Set pass_fail = "FAIL"
 *         END SWITCH
 *
 *         Display header ("STUDENT INFORMATION")
 *         Display Registration Number, Name, Marks, Grade, and Pass/Fail Status
 *
 *     END FOR
 */

#include <stdio.h>

int main(){

    char Registration_number[20];
    char Name[50];
    double student_marks;
    char grade;
    const char *pass_fail;
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
        if(scanf("%s", Name) != 1){
            printf("Error reading name.\n");
            return 1;
        }

        printf("Enter your marks:");
        if(scanf("%lf", &student_marks) != 1){
            printf("Error reading marks.\n");
            return 1;
        }

        switch((int)student_marks){
            case 70 ... 100:
                grade = 'A';
                break;
            case 60 ... 69:
                grade = 'B';
                break;
            case 50 ... 59:
                grade = 'C';
                break;
            case 40 ... 49:
                grade = 'D';
                break;
            default:
                grade = 'F';
                break;
        }
        switch((int)student_marks){
            case 40 ... 100:
                pass_fail = "PASS";
                break;
            default:
                pass_fail = "FAIL";
                break;
        }
        printf("\n------------------------------------\n");
        printf("\n\tSTUDENT INFORMATION\t\n");
        printf("\n------------------------------------\n");
        printf("\nRegistration No: %s\n", Registration_number);
        printf("\nName: %s\n", Name);
        printf("\nMarks: %.2f\n", student_marks);
        printf("\nGrade: %c\n", grade);
        printf("\n %s\n", pass_fail);
        printf("\n-------------------------------------\n");

    }
return 0;
}
