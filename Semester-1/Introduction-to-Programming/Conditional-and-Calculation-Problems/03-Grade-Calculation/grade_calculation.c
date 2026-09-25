#include <stdio.h>

int main()
{
    int marks, category;
    char grade,finalGrade;
    printf("Category\n1.Regular\n2.Scholarship\n3.Exchange\n");
    printf("Enter marks: ");
    scanf("%d", &marks);

    printf("Enter category: ");
    scanf("%d", &category);
    if(marks>= 90)
    {
      grade = 'A';
      }
     else if(marks>= 80)
    {
     grade = 'B';
    }
    else if(marks >= 70)
    {
      grade = 'C';
    }
    else if(marks >= 60)
    {
    grade = 'D';
    }
else
    {
grade = 'F';
}

    if(category == 2)
{
    if(grade == 'B'){
 finalGrade = 'A';
}
else if(grade == 'C'){
 finalGrade = 'B';
}
else if(grade == 'D'){
 finalGrade = 'C';
}
else if(grade == 'F'){
 finalGrade = 'D';
}
else { finalGrade = 'A';
}
}
    if(category == 1)
    {
        printf("\nCategory: Regular");
    }
    else if(category == 2)
    {
        printf("\nCategory: Scholarship");
    }
    else if(category == 3)
    {
        printf("\nCategory: Exchange");
    }
    printf("\nMarks: %d", marks);
    printf("\nFinal Grade: %c", finalGrade);



    return 0;
}

