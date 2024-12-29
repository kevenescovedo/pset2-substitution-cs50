#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


bool haveOnlyAlphabeticsDigits(string key, int tamanho);

bool haveRepeatCharacters(string key, int tamanho);

int main (int argc, string argv[]) {
   if(argc == 2) {
     int tamanho = strlen(argv[1]);
     if(tamanho == 26){

        if(haveOnlyAlphabeticsDigits(argv[1],tamanho)) {
            if(!haveRepeatCharacters(argv[1], tamanho)) {
                string plainText = get_string("plaintext: ");
                int tamanho_plainText  = strlen(plainText);
                char cipher[tamanho_plainText + 1];
                for (int x = 0; x < tamanho_plainText; x++) {
                    if( plainText[x] >= 65 &&  plainText[x]  <= 90 ) {
                        int indice = plainText[x] - 65;
                        if(argv[1][indice] >= 97 && argv[1][indice] <= 122 ) {
                           cipher[x] = argv[1][indice] - 32 ;
                        } else {
                          cipher[x] = argv[1][indice];
                        }
                    } else if(plainText[x] >= 97 && plainText[x] <= 122) {
                      int indice = plainText[x] - 97;
                        if(argv[1][indice] >= 65 && argv[1][indice] <= 90 ) {
                           cipher[x] = argv[1][indice] + 32 ;
                        } else {
                          cipher[x] = argv[1][indice];
                        }
                    }
                    else {
                        cipher[x] =  plainText[x];
                    }
                }
                cipher[tamanho_plainText] = '\0';

                printf("ciphertext: %s\n", cipher);
                return 0;

            } else {
                printf("Key must not contain  repeated characters.\n" );
                return 1;
            }

        } else {
            printf("Key must only contain  alphabetic characters.\n");
            return 1;
        }

     } else {
         printf("Key must contain 26  characters.\n");
        return 1;
     }

   } else {
    printf("Usage: ./substitution KEY\n");
    return 1;
   }
}

bool haveOnlyAlphabeticsDigits(string key, int tamanho) {
    bool isValid  = true;
    for (int x = 0; x < tamanho; x++) {
        if( !((key[x] >= 65 && key[x]  <= 90 ) ||  (key[x] >= 97 && key[x]  <= 122 )) ){
            isValid = false;
            break;
        }


    }
  return isValid;
}

bool haveRepeatCharacters(string key, int tamanho) {
    bool isRepeat = false;
    for (int x = 0; x < tamanho; x++) {

        for (int i = 0; i < tamanho; i++) {

            if(toupper(key[x]) == toupper(key[i]) &&  x != i ) {
              isRepeat = true;
            }
        }

    }
    return isRepeat;

}
