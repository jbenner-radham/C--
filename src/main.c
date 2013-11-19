#include <stdio.h>
#include <stdlib.h> // free
#include <string.h> // strstr, strlen, strtok, size_t, NULL

int main()
{
    char *src = " #include stdio, stdlib, string";
    char *tok;
    src = strstr(src, "#include"); // Our psuedo ltrim...

    size_t x = strlen(src);
    char dest[x];
    for (size_t i = strlen("#include"), y = 0; y < x; ++i, ++y)
        dest[y] = src[i];
    dest[x] = '\0';

    tok = strtok(dest, " ,");
    while (tok != NULL) {
        printf("#include <%s.h>\n", tok);
        tok = strtok(NULL, " ,");
    }

    // 0 is implicitely returned on successful completion.
}
