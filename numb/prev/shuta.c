#include <stdio.h>

#define NUM 3

double gausu_sei(double Matrix1[][NUM], double Matrix2[])
{
    double Matrix[NUM], mat[NUM];
    double sum = 0.0;
   
    
   for(int l = 0; l < NUM; l++){
        Matrix[l] = 0;
    }


    for(int m = 0; m < 25; m++){
        printf("[round %d] \n", m + 1);
        for(int n = 0; n < NUM; n++){
           sum = 0.0;
            for(int o = 0; o < NUM; o++){
                if(o != n) sum += Matrix1[n][o] * Matrix[o];
            } 
            sum = (Matrix2[n] - sum) / Matrix1[n][n];
            Matrix[n] = sum;      
            printf("x[%d] = %lf ",n + 1,  sum);  
        }  
        printf("\n");
    }
}

int main(void)
{
    double matrix1[NUM][NUM] = {{3.0, 1.0, 1.0}, {1.0, 3.0, 1.0}, {1.0, 1.0, 3.0}};
    double matrix2[NUM]     = {8.0, 10.0, 12.0};
    int i, j;

    for(i = 0; i < NUM; i++){
        printf("%lfx + %lfy + %lfz = ", matrix1[i][j], matrix1[i][j + 1], matrix1[i][j + 2] );
        printf("%lf\n", matrix2[i]);
    }

    gausu_sei(matrix1, matrix2);
    
    return 0;
}