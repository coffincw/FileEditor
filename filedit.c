#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find(FILE *file, char str[], int size); //returns number of times phrase appears in file
int menu(); //returns the number of the selected function
int size(char arr[]); //takes in a character array and returns the size
void renameFile(char name[]); //renames a file based on the users input

int main(void) {
    FILE *selectedFile; //file selected by the user
    char filename[100]; // the name of the file selected by the user
    while (1) {
        printf("Enter the name of the file:");
        scanf("%s", filename);

        selectedFile = fopen(filename, "r");
        if (selectedFile == NULL) { //invalid file
            printf("Cannot open file, please try again\n");
        } else {
            break;
        }
    }

    while (1) {
        int selection = menu();
        switch (selection) { //runs
            case 1:; // find a phrase
                char phrase[4000];
                while (1) { //guarenteeing valid string
                    printf("What phrase would you like to search the file for? Please limit your phrase to 20 characters\n");
                    scanf(" %s", phrase);
                    size_t len = strlen(phrase); //length of the phrase;
                    if (len <= 20) break;
                }
                int occurances = find(selectedFile, phrase, size(phrase)); // number of occurances of the requested phrase
                printf("There are %i occurances of the phrase %s.\n", occurances, phrase);
                break;
            case 2: //rename file
                renameFile(filename);
                break;
                //implement rename
            case 3: //exit
                exit(0);
        }
    }
}

void renameFile(char name[]) {
    while (1) {
        char newName[260]; //new name for the file
        printf("Input the name that you would like to rename the file");
        scanf("%s", newName);
        if (rename(name, newName) == 0) break; //if valid file name
    }

}


int menu() {
    while (1) {
        int input = 0;
        printf("What would you like to do with the file? Enter a number:\n1) find phrase\n2) rename file\n3) exit");
        scanf(" %i", &input);
        if (input == 1 || input == 2 || input == 3) {
            return input;
        } else {
            while (getchar() != '\n') {} //clears input buffer
            printf("Please enter a valid input!\n");

        }

    }
}



int find(FILE *file, char str[], int size) {
    int count = 0;
    char c = (char) fgetc(file); //just incase integer
    while (c != EOF) {
        if (c == str[0]) {
            for (int i = 1; i < size; i++) { //iterate through file
                c = fgetc(file);
                if (c != str[i]) {
                    break;
                } else if (i == size - 1) { //if phrase found increase count
                    count++;
                }

            }
        }
        c = fgetc(file);
    }
    return count;
}

int size(char arr[]) {
    int index = 0;
    int size = 0;
    while (arr[index] != '\0') { //iterate through array
        size++;
        index++;
    }
    return size;
}