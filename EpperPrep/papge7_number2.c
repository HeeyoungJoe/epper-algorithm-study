#include<stdio.h>
#include<stdlib.h>
/*
void main() {
	


	char buffer[100]; //buffer in order to use fgets for the input
	char buffer2[100]; //buffer in order to use fgets for the sequence
	int char_count = 0; //counts how many characters were given
	int result[100]; //where the switched characters are saved
	fgets(buffer, 100, stdin);
	fgets(buffer2, 100, stdin);

	//counts how many characters were input
	for (int i = 0; buffer[i] != '\n'; i++) {
		char_count+=1;
	} 

	//calculated how many more to add
	int num_additional_char = 7 - (char_count % 7);
	//adds characters in alphabetical order
	for (int i = 0; i < num_additional_char; i++) {
		buffer[char_count + i] = (char)((int)'a' + i);
	}
	char_count += num_additional_char;

	//archive the letters according to the sequence
	for (int i = 0; i < char_count; i++) {
		int index = (int)buffer2[i] - (int)'0';
		printf("\n number of index:%d", index);
		result[i] = buffer[index-1];
	}

	//print the result
	printf("\n\nresult:");
	for (int i = 0; i < char_count; i++) { printf("%c\t", result[i]); }
}*/
