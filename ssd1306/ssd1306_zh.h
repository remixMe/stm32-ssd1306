#ifndef __SSD1306_ZH_H__
#define __SSD1306_ZH_H__

#include "ssd1306_conf.h"
#include "ssd1306.h"
#include "ssd1306_fonts.h"
#include "ssd1306_fonts_zh.h"

void ssd1306_WriteChar_ZH(uint32_t index, const ZH_FontDef *Font, SSD1306_Color_t color);
void ssd1306_WriteString_ZH(uint32_t *index, uint8_t charNum, const ZH_FontDef *Font,
                            SSD1306_Color_t color);
#endif //__SSD1306_ZH_H__