#include <stdio.h>
#include <string.h>

int main(){
    char str[30];
    int i;
    printf("Enter the Input String: \n");
    scanf("%s", str);
    char res1[30];
    char res2[30];
    int n = strlen(str);
    printf("Result AND: \n");
    for( i = 0;i < n;i++){
       res1[i] = str[i]&127;
       printf("%c", res1[i]);
    }
    printf("\n");
    printf("Result XOR: \n");
    for(i = 0;i < n;i++){
       res2[i] = str[i]^127;
       printf("%c", res2[i]);
    }
    printf("\n");
    return 0;
}
