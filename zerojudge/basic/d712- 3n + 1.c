#include<stdio.h>
const int LENGTH = 1000001;

typedef struct indexValue
{
    int i;
    int j;
}inV;  //紀錄開始和結束的區間

void calculate(int a[], int left, int right); //build a table
void buildTree(int a[], int tree[], inV index[], int node, int start, int end);
int findMax(int a[], int tree[], inV index[], int root, int i, int j); //find max in table an return value
int max(int i, int j);

//放在 main 裏面會記憶體區段錯誤
int a[1000001];
inV index[2100000];  //紀錄 a 中的點對應到 tree 的 node 編號
int tree[2100000];// 紀錄區段最大值

int main(){
    //先建表
    a[0] = -1;
    a[1] = 1;
    a[2] = 2;
    for(int i = 4; i < LENGTH; i += i){  // 2 的平方倍可以先做
        a[i] = a[i /2] + 1;
    }

    calculate(a, 1, LENGTH - 1);
    buildTree(a, tree, index, 1, 1, LENGTH - 1);

    int i, j;
    while(scanf("%d %d", &i, &j) != EOF){
        printf("%d %d ", i, j);
        if(i > j){   // 按照題目規定先輸出再進行交換 
            i = i ^ j;
            j = i ^ j;
            i = i ^ j;
        }
        printf("%d\n", findMax(a, tree, index, 1, i, j));
    }
    return 0;
}


void calculate(int a[], int left, int right){ // 想要利用遞迴建表
    if(left == right){
        long long int temp = left;
        int count = 1;
        while(a[left] == 0){
            //printf("temp = %d, count = %d\n",temp,count);
            if(temp % 2 == 0){
                if((temp / 2) <= LENGTH && a[temp / 2] != 0){
                    count += a[temp / 2];
                    a[left] = count;  //while 終止條件
                }
                else{
                    temp /= 2;
                    count++;
                }
            }
            else{
                if((temp * 3 + 1) <= LENGTH && a[temp * 3 + 1] != 0 ){
                    count += a[temp * 3 + 1];
                    a[left] = count;  //while 終止條件
                    a[left * 2] = count + 1; // 因為 3n + 1 < max 所以 2n 必小於 max 可以多做一步
                }
                else{
                    temp = temp * 3 + 1;
                    count++;
                }

            }
        }
        

    }
    else{
        int mid = (left + right) / 2;
        calculate(a, left , mid);
        calculate(a, mid + 1, right);
    }
}


int findMax(int a[], int tree[], inV index[], int root, int i, int j){ //利用遞迴找到合適點再return value
    //printf("i = %d, j = %d, root = %d\n",i, j, root);
    if(index[root].i == i && index[root].j == j){
        //printf("i = %d, j = %d, root = %d, tree[%d] = %d\n",i, j, root , root, tree[root]);
        return tree[root];
    }

    else if(i == j){
        return a[i];
    }

    else{
        int mid = (index[root].i + index[root].j) / 2;
        int left_node = 2 * root;
        int right_node = 2 * root + 1;
        if(mid < i){        //代表 i,j 都在 root 右邊
            return findMax(a, tree, index, right_node, i, j);
        }
        else if(mid >= j){      //代表 i,j 都在 root 左邊
            return findMax(a, tree, index, left_node, i, j);
        }
        else{
            return max(findMax(a, tree, index, left_node, i, mid), findMax(a, tree, index, right_node, mid + 1, j));
        }
    }
}


void buildTree(int a[], int tree[], inV index[], int node, int start, int end){
    if(start == end){
		tree[node] = a[end]; // a[] 紀錄在 tree 的葉節點
        index[node].i = end;  //紀錄 tree 節點的區間
        index[node].j = end;  
	}
	else{  //遞迴建立紀錄區間最大值的 tree 每個點為其兩子點取最大值
		int mid = (start + end ) / 2;
		int left_node = 2 * node;
		int right_node = 2 * node + 1;
		buildTree(a, tree, index, left_node, start, mid);
		buildTree(a, tree, index, right_node, mid + 1, end);
		tree[node] = max(tree[left_node] , tree[right_node]);
        index[node].i = index[left_node].i;
        index[node].j = index[right_node].j;
	}
    //tree 的 root 為 1 ~ 1000000 最大值 
    //root 左子點為 1 ~ 500000 最大值 右子點為 500001~1000000 最大值  依此類推
}

int max(int i, int j){
    if(i > j) {
        return i;
    }
    else return j;
}




    /*檢查用
    for(int i = 1; i < 10; i++){  
        printf("index[%d].i = %d\nindex[%d].j = %d\n", i, index[i].i, i, index[i].j);
    }

    for(int i = 1; i < 10; i++){
        printf("tree[%d].= %d\n", i, tree[i]);
    }
    for(int i = 1; i < 10; i++){
        printf("a[%d].= %d\n", i, a[i]);
    }
    */

    

