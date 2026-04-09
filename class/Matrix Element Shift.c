#include <stdio.h>

int main(){
    int mat[4][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};
    int r=2, c=2;
    int flag = 0;
    for(int i=3; i>=0; i--){
        for (int j=3; j>=0; j--){
            if(r==i && c==j){
                flag = 1;
                break;
            }
            if(j==0){
                mat[i][j]= mat[i-1][3];
            }
            else{
                mat[i][j]= mat[i][j-1];
            }
        }
        if(flag){
            break;
        }
    }
    mat[r][c] = 100;
    for(int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }


    return 0;
}
