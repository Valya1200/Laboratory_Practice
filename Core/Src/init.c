#include "init.h"

void GPIO_Init_CMSIS(void){
    SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOBEN | RCC_AHB1ENR_GPIOCEN);
    SET_BIT(GPIOB->MODER, GPIO_MODER_MODE7_0);
    CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_7);
    SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDER_OSPEEDR7_0);
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR7_0);

    SET_BIT(GPIOB->MODER, GPIO_MODER_MODE0_0);
    CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_0);
    SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDER_OSPEEDR0_0);
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR0_0);

    SET_BIT(GPIOB->MODER, GPIO_MODER_MODE14_0);
    CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_14);
    SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDER_OSPEEDR14_0);
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR14_0);

    CLEAR_BIT(GPIOB->MODER, GPIO_MODER_MODE12_Msk);
    CLEAR_BIT(GPIOB->MODER, GPIO_MODER_MODE11_Msk);
    CLEAR_BIT(GPIOB->MODER, GPIO_MODER_MODE10_Msk);
}
