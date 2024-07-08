# ed-tp1

Para a utilização do programa, é necessário saber o seu Sistema Operacional.

<details open>
  <summary>Windows</summary>

#### Verificar se o Cygwin ou MinGW estão instalados

Se tiver, só é necessário abrir o Terminal, e utilizar o comando na pasta root do código
```bash
mingw32-make all
```
</details>

<details>
  <summary>Linux</summary>

#### Apenas abrir o terminal

Para Linux, o comando make já está disponível por padrão.
Então só é necessário abrir o Terminal, e utilizar o comando a seguir na pasta root do código
```bash
make all
```

</details>

Nesse projeto, existem dois Tipos Abstratos de Dados (TADs), o Pacient e o Exam.

Pacient:
```c
struct patient {
    int id;
    char* name;
    struct tm* birthdate;
};
```

Exam:
```c
struct exam {
    int id;
    int patient_id;
    int rx_id;
    struct tm* time;
};
```

Após seguir o passo a passo acima, como existe um arquivo main.c que realizará um teste para as funções dos TADs, só é necessário verificar o resultado.

Porém, para explicar o que ocorre:

Este programa cria um paciente e um exame com dados pré selecionados. Após isso, utiliza dos métodos criados através dos arquivos "patient.c" e "exam.c" para imprimir as informações em tela.
Para que possa utilizar, importa os arquivos de header, o "patient.h" e o "exam.h".

# Abaixo estão as explicações das funções das bibliotecas

## **Criando paciente**

  O programa define uma data de nascimento fictícia para o paciente (birthdate) e depois cria um paciente por meio da função create_patient, recebendo como parâmetros o id do paciente, seu nome e sua data de nascimento.
  Após o paciente ser criado, suas informações são pegas por meio das funções get_patient_id, get_patient_name e get_patient_birthdate, para que possam ser imprimidas na tela.

## **Criando exame**

  O programa define o horário do exame (exam_time) como o horário em que o código foi executado. Após isso, é criado um exame por meio da função create_exam, que recebe como parâmetros o id do exame, o id do paciente, o id do aparelho de raio-X e o horário do exame.
	Após o exame médico ser criado, suas informações são pegas por meio das funções get_exam_id, get_exam_patient_id, get_exam_rx_id e get_exam_time, para que possam ser imprimidos na tela.

## **Liberando memória alocada**

  Ao final do programa, a memória alocada para paciente e exame é liberada por meio dos comandos destroy_exam e destroy_patient, respectivamente.
