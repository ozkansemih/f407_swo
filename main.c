#include "main.h"    

#include "stdio.h"    
int fputc(int ch, FILE *f);
uint32_t msTicks;
void delayMs( int ms );
int count =0;
int main (){
			SystemInit();

	//RCC_AHB1PeriphClockCmd( RCC_AHB1Periph_GPIOB, ENABLE);
	SystemCoreClockUpdate();
	if (SysTick_Config(SystemCoreClock / 1000))
		while (1)
			;
		//ITM_SendChar('a');
//printf( "asd");
	while ( 1 ) {

delayMs(1000);
		printf( "ABCD\r\n");

		count++;
	}
		

}


void delayMs( int ms ){


int i=0;
	uint32_t currTicks = msTicks;
	
	while ( msTicks-currTicks < ms){};
		
}
	
	
int fputc(int ch, FILE *f)
{
    return(ITM_SendChar(ch));
}

void SysTick_Handler (){
++msTicks;
}
