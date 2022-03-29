#ifndef __SSD1306_ZH_H__
#define __SSD1306_ZH_H__

#include "ssd1306_conf.h"
#include "ssd1306.h"
#include "ssd1306_fonts.h"
#include "ssd1306_fonts_zh.h"

typedef struct {
    const uint8_t  FontWidth;  /*!< Font width in pixels */
    const uint8_t  FontHeight; /*!< Font height in pixels */
    const uint8_t *data;       /*!< Pointer to data font data array */
} ZH_FontDef;

void ssd1306_WriteChar_ZH(char ch, ZH_FontDef Font, SSD1306_Color_t color);
void ssd1306_WriteString_ZH(char *str, ZH_FontDef Font, SSD1306_Color_t color);

#endif //__SSD1306_ZH_H__