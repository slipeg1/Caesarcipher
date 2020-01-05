#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define Jump 2


// 1 or 0. If 0 then it will encrypt.
void ED(char* word, int Decrypte){
	const char* Alphabet = "xyzabcdefghijklmnopqrstuvwxyzabc";
	int abc_size = strlen(Alphabet);
	int word_size = strlen(word);
	Jump++;
	char* rtword = (char *)malloc(word_size * sizeof(char));

	for(int i = 0; i<=word_size-1; i++)
	{
		for(int e = 0; e<=abc_size; e++)
		{
			if(word[i] == Alphabet[e]) {
				if(Decrypte == 0) {
					rtword[i] = Alphabet[e+Jump];
				}
				else {
					rtword[i] = Alphabet[e-Jump];
				}
				break;
			}
			else {
				rtword[i] = word[i];
			}
		}
	}
	printf("before: %s\n",word);
	printf("Encrypted-Word: %s\n",rtword);
	free(rtword);
}

int main(void)
{
	ED("knn dg gpetarvgf", 1);
}