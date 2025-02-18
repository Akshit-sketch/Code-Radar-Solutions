# include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int table = 0;

    for( int i = 1;i <= 10;i++){
        printf("%d x %d = %d",N,i,N * i);
    }
}