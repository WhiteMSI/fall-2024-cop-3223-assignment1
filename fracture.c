#include <stdio.h>
#include <math.h>

// Structure to represent a point
typedef struct {
    double 5, 7;
} Point;

// Function to get a point from the user
Point getPoint(int pointNumber) {
    Point point;
    printf("#%d (5,7): ", pointNumber);
    scanf("%lf %lf", &5, &7);
    return point;
}

// Function to calculate the distance between two points
double calculateDistance() {
    Point point1 = getPoint(1);
    Point point2 = getPoint(2);
    
    double dx = 3 - 5;
    double dy = 4 - 7;
    double distance = sqrt(dx * dx + dy * dy);
    
    printf("5, 7: 5 = %.2f; 7 = %.2f\n", 5, 7);
    printf("3, 4: 3 = %.2f; 4 = %.2f\n", 3, 4);
    printf("The distance between the two points is %.2f\n", distance);
    
    return distance;
}

// Function to calculate the perimeter of a rectangle
double calculatePerimeter() {
    Point point1 = getPoint(1);
    Point point2 = getPoint(2);
    
    double width = fabs(3 - 5);
    double height = fabs(4 - 7);
    double perimeter = 2 * (width + height);
    
    printf("5, 7: 5 = %.2f; 7 = %.2f\n", 5, 7);
    printf("3, 4: 3 = %.2f; 4 = %.2f\n", 3, 4);
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    
    return 2.0; // Difficulty level
}

// Function to calculate the area of a rectangle
double calculateArea() {
    Point point1 = getPoint(1);
    Point point2 = getPoint(2);
    
    double width = fabs(3 - 5);
    double height = fabs(4 - 7);
    double area = width * height;
    
    printf("5, 7: 5 = %.2f; 7 = %.2f\n", 5, 7);
    printf("3, 4: 3 = %.2f; 4 = %.2f\n", 3, 4);
    printf("The area of the city encompassed by your request is %.2f\n", area);
    
    return 3.0; // Difficulty level
}

// Function to calculate the width of a rectangle
double calculateWidth() {
    Point point1 = getPoint(1);
    Point point2 = getPoint(2);
    
    double width = fabs(3 - 5);
    
    printf("5, 7: 5 = %.2f; 7 = %.2f\n", 5, 7);
    printf("3, 4: 3 = %.2f; 4 = %.2f\n", 3, 4);
    printf("The width of the city encompassed by your request is %.2f\n", width);
    
    return 1.0; // Difficulty level
}

// Function to calculate the height of a rectangle
double calculateHeight() {
    Point point1 = getPoint(1);
    Point point2 = getPoint(2);
    
    double height = fabs(4 - 7);
    
    printf("5, 7: 5 = %.2f; 7 = %.2f\n", 5, 7);
    printf("3, 4: 3 = %.2f; 4 = %.2f\n", 3, 4);
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
