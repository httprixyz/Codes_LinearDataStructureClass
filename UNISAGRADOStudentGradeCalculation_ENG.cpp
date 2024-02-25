#include <stdio.h>

struct Student 
{
    int id;
    float P1;
    float P2;
    float Q;
    float Ot;
};

int main() 
{   
    struct Student student;
    
    printf("Enter your Unisagrado ID: ");
    scanf("%d", &student.id);
    
    printf("Enter the grade for P1: ");
    scanf("%f", &student.P1);
    
    printf("Enter the grade for P2: ");
    scanf("%f", &student.P2);
    
    printf("Enter the grade for Quiz: ");
    scanf("%f", &student.Q);
    
    printf("Enter the grade for Others: ");
    scanf("%f", &student.Ot);
    
    float MF = (student.P1 * 0.3) + (student.P2 * 0.3) + (student.Q * 0.2) + (student.Ot * 0.2);
    
    printf("The final grade for ID %d is: %.2f\n", student.id, MF);
    
    return 0;
}

