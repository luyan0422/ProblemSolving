#include<stdio.h>
#include<string.h>
void lCS(char *a, char *b);
int max(int i, int j);

int main(){
    char a[1000],b[1000];

    while(scanf("%s",a) != EOF){ 
        scanf("%s",b);
        char *sentence1 = a;
        char *sentence2 = b;
        
        if(strlen(a) == 0) break;

        lCS(sentence1, sentence2);
    }

    return 0;
}

void lCS(char *a, char *b){
    int len1 = strlen(a);
    int len2 = strlen(b);
    char dp[len1 + 1][len2 + 1] ;
    
    for (int i = 0; i <= len1; i++)
        dp[i][0] = 0;       //.初始化
    for (int j = 0; j <= len2; j++)
        dp[0][j] = 0;       //.初始化
    
    for (int i = 1; i <= len1; i++) {
        for (int j = 1; j <= len2; j++) {
            if (a[i-1] == b[j-1]){
                
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    printf("%d\n", dp[len1][len2]);
}

int max(int i, int j){
    if(i > j) 
        return i;
    else return j;
}
