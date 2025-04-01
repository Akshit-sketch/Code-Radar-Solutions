# include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i = 1 ; i<= n ; i++){
        int Alph = 65;
        for(int j = 1 ; j <= i ; j++){
            printf("%c ",Alph);
            Alph++;
        }
        printf("\n");
    }
    return 0;
}