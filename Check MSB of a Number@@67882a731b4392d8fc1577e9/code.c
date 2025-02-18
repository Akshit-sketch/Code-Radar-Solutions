# include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    if (num & 8000000){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}
