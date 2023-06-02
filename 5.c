#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
    char model[50];
    
};

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car{
    char* brand;
		char* model;
    int price;
};
struct Car* longestCarModelName(struct Car cars[], int n) {
    int max_length = 0;
    int max_index = 0;

    for (int i = 0; i < n; i++) {
        int current_length = strlen(cars[i].model);
        if (current_length > max_length) {
            max_length = current_length;
            max_index = i;
        }
    }

    return &cars[max_index];
}

int main() {
    struct Car cars[3]; 
    strcpy(cars[0].model, "Mercedes-Benz S");
    strcpy(cars[1].model, "BMW 7");
    strcpy(cars[2].model, "Audi A8");

    struct Car* longest = longestCarModelName(cars, 3);

    printf("s\n", longest->model);

    return 0;
}
