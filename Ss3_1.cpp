#include <stdio.h>
#include <string.h>
int main() {
    char ten[50];
    printf("Nh?p tên c?a b?n: ");
    fgets(ten, sizeof(ten), stdin);
    if (ten[strlen(ten) - 1] == '\n') {
        ten[strlen(ten) - 1] = '\0';
    }
    printf("Xin chào %s\n", ten);

    return 0;
}


