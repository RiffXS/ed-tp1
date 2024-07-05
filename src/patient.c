#include "patient.h"

#include <time.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

// Structure of 'patient'
struct patient {
    int id;
    char* name;
    struct tm* birthdate;
};

// Create a new patient and return a pointer to it
Patient *create_patient(int id, const char *name, struct tm *birthdate) {
    Patient *new_patient = (Patient *)malloc(sizeof(Patient));

    if (new_patient == NULL) {
        printf("Erro ao alocar memória para o paciente.\n");
        exit(1);
    }

    new_patient->id = id;
    new_patient->name = strdup(name);
    new_patient->birthdate = birthdate;

    return new_patient;
}

// Free the memory associated with patient
void destroy_patient(Patient* patient) {
    if (patient != NULL) {
        free(patient->name);
        free(patient);
    }
}

// Get the patient ID
int get_patient_id(Patient* patient) {
    return patient->id;
}

// Get the patient Name
const char *get_patient_name(Patient* patient) {
    return patient->name;
}

// Get the patient Birthdate
struct tm *get_patient_birthdate(Patient* patient) {
    return patient->birthdate;
}

