# include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int sum = 0;

    for(int i =1; i <= N;i++){
        sum+=1;
    }
    printf("%d",sum);
    return 0;
}