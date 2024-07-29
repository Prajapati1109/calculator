#include <stdio.h>

int main() {
    int score;
    char grade;

    // Prompt the user to enter the score
    printf("Enter the score (0-100): ");
    scanf("%d", &score);

 

    // Calculate the grade using the ternary operator
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' : 'F';

    // Print the grade
    printf("The grade is: %c\n", grade);
    
//      comments using switch
    switch(grade){
    	
    	case 'A':
    	printf("Excellent work\n");
    	break;
    	
    	case 'B':
    	printf("Well Done\n");
    	break;
    	
    	case 'C':
    	printf("Good job\n");
    	break;
    	
    	case 'D':
    	printf("You passed,but you could do better\n");
    	break;
    	
    	case 'E':
    	printf("You passed,but,but need improvement\n");
    	break;
    	
    	case 'F':
    	printf("Sorry,you faild\n");
    	break;
    	
    	default:
        printf("Invalid choice");
        break;
        

	}
//        Eligibility check

        if(grade!='F'){
        	printf("Congratulation you are eligible for the level");
		}
		else{
			printf("Please try again next time");
		}

}	 

