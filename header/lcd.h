#ifndef INC_LCD_H_
#define INC_LCD_H_

#include "stm32f4xx_hal.h"

// LCD 주소 (0x27 또는 0x3F 중 하나일 수 있음)
#define LCD_I2C_ADDR (0x27 << 1)  // 0x27 또는 0x3F 사용 가능

void lcd_init(I2C_HandleTypeDef *hi2c);
void lcd_send_data(uint8_t data);
void lcd_send_string(char *str);
void lcd_clear(void);
void lcd_set_cursor(uint8_t row, uint8_t col);

void lcd_create_char(uint8_t location, uint8_t charmap[]);
#endif /* INC_LCD_H_ */
