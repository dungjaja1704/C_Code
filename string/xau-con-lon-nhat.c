#include <stdio.h>
#include <string.h>

int main() {
    char a[100005], b[100005];
    scanf("%s", a);
    char c = 'a';
    int p = 0, n = strlen(a);
    for(int i = n - 1; i >= 0; i--) {
        if(a[i] >= c) {
            c = a[i];
            b[p++] = c;
        }
    }
    for(int i = p - 1; i >= 0; i--) {
        printf("%c", b[i]);
    }
}