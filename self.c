char *a[] = {
    "char *a[] = {",
    "};",
    "",
    "#include <stdio.h>",
    "",
    "char fmt[] = { ' ',' ',' ',' ',0x22,'%','s',0x22,',',0xa,0 };",
    "",
    "int main(void)",
    "{",
    "    int i, n = sizeof(a) / sizeof(*a);",
    "",
    "    puts(a[0]);",
    "    for (i = 0; i < n; i++)",
    "        printf(fmt, a[i]);",
    "    for (i = 1; i < n; i++)",
    "        puts(a[i]);",
    "    return 0;",
    "}",
};

#include <stdio.h>

char fmt[] = { ' ',' ',' ',' ',0x22,'%','s',0x22,',',0xa,0 };

int main(void)
{
    int i, n = sizeof(a) / sizeof(*a);

    puts(a[0]);
    for (i = 0; i < n; i++)
        printf(fmt, a[i]);
    for (i = 1; i < n; i++)
        puts(a[i]);
    return 0;
}
