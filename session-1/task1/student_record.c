/**
 * Implementation of a student record management system using structures
 * 
 * This program demonstrates the use of structures in C to manage student data
 * including personal information and module marks.
 */

#include <stdio.h>
#include <string.h>

#include "student_record.h"

/**
 * Calculate the average mark for a student
 * 
 * param student The student whose average mark is to be calculated
 * return float The average mark
 */
float calculate_average(Student student) {
    // TODO: Implement this function to calculate and return the average
    // of the three module marks
    float sum = 0.0;
    float avg = 0.0;
    int n = sizeof(student.marks);
    for(int i=0; i < n; i++) {
        sum += student.marks[i];
    } 
    avg = sum / n;
    return avg; // Placeholder return value
}

/**
 * Display student information including name, ID, marks, and average
 * 
 * student The student whose information is to be displayed
 */
void display_student(Student student) {
    // TODO: Implement this function to display student information
    // Format: Name, ID, individual marks, and average mark
    float avg = calculate_average(student);
    printf("%s\n %d\n %f\n %f\n %f\n %f\n", student.name, student.id, student.marks[0], student.marks[1], student.marks[2], avg);
}

/*
 * main
 */
int main( void ) {
    // TODO: Create and initialise a student variable with sample data
    // Example: name = "John Smith", id = 12345, marks = {75.0, 68.5, 81.0}
    
    Student student = {
        .name = "Finley",
        .id = 50,
        .marks[0] = 80.5,
        .marks[1] = 69.5,
        .marks[2] = 75.5
    };


    // TODO: display the student data and average mark
    display_student(student);
    

    return 0;
}