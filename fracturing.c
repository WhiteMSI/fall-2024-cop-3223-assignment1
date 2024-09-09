//********************************************************
// fracture.c
// Author: Connor Farmer
// Class: COP 3223, Professor Parra
// UCF ID:5626191
//
// Output: (to the command line) A breif Message
// //********************************************************

#include <stdio.h>
#include <math.h>

// Structure to represent a point
typedef struct {
    double x, y;
} Point;

// Function to get a point from the user
Point getPoint(int pointNumber) {
    Point point;
    printf("Enter coordinates for Point #%d (x y): ", pointNumber);
    scanf("%lf %lf", &point.x, &point.y);
    return point;
}

// Function to calculate the distance between two points
double calculateDistance() {
    Point point1 = getPoint(1);
    Point point2 = getPoint(2);
    
    double dx = point2.x - point1.x;
    double dy = point2.y - point1.y;
    double distance = sqrt(dx * dx + dy * dy);
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", point1.x, point1.y);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", point2.x, point2.y);
    printf("The distance between the two points is %.2f\n", distance);
    
    return distance;
}

// Function to calculate the perimeter
double calculatePerimeter() {
    Point point1 = getPoint(1);
    Point point2 = getPoint(2);
    
    double width = fabs(point2.x - point1.x);
    double height = fabs(point2.y - point1.y);
    double perimeter = 2 * (width + height);
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", point1.x, point1.y);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", point2.x, point2.y);
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    
    return 2.0; // Difficulty level
}

// Function to calculate the area
double calculateArea() {
    Point point1 = getPoint(1);
    Point point2 = getPoint(2);
    
    double width = fabs(point2.x - point1.x);
    double height = fabs(point2.y - point1.y);
    double area = width * height;
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", point1.x, point1.y);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", point2.x, point2.y);
    printf("The area of the city encompassed by your request is %.2f\n", area);
    
    return 3.0; // Difficulty level
}

// Function to calculate the width
double calculateWidth() {
    Point point1 = getPoint(1);
    Point point2 = getPoint(2);
    
    double width = fabs(point2.x - point1.x);
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", point1.x, point1.y);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", point2.x, point2.y);
    printf("The width of the city encompassed by your request is %.2f\n", width);
    
    return 1.0; // Difficulty level
}

// Function to calculate the height
double calculateHeight() {
    Point point1 = getPoint(1);
    Point point2 = getPoint(2);
    
    double height = fabs(point2.y - point1.y);
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", point1.x, point1.y);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", point2.x, point2.y);
    printf("The height of the city encompassed by your request is %.2f\n", height);
    
    return 1.0; // Difficulty level
}

// Main function
int main(int argc, char **argv) {
    // Call the functions here
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}
