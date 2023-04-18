#include <stdio.h>

struct StudentsInfo{
    unsigned int StudentNo;
    char firstName[25];
    char lastName[25];
    float mathScore;
    float engScore;
};

int main(void){
    unsigned int numberOfStudents;
    float mathMaxScore = 0;
    float engMaxScore = 0;

    float mathMinScore = 100;
    float engMinScore = 100;

    float mathAverage = 0;
    float engAverage = 0;

    float mathSum = 0;
    float engSum = 0;

    printf("%s", "Enter the number of students: \n");
    scanf("%u", &numberOfStudents);

    struct StudentsInfo studentInfo[numberOfStudents];

    for(int i = 0; i<numberOfStudents; i++){
        printf("%s", "Enter the student number: \n");
        scanf("%u", &studentInfo[i].StudentNo);

        printf("%s", "Enter the first name: \n");
        scanf("%s", &studentInfo[i].firstName);

        printf("%s", "Enter the last name: \n");
        scanf("%s", &studentInfo[i].lastName);

        printf("%s", "Enter the Maths Score: \n");
        scanf("%f", &studentInfo[i].mathScore);

        printf("%s", "Enter the English Score: \n");
        scanf("%f", &studentInfo[i].engScore);
    }

    printf("%-10s %-12s %-12s %-10s %-10s\n", "Stud. No.", "First name", "Last name", "Maths", "English");
   
    for(int i=0; i<numberOfStudents; i++){
        printf("%-10u %-12s %-12s %-10.2f %-10.2f \n", studentInfo[i].StudentNo,
        studentInfo[i].firstName, studentInfo[i].lastName,
         studentInfo[i].mathScore, studentInfo[i].engScore);

        if(studentInfo[i].mathScore > mathMaxScore)
            mathMaxScore = studentInfo[i].mathScore;

        if(studentInfo[i].engScore > engMaxScore)
            engMaxScore = studentInfo[i].engScore;

        if(studentInfo[i].mathScore < mathMinScore)
            mathMinScore = studentInfo[i].mathScore;
        
        if(studentInfo[i].engScore < engMinScore)
            engMinScore = studentInfo[i].engScore;

        mathSum += studentInfo[i].mathScore;
        engSum += studentInfo[i].engScore;
    }
    mathAverage = mathSum/2;
    engAverage = engSum/2;

    printf("Maths Max score: %f \n", mathMaxScore);
    printf("Eng Max score: %f \n", engMaxScore);
    printf("Maths average: %f \n", mathAverage);
    printf("Eng average: %f \n", engAverage);
}