# include <stdio.h>

int main(){
    char str[1000000];
    int age;
    char hobby[1000000];

    scanf("%s",str);
    scanf("%d",&age);
    scanf("%d",hobby);

    printf("Name: %s\n",str);
    printf("Age: %d\n",age);
    printf("Hobby: %s",hobby);
    return 0;
}