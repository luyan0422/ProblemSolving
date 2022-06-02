#include<stdio.h>
void mergesort(int a[], int front, int end);
void merge(int a[], int front, int mid, int end);
void print(int a[], int n);
int a[2000001];
int main(){
    int n;
    while(1){
        scanf("%d", &n);
        if(n == 0) break;
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        mergesort(a, 0, n - 1);
        print(a, n);
        printf("\n");
    }
    return 0;
}

void mergesort(int a[], int front, int end){
    if(front < end){
        int mid = (front + end) / 2;
        mergesort(a, front, mid);
        mergesort(a, mid + 1, end);
        merge(a, front, mid, end);
    }
}

void merge(int a[], int front, int mid, int end){
    //printf("front : %d , mid : %d, end : %d\n", front, mid, end);
    int n1 = mid - front + 1;
    int n2 = end - mid;
    int left[n1];
    int right[n2];
    for(int i = 0; i < n1; i++){
        left[i] = a[front + i];
    }
    for(int i = 0; i < n2; i++){
        right[i] = a[mid + i + 1];
    }
    int i = 0, j = 0, k = front; //point to left, right, a[] initial position

    while(i < n1 && j < n2){
        if(left[i] <= right[j]){
            a[k] = left[i];
            i++;
        }
        else{
            a[k] = right[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        a[k] = left[i];
        i++;
        k++;
    }
    while(j < n2){
        a[k] = right[j];
        j++;
        k++;
    }

}

void print(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}
