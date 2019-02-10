#include <stdio.h>
#include <stdlib.h>

int find(FILE *file, char str[]); //returns 1 if phrase is in the file, returns 0 otherwise
int menu(); //returns the number of the selected function

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



	find()


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
	
}