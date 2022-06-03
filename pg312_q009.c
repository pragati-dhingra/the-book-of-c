#include <stdio.h>
#include <math.h>
#include<stdlib.h>
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

double valid_check (struct square sq) {
    double x_distance = 0, y_distance = 0, edge1 = 0,edge2=0;
    x_distance = (sq.vertices[0].x - sq.vertices[1].x) * (sq.vertices[0].x - sq.vertices[1].x);
    y_distance = (sq.vertices[0].y - sq.vertices[1].y) * (sq.vertices[0].y - sq.vertices[1].y);
    edge1 = sqrt(x_distance + y_distance);
    x_distance = (sq.vertices[1].x - sq.vertices[2].x) * (sq.vertices[1].x - sq.vertices[2].x);
    y_distance = (sq.vertices[1].y - sq.vertices[2].y) * (sq.vertices[1].y - sq.vertices[2].y);
    edge2 = sqrt(x_distance + y_distance);
    if(edge1==edge2)
    	return 1;
    else
    	return 0;
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
     int x=0;
    for(int i =0; i<4; i++) {
    
        scanf("%d", &sqr.vertices[i].x);
    
        scanf("%d", &sqr.vertices[i].y);
    }
	x=valid_check(sqr);
	if(x==1)
	{
	    printf("%.2f ", square_perimeter(sqr));
    	    printf("%.2f", square_area(sqr));}
    else{
    	printf("Invalid input\n");
		exit(0);
	}
    return 0;
}
