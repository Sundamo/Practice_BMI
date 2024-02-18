#include <stdio.h>

int main(void) 
{
  float BMI;
  int weight;
  int height;

  printf("Enter your weight in kg:");
  scanf("%d", &weight);
  printf("Enter your height in m:");
  scanf("%d", &height);
  
  /* Calculate BMI after obtaining weight and height */
  BMI = weight / (height * height * 1.0);

  /* Convert one operand to float to ensure floating point division */
  printf("Your BMI is %.2f\n", BMI);

  if (BMI < 18)
  {
    printf("You are underweight");
  }
  else if (BMI >= 18 && BMI <= 25)
  {
    printf("You are normal");
  }
  else if (BMI >= 26 && BMI <= 29)
  {
    printf("You are overweight");
  }
  else
  {
    printf("You are obese\n");
    if (BMI >= 30 && BMI <= 34)
    {
      printf("You are class 1 obese");
    }
    else if (BMI >= 35 && BMI <= 39)
    {
      printf("You are class 2 obese");
    }
    else
    {
      printf("You are class 3 obese");
    }
  }
  return 0;
}