#include <math.h>
#include <stdio.h>

int main() {

    double a, b, c;
    double x1, x2;
    double discriminant;
    

    a = 1;   
    b = -5;  
    c = 6;
    
    // Вычисляем дискриминант: D = b^2 - 4*a*c
    discriminant = pow(b, 2) - 4 * a * c;
    
    // Вычисляем корни по формуле: x = (-b ± sqrt(D)) / 2*a
    x1 = (-b + sqrt(discriminant)) / (2 * a);
    x2 = (-b - sqrt(discriminant)) / (2 * a);
    
    // Выводим результаты на консоль
    printf("Коэффициенты квадратного уравнения:\n");
    printf("a = %.2f\n", a);
    printf("b = %.2f\n", b);
    printf("c = %.2f\n", c);
    printf("\nДискриминант: D = %.2f\n", discriminant);
    printf("\nКорни уравнения:\n");
    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2);
    
    return 0;
}