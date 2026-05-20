#include <stdio.h>
#include <math.h>

int main() {
    // ===== ЧАСТЬ 1: Матрица double 3x3 и диагонали =====
    printf("=== ЗАДАЧА 1: Диагонали матрицы 3x3 ===\n\n");
    
    double matrix1[3][3];
    double main_diag_sum = 0.0;  // сумма главной диагонали
    double secondary_diag_sum = 0.0;  // сумма побочной диагонали
    int i, j;
    
    // Ввод матрицы 3x3
    printf("Введите элементы матрицы 3x3 (по строкам):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("matrix1[%d][%d] = ", i, j);
            scanf("%lf", &matrix1[i][j]);
            printf("Введено: %.2f\n", matrix1[i][j]);
        }
    }
    
    // Вывод матрицы
    printf("\nВведенная матрица:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%8.2f ", matrix1[i][j]);
        }
        printf("\n");
    }
    
    // Вычисление суммы главной диагонали [0][0], [1][1], [2][2]
    for (i = 0; i < 3; i++) {
        main_diag_sum += matrix1[i][i];
    }
    
    // Вычисление суммы побочной диагонали [0][2], [1][1], [2][0]
    for (i = 0; i < 3; i++) {
        secondary_diag_sum += matrix1[i][2 - i];
    }
    
    printf("\nСумма элементов главной диагонали: %.2f\n", main_diag_sum);
    printf("Сумма элементов побочной диагонали: %.2f\n\n", secondary_diag_sum);
    
    
    // ===== ЧАСТЬ 2: Матрица int 2x2 и ее квадрат =====
    printf("=== ЗАДАЧА 2: Квадрат матрицы 2x2 ===\n\n");
    
    int matrix2[2][2];
    int matrix2_squared[2][2];
    int k, l;
    
    // Ввод матрицы 2x2
    printf("Введите элементы матрицы 2x2 (по строкам):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("matrix2[%d][%d] = ", i, j);
            scanf("%d", &matrix2[i][j]);
            printf("Введено: %d\n", matrix2[i][j]);
        }
    }
    
    // Вывод исходной матрицы
    printf("\nИсходная матрица:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%6d ", matrix2[i][j]);
        }
        printf("\n");
    }
    
    // Вычисление квадрата матрицы (A^2 = A * A)
    // C[i][j] = A[i][0]*A[0][j] + A[i][1]*A[1][j]
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            matrix2_squared[i][j] = 0;
            for (k = 0; k < 2; k++) {
                matrix2_squared[i][j] += matrix2[i][k] * matrix2[k][j];
            }
        }
    }
    
    // Вывод квадрата матрицы
    printf("\nКвадрат матрицы (A^2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%6d ", matrix2_squared[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
