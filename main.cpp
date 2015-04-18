#include "mbed.h"


int main() {
    
    RCC->AHB1ENR |=1;
    GPIOA->MODER=1;
    GPIOA->OTYPER=0;
    GPIOA->PUPDR=0;
    
    
    while(1)
    {
   
    GPIOA->ODR^=1;
    wait(0.3);
    }
  }
