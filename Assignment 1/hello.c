#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    size_t name_len;
    printf("Enter your first name: ");
    if (scanf("%s", &name)!= 1) {
        return 1;
    }
    printf("Hello %s\n",name);
    name_len = strlen(name);
    printf("Your name has %zu letters\n", name_len);



return 0;
}
