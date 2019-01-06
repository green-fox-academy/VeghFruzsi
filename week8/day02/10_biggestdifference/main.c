#include <stdio.h>
#include <stdlib.h>
#include <mem.h>
#include <time.h>

// You will write a program that keeps track of exam results.
// First, your program should ask the user how many classes took the exam. Let's say this number is N.
// Then you need to ask how many students took the exam in the first class. Let's say this number is M.
// You need to ask for the name of the class, the the exam results in percentage M times and store them.
// The number of students might be different for each class.
// You need to repeat this N times.
// Make sure you have a separate function that reads the data and returns it.

// Once you have the data write functions for the following questions:
// Which class has the biggest difference between the worst and best exam and how much is the difference?
// Which class has the best exam?
// What is the average of all the exams?

void create_classes(int *classes_array, int classes, char **name);
void exams_data(int **all_classes, int *classes_array, int classes);
void print_exams(int **all_classes, int *classes_array, int classes, char **name);
void biggest_differences(int **all_classes, const int *class_array, int *differences, int classes);
char *find_biggest_difference_class(int *differences, char **name, int classes, int *diff);
int avarage(int **all_classes, int *classes_array, int classes_size);
char *find_best_exam(int **all_classes, int *class_array, int classes, char **name, int *best);
void free_everything(int **all_classes, int *classes_array, int classes, int *differences);

int main()
{
    int classes = 0;
    printf("How many classes took the exam?\n");
    scanf("%d", &classes);

    int *classes_array = (int *) malloc(classes * sizeof(int));
    char **name = (char **) malloc(classes * sizeof(char *));

    create_classes(classes_array, classes, name);

    int size = sizeof(classes_array) / sizeof(classes_array[0]);
    for (int i = 0; i <= size; ++i) {
        printf("%d, %s\n", classes_array[i], name);
    }

    printf("-----------------------------------------------------------------\n\n");

    int **all_classes = (int **) malloc(classes * sizeof(int *));
    exams_data(all_classes, classes_array, classes);

    printf("-----------------------------------------------------------------\n\n");

    print_exams(all_classes, classes_array, classes, name);

    printf("-----------------------------------------------------------------\n\n");

    int *differences = (int *) calloc(classes, sizeof(int));
    biggest_differences(all_classes, classes_array, differences, classes);

    int diff;
    printf("%d percent is the biggest difference in the class: %s\n", diff, find_biggest_difference_class(differences, name, classes, &diff));
    printf("-----------------------------------------------------------------\n\n");

    printf("%d percent is the avarage\n", avarage(all_classes, classes_array, classes));
    printf("-----------------------------------------------------------------\n\n");

    int best = 0;
    printf("%d was the best in the class: %s\n", best, find_best_exam(all_classes, classes_array, classes, name, &best));

    free_everything(all_classes, classes_array, classes, differences);

    return 0;
}

void create_classes(int *classes_array, int classes, char **name)
{
    for (int i = 0; i < classes; ++i) {
        char temp_name[20];
        printf("Give me please a classname:\n");
        scanf("%s", temp_name);
        name[i] = (char *) malloc((strlen(temp_name) + 1) * sizeof(char));
        strcpy(name[i], temp_name);

        srand(time(NULL));
        int students = 10 + (rand()) % 20;
        classes_array[i] = students;
        printf("There are '%d' students in the __'%s'__ class.\n", classes_array[i], name[i]);
        printf("-----------------------------------------------------------------\n\n");
    }
}

void exams_data(int **all_classes, int *classes_array, int classes)
{
    for (int i = 0; i < classes; ++i) {
        all_classes[i] = (int *) malloc(classes_array[i] * sizeof(int));
    }

    int exam_result;
    for (int j = 0; j < classes; ++j) {
        for (int k = 0; k < classes_array[j]; ++k) {
            exam_result = rand() % 101;
            all_classes[j][k] = exam_result;
        }
    }
}

void print_exams(int **all_classes, int *classes_array, int classes, char **name)
{
    for (int i = 0; i < classes; ++i) {
        printf("%s class result are: \n", name[i]);
        for (int j = 0; j < classes_array[i]; ++j) {
            printf("%d\n", all_classes[i][j]);
        }
        printf("\n");
    }
}

void biggest_differences(int **all_classes, const int *class_array, int *differences, int classes)
{
    for (int i = 0; i < classes; i++) {
        int min_index = 0;
        int max_index = 0;
        for (int j = 0; j < class_array[i]; j++) {
            if (all_classes[i][j] < all_classes[i][min_index])
                min_index = j;
            if (all_classes[i][j] > all_classes[i][max_index])
                max_index = j;
        }
        differences[i] = all_classes[i][max_index] - all_classes[i][min_index];
    }
}

char *find_biggest_difference_class(int *differences, char **name, int classes, int *diff)
{
    int max_index = 0;
    for (int i = 0; i < classes; i++) {
        if (differences[i] > differences[max_index]) {
            max_index = i;
            *diff = differences[max_index];
        }
    }
    return name[max_index];
}

int avarage(int **all_classes, int *classes_array, int classes_size)
{
    int sum = 0;
    int students = 0;
    for (int i = 0; i < classes_size; i++)
        students += classes_array[i];

    for (int i = 0; i < classes_size; i++) {
        for (int j = 0; j < classes_array[i]; j++)
            sum += all_classes[i][j];
    }
    return sum / students;
}

char *find_best_exam(int **all_classes, int *class_array, int classes, char **name, int *best)
{
    int best_person = 0;
    int best_class = 0;
    for (int i = 0; i < classes; i++) {
        for (int j = 0; j < class_array[i]; j++) {
            if (all_classes[i][j] > all_classes[best_class][best_person]) {
                best_person = j;
                best_class = i;
                *best = all_classes[best_class][best_person];
            }
        }
    }
    return name[best_class];
}

void free_everything(int **all_classes, int *classes_array, int classes, int *differences)
{
    for (int i = 0; i < classes; i++) {
        free(all_classes[i]);
    }
    free(all_classes);
    free(differences);
    free(classes_array);
}