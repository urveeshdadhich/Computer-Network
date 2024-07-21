#include <stdio.h>
struct Employee {
    char name[35];
    int id;
    char address[45];
};

int main() {
    struct Employee urveesh = {"Urveesh Dadhich", 951, "Banswara"};
    struct Employee sagar = {"Sagar Rajoriya", 923, "Delhi"};
    struct Employee dobby = {"Dobby Mahajan", 1608, "Himachal"};
    printf("Urveesh's info is as follows: \n");
    printf("Urveesh's name : %s\n",urveesh.name);
    printf("Urveesh's id : %d\n",urveesh.id);
    printf("Urveesh's address : %s\n",urveesh.address);
    return 0;
}
