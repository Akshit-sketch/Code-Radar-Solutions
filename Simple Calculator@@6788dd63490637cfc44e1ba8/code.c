# include <stdio.h>
int main(){
    char ch;
    int num1,num2;

    scanf("%c%d%d",&ch,&num1,&num2);

    switch (ch){
        case '+': printf("%d",num1+num2);
            break;
        case '-': printf("%d",num1-num2);
            break;
        case '*': printf("%d",num1*num2);
            break;
        case '/': printf("%d",num1/num2);
            break;
    }
    return 0;
}