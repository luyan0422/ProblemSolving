#include <stdio.h>
int main() {

    int z, i, m, l;
    int number = 1;

    while(scanf("%d %d %d %d", &z, &i, &m, &l) != EOF){

        if(z == 0 && i == 0 && m == 0 && l == 0) break;

        int count = 0;
        int record[10001] = {0};

        while(record[l] == 0){
            count++;
            record[l] = count;
            l = (z * l + i) % m;
        }
        
        number++;
        printf("Case %d: %d\n", number, count - record[l] + 1);

    }
    return 0;
}
