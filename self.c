/*
 * $Id: self.c,v 1.3 2011/10/24 07:16:49 urs Exp $
 */

int plen = __LINE__ + 1;
char *a[] = {
    "/*",
    " * $Id: self.c,v 1.3 2011/10/24 07:16:49 urs Exp $",
    " */",
    "",
    "int plen = __LINE__ + 1;",
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
    "    for (i = 0; i < plen; i++)",
    "        puts(a[i]);",
    "    for (i = 0; i < n; i++)",
    "        printf(fmt, a[i]);",
    "    for (i = plen; i < n; i++)",
    "        puts(a[i]);",
    "    return 0;",
    "}",
};

#include <stdio.h>

char fmt[] = { ' ',' ',' ',' ',0x22,'%','s',0x22,',',0xa,0 };

int main(void)
{
    int i, n = sizeof(a) / sizeof(*a);

    for (i = 0; i < plen; i++)
        puts(a[i]);
    for (i = 0; i < n; i++)
        printf(fmt, a[i]);
    for (i = plen; i < n; i++)
        puts(a[i]);
    return 0;
}
