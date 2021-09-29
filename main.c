#include<stdio.h>
#include<stdlib.h>
char A[9]={'1','2','3','4','5','6','7','8','9'};
int k=0,s=1;
void draw(){
    printf("\n%c | %c | %c",A[0],A[1],A[2]);
    printf("\n--|---|--");
    printf("\n%c | %c | %c",A[3],A[4],A[5]);
    printf("\n--|---|--");
    printf("\n%c | %c | %c",A[6],A[7],A[8]);
    printf("\n--|---|--");

}
void EnterInput(){
    int i;
    char n;
    printf("\nEnter the position ");
    scanf("%c",&n);
    if(k==0){
        for(i=0;i<9;i++){
            if(A[i]==n){
                A[i]='X';
                k=1;
                break;
            }
        }
    }
    else{
        for(i=0;i<9;i++){
            if(A[i]==n){
                A[i]='0';
                k=0;
                break;
            }
        }
    }
}
int final(){
    if(A[0]=='X' && A[1]=='X' && A[2]=='X')
       return 1;
    if(A[0]=='X' && A[3]=='X' && A[6]=='X')
       return 1;
    if(A[0]=='X' && A[4]=='X' && A[8]=='X')
       return 1;
    if(A[1]=='X' && A[4]=='X' && A[7]=='X')
       return 1;
    if(A[2]=='X' && A[5]=='X' && A[8]=='X')
       return 1;
    if(A[2]=='X' && A[4]=='X' && A[6]=='X')
       return 1;
    if(A[3]=='X' && A[4]=='X' && A[5]=='X')
       return 1;
    if(A[6]=='X' && A[7]=='X' && A[8]=='X')
       return 1;
    if(A[0]=='0' && A[1]=='0' && A[2]=='0')
       return 2;
    if(A[0]=='0' && A[3]=='0' && A[6]=='0')
       return 2;
    if(A[0]=='0' && A[4]=='0' && A[8]=='0')
       return 2;
    if(A[1]=='0' && A[4]=='0' && A[7]=='0')
       return 2;
    if(A[2]=='0' && A[5]=='0' && A[8]=='0')
       return 2;
    if(A[2]=='0' && A[4]=='0' && A[6]=='0')
       return 2;
    if(A[3]=='0' && A[4]=='0' && A[5]=='0')
       return 2;
    if(A[6]=='0' && A[7]=='0' && A[8]=='0')
       return 2;
    else
       return 3;
}
void result(){
    int res;
    res=final();
    if(res==1){
        printf("\nPlayer 1 won the game\n");
        s=0;
    }
    else if(res==2){
        printf("\nPlayer 2 won the game\n");
        s=0;
    }
    else;
    // else{
    //     printf("Game is draw");
    //     s=0;
    // }
}
int main(){
    draw();
    while(s){
    EnterInput();
    system("cls");
    draw();
    result();
    }
return 0;
}