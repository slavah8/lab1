//Author: Vyacheslav Hlushko vqh5091@psu.edu
//Collaborator Brian Chettle bjc5969@psu.edu
//Collaborator Ching-Ju Chen cxc6001@psu.edu
//Collaborator Youngjae Bae yvb5135@psu.edu
#include <readline/readline.h>
#include <stdlib.h>
#include <stdio.h>


int main(void) {

char *temp_str = readline("Enter temperature in celsius: ");
double celsius = atof(temp_str);
double fahrenheit = (celsius * 9/5) + 32;
printf("%.6f° in Celsius is equivalent to %.6f° Fahrenheit", celsius, fahrenheit);


  
  return 0;
}