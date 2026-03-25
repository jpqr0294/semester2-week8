
// Finley Schofield JPQR0294

#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point new;
    new.x = x;
    new.y = y;
    return new;
}

// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()

Line makeLine( Point p1, Point p2) {
    Line lin;
    lin.p[0] = p1;
    lin.p[1] = p2;
    return lin;
}


Triangle makeTriangle( Point p1, Point p2, Point p3 ) {
    Triangle tri;
    tri.p[0] = p1;
    tri.p[1] = p2;
    tri.p[2] = p3;
    return tri;
}


float lineLength( Line l ) {
    float length = 0.0;
    float dx = 0.0;
    float dy = 0.0;

    dx = l.p[1].x - l.p[0].x;
    dy = l.p[1].y - l.p[0].y;
    length = sqrtf(dx*dx + dy*dy);

    return length;
}

float triangleArea( Triangle t ) {
    float area = 0.0;
    float x1 = t.p[0].x, y1 = t.p[0].y;
    float x2 = t.p[1].x, y2 = t.p[1].y;
    float x3 = t.p[2].x, y3 = t.p[2].y;

    area = 0.5f * fabsf(
        x1*(y2-y3) +
        x2*(y3-y1) +
        x3*(y1-y2)
    );

    return area;
}


bool samePoint( Point p1, Point p2 ) {
    float dist = lineLength(makeLine(p1,p2));
    
    return dist<1.0e-6;
}


bool pointInLine( Point p, Line l) {
    return samePoint(p, l.p[0]) || 
            samePoint(p, l.p[1]);
}


bool pointInTriangle( Point p, Triangle t ) {
    return samePoint(p, t.p[0]) ||
            samePoint(p, t.p[1]) || 
            samePoint(p, t.p[2]);
}
