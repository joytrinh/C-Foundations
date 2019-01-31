/*
You are still conducting linguistic research! This time, you'd like to write a program to find out how many letters occur multiple times in a given word. Your program should read a word from the input and then sort the letters of the word alphabetically (by their ASCII codes). Next, your program should iterate through the letters of the word and compare each letter with the one following it. If these equal each other, you increase a counter by 1, making sure to then skip ahead far enough so that letters that occur more than twice are not counted again. You may assume that the word you read from the input has no more than 50 letters, and that the word is all lowercase.
"E:\\STUDY\\IT\\Self-Study\\C\\C-Fundamentals\\FindRepeatedLettersInAWord.exe",
*/
#include <stdio.h>
int main(){
    char word[51];
    scanf("%s",word);
    int length = 0;
    int count = 0;
    int i,j,swap;
    while(word[length] != '\0'){
        length++;
    }
    for(i = 0; i < length - 1; i++){
        for(j = i+1; j < length; j++){
            if(word[i] > word[j]){
                swap = word[i];
                word[i] = word[j];
                word[j] = swap;
            }
        }
    }
    i = 0;
    while(i < length){
        if(word[i] == word[i+1]){
            count++;
            i++;
            j = i + 1;
            while(j < length){
                if(word[i] == word[j]){
                    i = j;
                    j++;
                }
                else{
                    i = j;
                    break;
                }
            }
        }
        else{
            i++;
        }
    }
    printf("%d",count);
    return 0;
}

