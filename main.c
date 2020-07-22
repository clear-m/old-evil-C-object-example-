#include <stdio.h>

struct object;

int open(struct object *self, const char *fspec)
{
    printf(fspec);
    
    return 1;
}

struct object {
     int (*open_ptr)(struct object *self, const char *fspec);
} myobject_default = { .open_ptr = open };

typedef struct object my_object;

#define 

int main()
{
    my_object instance = myobject_default;
    
    instance.open_ptr(&instance, "123");
    
    return 0;
}
