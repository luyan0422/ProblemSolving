#include <stdio.h>
void cal(int i, int k);

int main(){
    int n;
    scanf("%d", &n);
    int k;
    for(int i = 0; i < n; i++){
        scanf("%d", &k);
        getchar();
        cal(i + 1, k);
    }
    return 0;
}

void cal(int i, int k){
    char s[k + 1];
    int max = 0;
    scanf("%s", s);
    int flag[k];
    for(int i = 0; i < k; i++){
        flag[i] = 0;
    }
    for(int i = 0; i < k; i++){
       if(s[i] == '#'){
           flag[i] = 1;
       }
       else if(s[i] == '.' && flag[i] == 0){
           flag[i] = 1;
           flag[i + 1] = 1;
           flag[i + 2] = 1;
           max++;
       }
    }
    printf("Case %d: %d\n", i, max);
    return;
}

