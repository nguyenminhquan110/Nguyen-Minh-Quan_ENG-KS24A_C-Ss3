#include <stdio.h>
#include <string.h>
int main() {
    char ten[50];
    printf("Nh?p t�n c?a b?n: ");
    fgets(ten, sizeof(ten), stdin);
    if (ten[strlen(ten) - 1] == '\n') {
        ten[strlen(ten) - 1] = '\0';
    }
    printf("Xin ch�o %s\n", ten);

    return 0;
}


