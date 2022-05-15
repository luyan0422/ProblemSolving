#include<stdio.h>
void twinTower(int n1, int n2);
int max(int i, int j);

int main(){
    int N1 = 0, N2 = 0, count = 1;
    while(1){
        scanf("%d %d", &N1, &N2);
        if(N1 == 0 && N2 == 0) break;
        printf("Twin Towers #%d\n", count);
        twinTower(N1, N2);
        printf("\n");
        count++;
    }
    return 0;
}

void twinTower(int n1, int n2){
    int a[n1 + 2][n2 + 2];

    
    for(int i = 2; i < n1 + 2; i++){
        scanf("%d", &a[i][0]);
    }
    for(int j = 2; j < n2 + 2; j++){
        scanf("%d", &a[0][j]);
    }
    a[0][0] = 0;

    for(int i = 0; i < n1 + 2; i++){
        a[i][1] = 0;
    }
    for(int j = 0; j < n2 + 2; j++){
        a[1][j] = 0;
    }

    for(int i = 2; i < n1 + 2; i++){
        for(int j = 2; j < n2 + 2; j++){
            if(a[i][0] == a[0][j]){
                a[i][j] = a[i-1][j-1] + 1;
            }
            else a[i][j] = max(a[i][j-1], a[i-1][j]);
        }
    }

    printf("Number of Tiles : %d\n", a[n1 + 1][n2 + 1]);
}

int max(int i, int j){
    if(i > j) 
        return i;
    else return j;
}
