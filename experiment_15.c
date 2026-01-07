#include <stdio.h>

int main() {
    int a[5], key, found = 0;

    for(int i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for(int i = 0; i < 5; i++) {
        if(a[i] == key) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Found\n");
    else
        printf("Not Found\n");

    return 0;
}
