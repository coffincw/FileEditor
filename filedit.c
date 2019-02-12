#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_INPUT_LIMIT 20

int find(FILE *file, char str[], int size); //returns number of times phrase appears in file
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
			printf("Cannot open file, please try again\n");
		} else {
			break;
		}
	}	

	while (1) {
		int selection = menu();
		switch(selection) { //runs 
			case 1:;
			char phrase[4000];
			while (1) { //guarenteeing valid string
				printf("What phrase would you like to search the file for? Please limit your phrase to 20 characters\n");
    			scanf(" %s", phrase);
    			size_t len = strlen(phrase);
    			// if (len > 0) phrase[--len] = '\0';   
    			if (len <= 20) break;
       	 	}
       	 	int occurances = find(selectedFile, phrase, size(phrase));
       	 	printf("There are %i occurances of the phrase %s.\n", occurances, phrase);
		}
	}
}



int menu() {
	while (1) {
		int input = 0;
		printf("What would you like to do with the file? Enter a number:\n1) find phrase\n");
		scanf(" %i", &input);
		if (input == 1 || input == 2) {
			return input;
		} else {
			while(getchar()!='\n'){} //clears input buffer

		}

	}
}

int find(FILE *file, char str[], int size) {
	int count = 0;
	char c = fgetc(file);
	while (c != EOF) {
		if (c == str[0]) {
			for (int i = 1 ; i < size ; i++) {
				c = fgetc(file);
				if (c != str[i]) {
					break;
				} else if (i == size - 1) {
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
	while (arr[index] != '\0') {
		size++;
		index++;
	}
	return size;
}