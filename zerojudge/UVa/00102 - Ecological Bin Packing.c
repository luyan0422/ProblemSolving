#include <stdio.h>

#define BCG G[0]+ G[1] + B[1] + B[2] + C[0] + C[2]
#define BGC G[0]+ G[2] + B[1] + B[2] + C[0] + C[1]
#define CBG G[0]+ G[1] + B[0] + B[2] + C[1] + C[2]
#define CGB G[0]+ G[2] + B[0] + B[1] + C[1] + C[2]
#define GBC G[1]+ G[2] + B[0] + B[2] + C[0] + C[1]
#define GCB G[1]+ G[2] + B[0] + B[1] + C[0] + C[2]

int main() {
    int G[3] = {0};
    int B[3] = {0};
    int C[3] = {0};
    while(scanf("%d %d %d %d %d %d %d %d %d",
         &B[0], &G[0], &C[0], &B[1], &G[1], &C[1], &B[2], &G[2], &C[2]) != EOF){
        
        int result[6] = {BCG, BGC, CBG, CGB, GBC,GCB};
        char *ans[6] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};
        
        int min = result[0], index = 0;
        for(int i = 1; i < 6; i++){
            if(result[i] < min){
                min = result[i];
                index = i;
            }
        }
       
        printf("%s %d\n", ans[index], result[index]);
    }
    return 0;
}
