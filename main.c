#include "exam.h"
#include "patient.h"

#include <time.h>
#include <stdio.h>

int main() {
    // Definindo uma data de nascimento fictícia para o paciente
    struct tm birthdate = {0};
    birthdate.tm_year = 90;
    birthdate.tm_mon = 5;
    birthdate.tm_mday = 15;

    // Criando um paciente
    Patient *patient = create_patient(1, "João Silva", &birthdate);

    // Imprimindo informações do paciente criado
    printf("Paciente criado:\n");
    printf("ID: %d\n", get_patient_id(patient));
    printf("Nome: %s\n", get_patient_name(patient));
    printf("Data de nascimento: %s\n", asctime(get_patient_birthdate(patient)));

    // Definindo uma data e hora fictícias para o exame
    time_t current_time;
    struct tm *exam_time;

    // Tempo do exame é o tempo atual
    current_time = time(NULL);
    exam_time = localtime(&current_time);

    // Criando um exame associado ao paciente criado
    Exam *exam = create_exam(101, get_patient_id(patient), 1, exam_time);

    // Imprimindo informações do exame criado
    printf("\nExame criado:\n");
    printf("ID: %d\n", get_exam_id(exam));
    printf("ID do Paciente: %d\n", get_exam_patient_id(exam));
    printf("ID do Aparelho de Raio-X: %d\n", get_exam_rx_id(exam));
    printf("Data e Hora do Exame: %s\n", asctime(get_exam_time(exam)));

    // Liberando a memória alocada
    destroy_exam(exam);
    destroy_patient(patient);

    return 0;
}

