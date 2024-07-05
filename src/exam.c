#include "exam.h"

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

// Structure of 'exam'
struct exam {
    int id;
    int patient_id;
    int rx_id;
    struct tm* time;
};

// Create an Exam and return a pointer to it
Exam *create_exam(int id, int patient_id, int rx_id, struct tm *time) {
    Exam *new_exam = (Exam *)malloc(sizeof(Exam));

    if (new_exam == NULL) {
        printf("Erro ao alocar memoria para o Exame\n");
        exit(1);
    }

    new_exam->id = id;
    new_exam->patient_id = patient_id;
    new_exam->rx_id = rx_id;
    new_exam->time = time;

    return new_exam;
}

// Free the memory associated with exam
void destroy_exam(Exam *exam) {
    if (exam != NULL) {
        free(exam);
    }
}

// Get the ID of the exam
int get_exam_id(Exam *exam) {
    return exam->id;
}

// Get the ID of the pacient associated with the exam
int get_exam_patient_id(Exam *exam) {
    return exam->patient_id;
}

// Get the X-ray machine ID for the exam
int get_exam_rx_id(Exam *exam) {
    return exam->rx_id;
}

// Get the time of realization of the exam
struct tm *get_exam_time(Exam *exam) {
    return exam->time;
}

