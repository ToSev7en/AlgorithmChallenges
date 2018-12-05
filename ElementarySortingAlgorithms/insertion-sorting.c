#include<stdio.h>

void trace(int A[], int N){
    for(int i = 0; i < N; i++){
        if(i > 0) printf(" ");
        printf("%d", A[i]);
    }
    printf("\n");
}

void insertion_sort(int A[], int N){
    int i, j, e;
    for(i = 1; i < N; i++){
        e = A[i];
        j = i - 1;
        while(j >= 0 && A[j] > e){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = e;
        trace(A, N);
    }
}

int main(){
    int N, i, j;
    int A[100];

    printf("请输入需要排序的整数个数 N :\n");

    scanf("%d", &N);

    printf("请依次在一行输入需要排序的整数（空格分割，command+D+return 结束）:\n");

    for(i = 0; i < N; i++) scanf("%d", &A[i]);

    printf("原始序列如下:");
    trace(A, N);

    insertion_sort(A, N);

    return 0;
}