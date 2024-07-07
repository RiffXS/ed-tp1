# ed-tp1

Este programa faz a criação de um paciente e exame. As estruturas que representam paciente (Patient) e exame (Exam) são manipuladas respectivamente pelas bibliotecas “patient.h” e “exam.h”.

# **Criando paciente**

  O programa define uma data de nascimento fictícia para o paciente (birthdate) e depois cria um paciente por meio da função create_patient, recebendo como parâmetros o id do paciente, seu nome e sua data de nascimento.
  Após o paciente ser criado, suas informações são pegas por meio das funções get_patient_id, get_patient_name e get_patient_birthdate, para que possam ser imprimidas na tela.

# **Criando exame**

  O programa define o horário do exame (exam_time) como o horário em que o código foi executado. Após isso, é criado um exame por meio da função create_exam, que recebe como parâmetros o id do exame, o id do paciente, o id do aparelho de raio-X e o horário do exame.
	Após o exame médico ser criado, suas informações são pegas por meio das funções get_exam_id, get_exam_patient_id, get_exam_rx_id e get_exam_time, para que possam ser imprimidos na tela.

# **Liberando memória alocada**

  Ao final do programa, a memória alocada para paciente e exame é liberada por meio dos comandos destroy_exam e destroy_patient, respectivamente.
