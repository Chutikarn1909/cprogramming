#include <stdio.h>

void main(){
int std1_math ,std1_programing ,std1_science,std2_math ,std2_programing ,std2_science,std3_math ,std3_programing ,std3_science;
 
float result;


  printf("***********************\n");
  printf("Pleas input score\n");
  printf("Subject=> 1.math 2.programing 3.science\n");

  printf("Student 1 : ");
  scanf(" %d %d %d", &std1_math, &std1_programing, &std1_science);

  printf("Student 2 : ");
  scanf(" %d %d %d", &std2_math, &std2_programing, &std2_science);
  
  printf("Student 3 : ");
  scanf(" %d %d %d", &std3_math, &std3_programing, &std3_science);
  
 
  printf("score math %d programing %d science %d \n",std1_math ,std1_programing ,std1_science);
  printf("score math %d programing %d science %d \n",std2_math ,std2_programing ,std2_science);
  printf("score math %d programing %d science %d \n",std3_math ,std3_programing ,std3_science);

  printf("***********************\n");
  printf("Total scor \n");
  result = std1_math + std1_programing + std1_science;
  printf("Student 1 : %.2f \n", result);
  result = std2_math + std2_programing + std2_science;
  printf("Student 2 : %.2f \n", result);
  result = std3_math + std3_programing + std3_science;
  printf("Student 3 : %.2f \n", result);
  
  printf("***********************\n");
  

  
  

  


}