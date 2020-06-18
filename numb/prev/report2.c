#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define EPS 0.000000001

double gauss_sei();

void gauss_jdg(double Matrix1[][10], int NUM)
{
    double amn = 0.0;
    int cout = 0;

    for(int p = 0; p < NUM; p++){
        amn = 0.0;
        for(int q = 0; q < NUM; q++){
            if(p != q){
            amn += Matrix1[p][q];
            }
        }
        if((Matrix1[p][p] < amn) && cout < NUM){
            printf("この連立方程式は発散します\n");
            exit(0);
        }else{cout++;}
    }
}


double gauss_sei(double Matrix1[][10], double Matrix2[], int NUM)
{
    double Matrix[NUM];
    double sum = 0.0, dx = 0.0;
    int m = 0, jdg1 = 1;

   for(int l = 0; l < NUM; l++){
        Matrix[l] = 0;
    }

    do{
        m++;
        printf("[round %d] \n", m);
        for(int n = 0; n < NUM; n++){
           sum = 0.0;
            for(int o = 0; o < NUM; o++){
                if(o != n) sum += Matrix1[n][o] * Matrix[o];
            } 
            sum = (Matrix2[n] - sum) / Matrix1[n][n];
            dx = fabs(Matrix[n] - sum);
            Matrix[n] = sum;
            printf("x[%d] = %lf ",n + 1,  sum);

            if(dx < EPS){
                jdg1 = 0;
            }      
        }  
        printf("\n");
    }while(jdg1 == 1);
}

int main(void)
{
    int num = 0;
    double matrix1[10][10], matrix2[10];
    FILE *fp;

    fp = fopen("matrix.txt", "r");
    fscanf(fp, "%d", &num);

    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            fscanf(fp, "%lf", &matrix1[i][j]);
        }
    }

    for(int l = 0; l < num; l++){
        fscanf(fp, "%lf", &matrix2[l]);
    }

    gauss_jdg(matrix1, num);
    gauss_sei(matrix1, matrix2, num);

    fclose(fp);
        
    return 0;
}