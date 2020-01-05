#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>


// 1 or 0. If 0 then it will encrypt.
void ED(char* word, int Decrypte){
	const char* Alphabet = "!@#$ab^c&de*f(g)h_i=j-k=l[m]n'o;p,q.r/s{t}xuzy:vw<>?";
	int abc_size = strlen(Alphabet);
	int word_size = strlen(word);
	int Jump = 0;
	Jump = 3;
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
	ED("My brotharr i like eathing banana qwertyuioopasdfghjklzxcvbnm", 0);
	ED("Mw &{,u=c{{ - ]-[( (cu=-;_ &c;c;c", 1); 
}