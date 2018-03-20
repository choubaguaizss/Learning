#include <stdio.h>
int main(void){
  /* MCU Configuration-------------------------*/
  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */   
   HAL_Init();
  /* Configure the system clock */   
   SystemClock_Config();
  /* Initialize all configured peripherals */   
   MX_GPIO_Init();
  /* Infinite loop */   
  /* USER CODE BEGIN WHILE */   
  while (1)   {       
   HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_0);
   HAL_Delay(500);   // 500ms   
  /* USER CODE END WHILE */
  /* USER CODE BEGIN 3 */
  }   
/* USER CODE END 3 */
}