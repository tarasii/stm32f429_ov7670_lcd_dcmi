#ifndef __pin_H
#define __pin_H

#define LED1_Pin GPIO_Pin_6
#define LED1_GPIO_Port GPIOF 
#define LED2_Pin GPIO_Pin_7
#define LED2_GPIO_Port GPIOF
#define LED3_Pin GPIO_Pin_8
#define LED3_GPIO_Port GPIOF
#define LED4_Pin GPIO_Pin_9
#define LED4_GPIO_Port GPIOF

#define GPIO_HIGH(GPIOx, GPIO_Pin) 		GPIOx->BSRRL = GPIO_Pin
#define GPIO_LOW(GPIOx, GPIO_Pin)			GPIOx->BSRRH = GPIO_Pin
#define GPIO_TOGGLE(GPIOx, GPIO_Pin) 	GPIOx->ODR ^= GPIO_Pin
#define GPIO_GETPINVAL(GPIOx, GPIO_Pin)	(((GPIOx)->IDR & (GPIO_Pin)) == 0 ? 0 : 1)

#endif /* __pin_H */

