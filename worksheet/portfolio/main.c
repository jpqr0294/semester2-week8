
#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main( void ) {

    Point p1 = makePoint(0.0,0.0);
    Point p2 = makePoint(5.5, 6.7);
    Point p3 = makePoint(10.1, 12.4);
    Point p4 = makePoint(20.0, 40.0);
    Point p5 = makePoint(5.5, 6.7);

    // test your code by calling the functions and printing the output 
    Line l1 = makeLine(p1, p2);
    Line l2 = makeLine(p2, p3);
    Line l3 = makeLine(p3, p4);

    Triangle t1 = makeTriangle(p1, p2, p3);
    Triangle t2 = makeTriangle(p2, p3, p4);

    

    printf("length of line 1 = %f\n", lineLength(l1));
    printf("length of line 2 = %f\n", lineLength(l2));
    printf("length of line 3 = %f\n", lineLength(l3));

    printf("area of triangle 1 = %f\n", triangleArea(t1));
    printf("area of triangle 2 = %f\n", triangleArea(t2));
    
    printf("is p2 same point as p5?: %s\n", samePoint(p2, p5) ? "true" : "false");

    printf("is p2 in the line l2?: %s\n", pointInLine(p2, l2) ? "true" : "false");
    printf("is p2 in the line l3?: %s\n", pointInLine(p2, l3) ? "true" : "false");

    printf("is p1 in the triangle t1?: %s\n", pointInTriangle(p1, t1) ? "true" : "false");
    printf("is p1 in the triangle t2?: %s\n", pointInTriangle(p1, t2) ? "true" : "false");
    return 0;
}