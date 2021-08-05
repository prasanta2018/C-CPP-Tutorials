#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    char name[0];

    // struct hack (when we create array of zero length inside structure, it must be (and only) last member of structure.)
    struct employee {
        int emp_id;
        int name_len;
        char name[0];
    };
    // "Struct Hack" technique is used to create variable length member in a structure. In the above structure, string length of "name" is not fixed, so we can use "name" as variable length array.
    struct employee e1;
    
    printf("size of name = %d\n", sizeof(name));
    printf("size of employee struct = %d\n", sizeof(e1));

    struct employee *e = malloc(sizeof(e1));
    e->emp_id = 100;
    e->name_len = strlen("Prasanta Mandal");
    strncpy(e->name, "Prasanta Mandal", e->name_len);

    printf("%s\n", e->name);
    return 0;
}