#include <stdio.h>
#include <string.h>


int fun(char *s, int len){
    if (len <= 1)
        return 1;
    if (s[0] == s[len-1])
        return fun(s+1, len-2);
    return 0;
}

int clave0(char *s){
    int p = strcspn(s, "\n");
    s[p] = '\0';
    int len = strlen(s);
    if (len <= 8)
        return 0;
    int v[256] = {0};
    for (int i = 0; i < len; i++)
        v[s[i]] = 1;
    int sum = 0;
    for (int i = 0; i < 256; i++)
        sum += v[i];
    if (sum > 2)
        return fun(s, len);
    return 0;
}

int main(){
    char s[0x400];
    printf("Ingrese clave1 : ");
    fgets(s, 0x400, stdin);
    printf("clave0 : %s", s);
    if (clave0(s))
        printf("EXITO clave1 es %s\n", s);
    else
        printf("EXPLOTA\n");
    return 0;
}