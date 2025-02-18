# include <stdio.h>
int main(){
    int num , count;
    scanf("%d",&num);

    for (int i = 1; i <= num;i++){
        if(i%num == 0){
            count+=1;
        }
    }
    if(count == 2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}