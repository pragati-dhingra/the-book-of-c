#include <stdio.h>
#include<math.h>

struct point {
    int x,y; 
};
 
struct square {
    struct point vertices[4];
};
 
double square_edge (struct square sq) {
    double x_distance = 0, y_distance = 0, edge1 = 0,edge2 =0,edge3=0,edge4=0;
    x_distance = (sq.vertices[0].x - sq.vertices[1].x) * (sq.vertices[0].x - sq.vertices[1].x);
    y_distance = (sq.vertices[0].y - sq.vertices[1].y) * (sq.vertices[0].y - sq.vertices[1].y);
    edge1 = sqrt(x_distance + y_distance);
    
    x_distance = (sq.vertices[1].x - sq.vertices[2].x) * (sq.vertices[1].x - sq.vertices[2].x);
    y_distance = (sq.vertices[1].y - sq.vertices[2].y) * (sq.vertices[1].y - sq.vertices[2].y);
    edge2 = sqrt(x_distance + y_distance);
    
    
    x_distance = (sq.vertices[2].x - sq.vertices[3].x) * (sq.vertices[2].x - sq.vertices[3].x);
    y_distance = (sq.vertices[2].y - sq.vertices[3].y) * (sq.vertices[2].y - sq.vertices[3].y);
    edge3 = sqrt(x_distance + y_distance);
    
    x_distance = (sq.vertices[3].x - sq.vertices[0].x) * (sq.vertices[3].x - sq.vertices[0].x);
    y_distance = (sq.vertices[3].y - sq.vertices[0].y) * (sq.vertices[3].y - sq.vertices[0].y);
    edge4 = sqrt(x_distance + y_distance);
    
    if((edge1 ==edge2)&&(edge2==edge3)&&(edge3==edge4)&&(edge4==edge1))
    {
        return edge1;
    }
    else
    {
                 return -1;
    }
    
}
 
double square_perimeter (struct square sq) {
    return (4 * square_edge(sq));
}
 
double square_area (struct square sq) {
    double edge = square_edge(sq);
    return (edge * edge);
}

int main()
{
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
    
     struct square sqr = { 0 };
     double edge =0.0;
     
    for(int i =0; i<4; i++) {
                scanf("%d", &sqr.vertices[i].x);
                scanf("%d", &sqr.vertices[i].y);
    }
    
    edge = square_edge(sqr);
    if(edge == -1)
    {
        printf("Invalid input");
        return 0;
    }
    else
    {
    printf("%.2f", square_perimeter(sqr));
    printf(" %.2f", square_area(sqr));
    }
    return 0;
    
}
