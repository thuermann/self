/*
 * $Id: self.c,v 1.2 2011/10/24 07:15:52 urs Exp $
 */

char *a[] = {
    "/*",
    " * $Id: self.c,v 1.2 2011/10/24 07:15:52 urs Exp $",
    " */",
    "",
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
    "    for (i = 0; i < 5; i++)",
    "        puts(a[i]);",
    "    for (i = 0; i < n; i++)",
    "        printf(fmt, a[i]);",
    "    for (i = 5; i < n; i++)",
    "        puts(a[i]);",
    "    return 0;",
    "}",
};

#include <stdio.h>

char fmt[] = { ' ',' ',' ',' ',0x22,'%','s',0x22,',',0xa,0 };

int main(void)
{
    int i, n = sizeof(a) / sizeof(*a);

    for (i = 0; i < 5; i++)
        puts(a[i]);
    for (i = 0; i < n; i++)
        printf(fmt, a[i]);
    for (i = 5; i < n; i++)
        puts(a[i]);
    return 0;
}
