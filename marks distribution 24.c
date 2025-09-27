#include <stdio.h>

int main() {
    float marks1, marks2, marks3, total, average;

    // Input marks for three subjects
    printf("Enter marks for three subjects: ");
    scanf("%f %f %f", &marks1, &marks2, &marks3);

    // Check if any subject has marks < 35
    if (marks1 < 35 || marks2 < 35 || marks3 < 35) {
        printf("Student has failed due to scoring less than 35 in a subject.\n");
    } else {
        // Calculate total and average
        total = marks1 + marks2 + marks3;
        average = total / 3;

        printf("Total Marks   = %.2f\n", total);
        printf("Average Marks = %.2f\n", average);

        // Assign grades based on average
        if (average >= 70)
            printf("Grade: Distinction\n");
        else if (average >= 60)
            printf("Grade: First Class\n");
        else if (average >= 50)
            printf("Grade: Second Class\n");
        else if (average >= 35)
            printf("Grade: Third Class\n");
        else
            printf("Grade: Fail\n"); // This will normally not occur due to earlier check
    }

    return 0;
}


