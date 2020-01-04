#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

void Encrypte(char* word){
	const char* Alphabet = "abcdefghijklmnopqrstuvwxyzabc";
	int abc_size = strlen(Alphabet);
	int word_size = strlen(word);
	char* rtword = (char *)malloc(word_size * sizeof(char));

	for(int i = 0; i<=word_size-1; i++)
	{
		for(int e = 0; e<=abc_size; e++)
		{
			if(word[i] == Alphabet[e]) {
				rtword[i] = Alphabet[e+2];
				break;
			}
			else{
				rtword[i] = word[i];
			}
		}
	}
	printf("before: %s\n",word);
	printf("Encrypted-Word: %s\n",rtword);
	free(rtword);
}
void Decrypte(char* word){
 	const char* Alphabet = "xyzabcdefghijklmnopqrstuvwxyz";
	int abc_size = strlen(Alphabet);
	int word_size = strlen(word);
	char* rtword = (char *)malloc(word_size * sizeof(char));

	for(int i = 0; i<=word_size-1; i++)
	{
		for(int e = 0; e<=abc_size; e++)
		{
			if(word[i] == Alphabet[e]) {
				rtword[i] = Alphabet[e-2];
				break;
			}
			else{
				rtword[i] = word[i];			
			}
		}
	}
    printf("before: %s\n",word);
	printf("Decrypted-Word: %s\n",rtword);
	free(rtword);
}

int main(void)
{
	Encrypte("i am a phrase, and i will be encrypted using the famous caesar cipher! testing some letters here znxmaqirjfhka");
	Decrypte("vjcvu nkhg oa dtqvjgtttttt");
}