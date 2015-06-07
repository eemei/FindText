#include <stdio.h>
#include "FindText.h"
/**
* Find the first (partial) word in the Text ad return position of the first letter.
*	exp:
* 	text     = 	hello, my name is Alladin
*	wordFind = 	lad
* 	the return value is 20  
*
*	input:
* 		text       contain a bunch of words
* 		wordFind  is the (partial) word to find in the text 
*	return:
* the position of the first letter found in the text
* if the word cannot find in the text,-1 is returned.
*/

 int findText(char *text, char *wordToFind) {
	 int i, j, k;
	 i=0;
	 j=0;
	 k=0;

	 while (text [i] != 0){
		 printf ("**[%d, %d],%c, %c\n",i,j ,text [i],wordToFind [j] ); 
		 while (text [i+k] == wordToFind [j+k]){
	
				 printf ("***[%d, %d],%c, %c\n",i,j ,text [i],wordToFind [j] );
				 k++;
				 if (wordToFind [j+k] == 0){
					 return i;
				 }			
	
		 }
		
		 
		 i++;	
		// return i;
	 }
	 return -1;
 }








 // int i= 0;
	// int j= 0;
	// //int findword = 0;
	// //i = findword;
	

	// while (text[i] != 0){
		// printf ("[%d, %d],%c, %c\n",i,j ,text [i],wordToFind [j] ); 
		// if (text [i] == wordToFind [j] ){
			// printf ("**[%d,%d]\n",i,j);
			
			// if (text [i+1] == wordToFind [j+1] || wordToFind [j+1] == 0) {
				// printf ("*[%d,%d]\n",i,j);
				// return i;
			// }
			// // break;
		// }
		// printf("enter i\n");
		// i++;
	
	
	// }
	
	// while (text [i] != 0){
		// printf ("*[%d, %d],%c, %c\n",i,j ,text [i],wordToFind [j] ); 
	
		// if (text [i+1] == wordToFind [j]){
			// if (text [i+1] == wordToFind [j+1] || wordToFind [j+1] == 0) {
				// printf ("***[%d,%d]\n",i,j);
			// return i;
			// }
		
		// }
		// i++;
	// }
	// return -1;

// }




















  
  
  
  
  
  
  
  
  

  
