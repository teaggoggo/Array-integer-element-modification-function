#include <stdio.h>
void modify_array(int *arr, int size) { // *arr == arr[]
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;  // �迭�� �� ��Ҹ� 2��� ����
    }
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    modify_array(a, 5);  // �迭�� �Լ��� ����
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);  // ������ �迭 ���
    }
    printf("\n");
}