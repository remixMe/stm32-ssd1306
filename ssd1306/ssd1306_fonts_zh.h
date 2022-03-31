#ifndef __SSD1306_FONTS_ZH_H__
#define __SSD1306_FONTS_ZH_H__
#include "main.h"
#include "ssd1306_conf.h"
typedef struct {
    const uint8_t  FontWidth;  /*!< Font width in pixels */
    const uint8_t  FontHeight; /*!< Font height in pixels */
    const uint8_t *data;       /*!< Pointer to data font data array */
    const uint32_t NumberOfChar;
} ZH_FontDef;

extern const ZH_FontDef ZH_Font_16x16;
extern const ZH_FontDef ZH_Font_20x20;
#endif // !__SSD1306_FONTS_ZH_H