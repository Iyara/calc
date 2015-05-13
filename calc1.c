/* example 7-1, pg 100 */

#include <stdio.h>
char    line[100];      /* line of data from the input */
int     result;         /* the result of the calculations */
char    operat;         /* the operator the user specified */
int     value;          /* value specified after the operator */

int main()
{
    result = 0;     /* initialize the result */

    /* loop forever (or until we hit the break statement */
    while (1) {
        printf("Result: %d\n", result);

        printf("Enter operator and number: ");
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%c %d", &operat, &value);

        if (operat == '+') {
            result += value;
        } else {
            printf("Unknown operator %c\n", operat);
        }
    }
}
