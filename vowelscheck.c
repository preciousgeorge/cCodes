#include <stdio.h>
#include <stdbool.h>

int main(){
bool isVowel = false;


char letter[2];
int size = 10;
int i;
char vowels[11] = {'a', 'A','e', 'E','i','I','o','O','u','U','\0'};

printf("Enter letter: \n");

scanf("%c", &letter);


i = 0;
while(i < size){
  printf("The current letter is %c and the letter to compare is %s \n", vowels[i], letter);
  if(vowels[i] == letter[0]){
        isVowel = true;
	break;
  
  }
  i++;
}
/**
for(i = 0; i < size; i++){
    printf("The current letter is %c and the letter to compare is %s \n", vowels[i], letter);
    if(vowels[i] == letter[0]){
        isVowel = true;
        break;
    }
}*/

if(isVowel == true){
    printf("The Letter %s is a vowel", letter);
}else{
    printf("The Letter %s is a consonant", letter);
}
return 0;
}
