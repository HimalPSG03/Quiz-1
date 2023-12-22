#include<stdio.h>

int area(char s, float sz) {
    if(s == 'S' || s == 's') {
        return sz * sz;
    }
    if(s == 'C' || s == 'c') {
        return 3.14 * sz * sz;
    }
}

int main() {
    float ans, size;
    char shape;
    
    printf("Enter shape:\n S: Square \n C: Circle\n");
    scanf("\n %c", &shape);
    printf("\n Enter Size:");
    scanf("%f", &size);

    if(shape == 'S' || shape == 's') {
        ans = area(shape, size);
        printf("the answer is %f", ans);
    }
    else if(shape == 'C' || shape == 'c') {
        ans = area(shape, size);
        printf("the answer is %f", ans);
    }
    else {
        printf("\nchoose correct option");
    }

    return 0;
}

