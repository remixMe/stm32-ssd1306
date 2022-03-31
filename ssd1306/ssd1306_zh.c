#include "ssd1306_zh.h"
extern SSD1306_t SSD1306;

void ssd1306_WriteChar_ZH(uint32_t index, const ZH_FontDef *Font, SSD1306_Color_t color) {
    if (index >= Font->NumberOfChar) return;
    // Check remaining space on current line
    if (SSD1306_WIDTH < (SSD1306.CurrentX + Font->FontWidth)
        || SSD1306_HEIGHT < (SSD1306.CurrentY + Font->FontHeight)) {
        // Not enough space on current line
        return;
    }
    uint32_t BytePerRow = Font->FontWidth / 8 + ((Font->FontWidth % 8) ? 1 : 0);
    for (uint32_t CurrentRow = 0; CurrentRow < Font->FontHeight; CurrentRow++) {
        const uint8_t *RowData =
            Font->data + (index * Font->FontHeight * BytePerRow + CurrentRow * BytePerRow);
        for (uint32_t CurrentBit = 0; CurrentBit < Font->FontWidth; CurrentBit++) {
            if (((*(RowData + CurrentBit / 8)) >> (CurrentBit % 8)) & 0x01) {
                ssd1306_DrawPixel(SSD1306.CurrentX + CurrentBit, SSD1306.CurrentY + CurrentRow,
                                  (SSD1306_Color_t)color);
            } else {
                ssd1306_DrawPixel(SSD1306.CurrentX + CurrentBit, SSD1306.CurrentY + CurrentRow,
                                  (SSD1306_Color_t)!color);
            }
        }
    }

    // The current space is now taken
    SSD1306.CurrentX += Font->FontWidth;
}
void ssd1306_WriteString_ZH(uint32_t *index, uint8_t charNum, const ZH_FontDef *Font,
                            SSD1306_Color_t color) {
}