#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++){
        int empty = 0, pick = 0, change = 0, ans = 0;
        scanf("%d %d %d", &empty, &pick, &change);
        empty += pick;

        while(empty >= change){
            ans += empty / change;
            empty = empty % change + empty / change;
        }
        printf("%d\n", ans);
    }
}
