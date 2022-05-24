#include<stdio.h>

int main(){
    int h1 = 0, m1 = 0, h2 = 0, m2 = 0;
    while(1){
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        
        if(h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0) break;
        
        int hour = 0, minute = 0;

        if(h1 > h2){
            hour = 24 - h1 + h2;
        }
        if(h1 < h2){
            hour = h2 - h1;
        }
        
        if(h1 == h2){
            if(m2 >= m1){
                hour = h2 - h1;
            }
            else hour = 24;
        }

        if(m1 > m2){
            minute = -(m1 - m2);
        }
        if(m1 <= m2){
            minute = m2 - m1;
        }
        printf("%d\n", 60 * hour + minute);
    }
    return 0;
}
