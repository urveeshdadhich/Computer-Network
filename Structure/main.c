
#include<stdio.h>
#include<string.h>
struct Student {
    char name[34];
    int id;
    float marks;
    char fav_char;
};

int main() {
    struct Student urveesh, sagar, dobby;
    urveesh.id = 951;
    urveesh.marks = 7.1;
    urveesh.fav_char = 'f';
    sagar.id = 923;
    sagar.marks = 7.6;
    sagar.fav_char = 's';
    strcpy(dobby.name, "Dobby Mahajan");
    dobby.id = 1068;
    dobby.marks = 8.0;
    dobby.fav_char = 's';
    printf("Dobby's info is as follows: \n");
    printf("Dobby's name : %s\n",dobby.name);
    printf("Dobby's id : %d\n",dobby.id);
    printf("Dobby's marks : %.1f\n",dobby.marks);
    printf("Dobby's fav_char : %c\n",dobby.fav_char);
    return 0;
}
