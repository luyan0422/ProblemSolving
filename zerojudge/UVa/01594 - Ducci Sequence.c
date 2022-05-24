#include<stdio.h>
#include<math.h>
void ducci();

int main(){
    int num;
    scanf("%d", &num);
    for(int i = 1; i <= num; i++){
        ducci();
    }
    return 0;
}

void ducci(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int temp;
    int j, k = 0;
    for(int i = 0; i < 1000; i++){
        for(j = 0, temp = a[0]; j < n - 1; j++){
            a[j] = abs(a[j + 1] - a[j]);
        }
        a[j] = abs(a[j] - temp);
    }

    /*for(int m = 0; m < n; m++){  
        printf("%d ", a[m]);
    }
    printf("\n");*/

    for(int i = 0;k == 0 & i < n; i++){  
        if(a[i] != 0){
            k = 1;
            break;
        }
    }
    //printf("k = %d\n", k);

    if(k == 0){
        printf("ZERO\n");
    }
    else printf("LOOP\n");
}
