#ifndef PATIENT_H
#define PATIENT_H

// Getting 'tm' structure
#include <time.h>

// Define a forward declaration of a 'patient' structure
typedef struct patient Patient;

// Function prototypes

// Create a new Patient and return a pointer to it
Patient *create_patient(int id, const char *name, struct tm *birthdate);

// Free the memory associated with the patient
void destroy_patient(Patient* patient);

// Get the ID of the patient
int get_patient_id(Patient* patient);

// Get the Name of the patient
const char *get_patient_name(Patient* patient);

// Get the birthdate of the patient
struct tm *get_patient_birthdate(Patient* patient);

// End of conditional compilation directives
#endif

