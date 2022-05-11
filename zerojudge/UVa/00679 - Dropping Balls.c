#include<stdio.h>
#include<math.h>
void outCome(int depth, int num);

int main(){
    int testNum = 0;
    scanf("%d", &testNum);  //  決定有幾組測試資料
    int depth = 0, num = 0; //  深度和球編號；
    for(int i = 1; i <= testNum; i++){
        scanf("%d %d", &depth, &num);
        outCome(depth, num);
    }
    return 0;
}

void outCome(int depth, int num){
    int outCome = 1 , countF = 0, countT =0;
    while(depth > 1){
        countT = (num) / 2;    //算一下當前 node TF 轉換了幾次
        countF = (num) - countT;
        if(countT >= countF){ // 當前是 T
            outCome = 2 * outCome + 1;  // to the right node
            num = countT;
        }
        else{   // 當前是 Ｆ
            outCome *= 2; // to the left node
            num = countF;
        }
        depth--;
    }
    printf("%d\n", outCome);

}
//直接算每個點有幾個球經過了 
