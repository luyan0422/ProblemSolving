#include<stdio.h>
#include<math.h>
void shortpath();

int main(){
    int num;
    scanf("%d", &num);
    for(int i = 1; i <= num; i++){
      shortpath();
    }
}

void shortpath(){
    int n;
    scanf("%d", &n);
    int a[n];  //邊建邊用 insert 排序
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        int temp = a[i];
        int j = i - 1;
        for(; j > -1 && a[j] > temp; j--){
            a[j + 1] = a[j];
        }
        a[j + 1] = temp;
    }

    int mid = n / 2;
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += abs(a[mid] - a[i]);
    }
    //for(int i = 0; i < n; i++){
        //compare += abs(a[mid[1]] - a[i]);
    //}
    printf("%d\n", ans);
}
