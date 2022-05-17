#include<stdio.h>
void test();
int dp(int a[], int length, int target);

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        test();
    }
}

void test(){
    int target = 0, stickNum = 0;
    scanf("%d", &target);
    scanf("%d", &stickNum);
    int a[stickNum];
    for(int i = 0; i < stickNum; i++){
        scanf("%d", &a[i]);
    }
    if(dp(a, stickNum, target) == 1)
        printf("YES\n");
    else printf("NO\n");
}

int dp(int a[], int length, int target){
    if(target == 0){
        return 1;
    }
    if(length == 0){
       return 0; 
    }
    if(a[length - 1] > target){
        return dp(a, length - 1,target);
    }
    return dp(a, length - 1,target) || dp(a, length - 1,target - a[length - 1]);
}
