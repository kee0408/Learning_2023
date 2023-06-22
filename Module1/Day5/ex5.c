#include <stdio.h>

typedef struct {

    int x;

    int y;

} field;

void swapFields(field *p1, field *p2) {

    int temp = p1->x;

    p1->x = p2->x;

    p2->x = temp;

    temp = p1->y;

    p1->y = p2->y;

    p2->y = temp;

}

int main() {

    field  field1 , field2;

 

    printf("Enter the values for field 1 (x, y): ");

    scanf("%d %d", &(field1.x), &(field1.y));

 

    printf("Enter the values for field 2 (x, y): ");

    scanf("%d %d", &(field2.x), &(field2.y));

 

    printf("\nBefore swapping:\n");

    printf("field  1: x=%d, y=%d\n", field1.x, field1.y);

    printf("field  2: x=%d, y=%d\n", field2.x, field2.y);
 

    swapFields(&field1, &field2);

 

    printf("\nAfter swapping:\n");

    printf("field 1: x=%d, y=%d\n", field1.x, field1.y);

    printf("field 2: x=%d, y=%d\n", field2.x, field2.y);

 

    return 0;

}