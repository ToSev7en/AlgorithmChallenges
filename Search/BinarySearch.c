#include<stdio.h>

int A[1000000], n;

int binary_search(int key){
    int left = 0;

    // 注意：
    // 这里取  n  的话，while 循环条件为 left <  right
    // 这里取 n-1 的话，while 循环条件为 left <= right
    int right = n;


    int mid;


    while(left < right){

        // 可能导致溢出
        mid = (left + right) / 2;
        
        // 发现 key
        if(key == A[mid]) return 1;

        // 搜索后半部分
        if(key > A[mid]){
            left = mid + 1;
        }
        // 搜索前半部分
        else if(key < A[mid]){
            // 上面取  n  的话，right = mid
            // 上面取 n-1 的话，right = mid - 1
            right = mid;
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{

    int q, k, sum = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    scanf("%d", &q);

    for(int i = 0; i < q; i++){
        scanf("%d", &k);
        if(binary_search(k)) sum++;
    }

    printf("%d\n", sum);
    
    return 0;
}
