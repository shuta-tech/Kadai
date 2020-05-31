#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define NUM 3
#define EPS 0.00000000000000001



double gausu_sei(double Matrix1[][NUM], double Matrix2[])
{
    double Matrix[NUM], mat[NUM];
    double sum = 0.0, def = 0.0, dx = 0.0;
    bool jdg1 = true, jdg2 = false, jdg3 = 0;
    int m = 1;

    
   for(int l = 0; l < NUM; l++){
        Matrix[l] = 0;
    }


    do{
        m++;
        printf("[round %d] \n", m + 1);
        for(int n = 0; n < NUM; n++){
           sum = 0.0;
            for(int o = 0; o < NUM; o++){
                if(o != n) sum += Matrix1[n][o] * Matrix[o];
            } 
            sum = (Matrix2[n] - sum) / Matrix1[n][n];
            dx = fabs(Matrix[n] - sum);
            Matrix[n] = sum;
            printf("x[%d] = %lf ",n + 1,  sum);

            if(dx < EPS * fabs(Matrix[n])){
                jdg3 = jdg1;
            }      
        }  
        printf("\n");

    }while(jdg3 != jdg1);

}


int main(void)
{
    double matrix1[NUM][NUM] = {{5.0, -4.0, 6.0}, {7.0, -6.0, 10.0}, {4.0, 9.0, 7.0}};
    double matrix2[NUM]     = {8.0, 14.0, 74.0};
    int i, j;

    for(i = 0; i < NUM; i++){
        printf("%lfx + %lfy + %lfz = ", matrix1[i][j], matrix1[i][j + 1], matrix1[i][j + 2] );
        printf("%lf\n", matrix2[i]);
    }

    gausu_sei(matrix1, matrix2);
    
    return 0;
}