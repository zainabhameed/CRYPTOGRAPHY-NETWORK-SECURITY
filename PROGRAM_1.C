#include <stdio.h>
#include <string.h>

int main(){
    char str[30];
    int i;
    printf("Enter the Input String: \n");
    scanf("%s", str);
    char res[30];
    int n = strlen(str);
    printf("Result: \n");
    for( i = 0;i < n;i++){
       res[i] = str[i]^0;
       printf("%c", res[i]);
    }
    printf("\n");
    return 0;
}

