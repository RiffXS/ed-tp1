#ifndef EXAM_H
#define EXAM_H

// Getting 'tm' structure
#include <time.h>

// Define a forward declaration of a 'exam' structure
typedef struct exam Exam;

// Function prototypes

// Create a new Exam and return a pointer to it
Exam *create_exam(int id, int patient_id, int rx_id, struct tm *time);

// Free the memory associated with the exam
void destroy_exam(Exam *exam);

// Get the ID of the exam
int get_exam_id(Exam *exam);

// Get the ID of the pacient associated with the exam
int get_exam_patient_id(Exam *exam);

// Get the X-ray machine ID for the exam
int get_exam_rx_id(Exam *exam);

// Get the time of realization of the exam
struct tm *get_exam_time(Exam *exam);

// End of conditional compilation directives
#endif

