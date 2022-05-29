#include <stdio.h>
#define max(a, b) a > b ? a : b
void student_ans(int a[], int num);
void find_lcs(int a[], int k[], int num);

int main(){
    int num = 0;
    int temp = 0;
    int ans[20] = {0};
    scanf("%d", &num);
    for(int i = 1; i <= num; i++){
        scanf("%d", &temp);
        ans[temp - 1] = i;
    }
    student_ans(ans, num);
    return 0;
}

void student_ans(int a[], int num){
    int temp = 0;
    int k[num];
    while(scanf("%d", &temp) != EOF){
        for(int i = 1; i < num; i++){
            k[temp - 1] = i;
            scanf("%d", &temp);
        }
        k[temp - 1] = 10;
        find_lcs(a, k, num);
    }
}

void find_lcs(int a[], int k[], int num){
    int dp[num + 1][num + 1];
    for(int i = 0; i < num + 1; i++){
        dp[i][0] = 0;
    }
    for(int i = 0; i < num + 1; i++){
        dp[0][i] = 0;
    }

    for(int i = 1; i < num + 1; i++){
        for(int j = 1; j < num + 1; j++){
            if(a[i - 1] == k[j - 1]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else{
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    printf("%d\n", dp[num][num]);
}
