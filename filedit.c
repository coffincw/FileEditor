#include <stdio.h>
#include <stdlib.h>
#define MAX_INPUT_LIMIT 20

int find(FILE *file, char str[]); //returns number of times phrase appears in file
int menu(); //returns the number of the selected function
int size(char arr[]); //takes in a character array and returns the size

int main(void) {
	FILE *selectedFile;

	char filename[100], c;
	while (1) {
		printf("Enter the name of the file:");
		scanf("%s", filename);

		selectedFile = fopen(filename, "r");
		if (selectedFile == NULL) {
			printf("Cannot open file, please try again");
		} else {
			break;
		}
	}	

	while (1) {
		int selection = menu();
		switch(selection) {
			case 1:
			while (1) {
				char phrase[4000];
				printf("What phrase would you like to search the file for? Please limit your phrase to 20 characters\n");
    			if (fgets(phrase, sizeof(phrase), stdin) == 0)
        			break;  // EOF or error
    			size_t len = strlen(input);
    			if (len > 0)
        			input[--len] = '\0';   // Zap newline
    			if (len <= 20)
        			break;
       	 	}
       	 	find(selectedFile, phrase[], size(phrase[]));
		}
	}

}

int menu() {
	while (1) {
		int input = 0;
		printf("What would you like to do with the file? Enter a number:\n
			1) find phrase")
		scanf(" %i", &input);
		if (input == 1 || input == 2) {
			return input;
		} else {
			while(getchar()!='\n'){} //clears input buffer

		}

	}
}

int find(FILE *file, char str[], int size) {
	char c = fgetc(file);
	while (c != EOF) {
		if (c == str[0]) {

		}
	}
}

int size(char arr[]) {
	int index = 0;
	int size = 0;
	while (arr[index] != '\0') {
		size++;
		index++;
	}
	return size;
}