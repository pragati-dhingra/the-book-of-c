 /* Write a program that:
    * Defines a struct point that has x and y coordinates as its members
    * Defines a struct square that stores 4 vertices of the square
    * Reads x and y coordinates, in that order, of each vertex of a square.
    * Assume vertices are input in clockwise order from the user. 
    * One coordinate per line - total 8 coordinates
    * Validates if the input coordinates indeed make a square. 
    * In case the coordinates are wrong, program prints "Invalid input" without quotes and trailing newline and exits
    * If input was valid, print perimeter of the square followed by a single space followed by area of the square.
    * Perimeter and area should have two decimal points
    * There should be no trailing whitespace or newline on the output line
    */
#include <stdio.h>
#include <math.h>
 
struct point {
    int x,y; 
};
 
struct square {
    struct point vertices[4];
};
 
double square_edge (struct square sq) {
    double x_distance = 0, y_distance = 0, edge = 0;
    x_distance = (sq.vertices[0].x - sq.vertices[1].x) * (sq.vertices[0].x - sq.vertices[1].x);
    y_distance = (sq.vertices[0].y - sq.vertices[1].y) * (sq.vertices[0].y - sq.vertices[1].y);
    edge = sqrt(x_distance + y_distance);
    return edge;
}
 
double square_perimeter (struct square sq) {
    return (4 * square_edge(sq));
}
 
double square_area (struct square sq) {
    double edge = square_edge(sq);
    return (edge * edge);
}
 
int main (int argc, char *argv[]) {
 
    struct square sqr = { 0 };
    printf("Enter vertices of square, clockwise\n");
 
    for(int i =0; i<4; i++) {
        printf("Enter x coordinate of vertex %d: ",i+1);
        scanf("%d", &sqr.vertices[i].x);
        printf("Enter y coordinate of vertex %d: ",i+1);
        scanf("%d", &sqr.vertices[i].y);
    }
 
    printf("Perimeter of square is %f\n", square_perimeter(sqr));
    printf("Area of square is %f\n", square_area(sqr));
    return 0;
}
