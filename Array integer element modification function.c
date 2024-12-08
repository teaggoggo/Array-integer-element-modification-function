#include <stdio.h>
void modify_array(int *arr, int size) { // *arr == arr[]
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;  // 배열의 각 요소를 2배로 변경
    }
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    modify_array(a, 5);  // 배열을 함수에 전달
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);  // 수정된 배열 출력
    }
    printf("\n");
}