#pragma once

/* We support different character sets for different fonts
 * Various character sets are used for various fonts to optimize the memory
 */
enum class FontCharacterSet : uint8_t {
    full = 0, /// standard ASCII (32 - 127) + all required non-ascii latin + all required Katakana characters + japanese ',' + japanese '.' + cyrillic alphabet
    latin = 1, /// standard ASCII (32 - 127) + all required non-ascii latin
    digits = 2, /// digits (0 - 9) + '.' + '?' + '%' + '-'
    latin_and_katakana = 3, /// standard ASCII <32;127> + all required non-ascii latin + all katakana characters <0x30A0;0x30FF> + japanese ',' + japanese '.'
    latin_and_cyrillic = 4, /// standard ASCII <32;127> + all required non-ascii latin + all cyrillic standard characters <0x0400;0x04FF>
};
