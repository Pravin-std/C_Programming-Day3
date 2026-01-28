#include <stdio.h>

int main() {
    int type, age;
    scanf("%d", &type);
    scanf("%d", &age);

    int sleeper = 300;
    int ac = 1000;
    int total = 0;

    switch (type) {
        case 1: 
            if(age <= 12) {
                total = sleeper - (sleeper * 50) / 100; 
            }else if(age >= 60) {
                total = sleeper - (sleeper * 33) / 100; 
            }else {
                total = sleeper;
            }
            printf("Fare $%d", total);
            break;

        case 2: 
            if (age <= 12) {
                total = ac - (ac * 50) / 100;
            }else if (age >= 60) {
                total = ac - (ac * 33) / 100;
            }else {
                total = ac;
            }
            printf("Fare $%d", total);
            break;

        default:
            printf("Invalid Type");
    }

    return 0;
}
