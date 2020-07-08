#ifndef FREELSD_KERNEL_GFX_FONTS_HEADER
#define FREELSD_KERNEL_GFX_FONTS_HEADER

#include <stdint.h>

namespace gfx {
    // Used as a backspace character.
    uint64_t blankcanvas = 0xFFFFFFFFFFFFFFFFUL;

    uint64_t fontmap[128] = {
        0x0200000000000000UL,  // U+0000 (nul)
        0x0000000000000000UL,  // U+0001 (space)
        0x0000000000000000UL,  // U+0002 (space)
        0x0000000000000000UL,  // U+0003 (space)
        0x0000000000000000UL,  // U+0004 (space)
        0x0000000000000000UL,  // U+0005 (space)
        0x0000000000000000UL,  // U+0006 (space)
        0x0000000000000000UL,  // U+0007 (space)
        0x0000000000000000UL,  // U+0008 (space)
        0x0000000000000000UL,  // U+0009 (space)
        0x0000000000000000UL,  // U+000A (space)
        0x0000000000000000UL,  // U+000B (space)
        0x0000000000000000UL,  // U+000C (space)
        0x0000000000000000UL,  // U+000D (space)
        0x0000000000000000UL,  // U+000E (space)
        0x0000000000000000UL,  // U+000F (space)
        0x0000000000000000UL,  // U+0010 (space)
        0x0000000000000000UL,  // U+0011 (space)
        0x0000000000000000UL,  // U+0012 (space)
        0x0000000000000000UL,  // U+0013 (space)
        0x0000000000000000UL,  // U+0014 (space)
        0x0000000000000000UL,  // U+0015 (space)
        0x0000000000000000UL,  // U+0016 (space)
        0x0000000000000000UL,  // U+0017 (space)
        0x0000000000000000UL,  // U+0018 (space)
        0x0000000000000000UL,  // U+0019 (space)
        0x0000000000000000UL,  // U+001A (space)
        0x0000000000000000UL,  // U+001B (space)
        0x0000000000000000UL,  // U+001C (space)
        0x0000000000000000UL,  // U+001D (space)
        0x0000000000000000UL,  // U+001E (space)
        0x0000000000000000UL,  // U+001F (space)
        0x0000000000000000UL,  // U+0020 (space)
        0x183C3C1818001800UL,  // U+0021 (!)
        0x3636000000000000UL,  // U+0022 (")
        0x36367F367F363600UL,  // U+0023 (#)
        0x0C3E031E301F0C00UL,  // U+0024 ($)
        0x006333180C666300UL,  // U+0025 (%)
        0x1C361C6E3B336E00UL,  // U+0026 (&)
        0x0606030000000000UL,  // U+0027 (')
        0x180C0606060C1800UL,  // U+0028 (()
        0x060C1818180C0600UL,  // U+0029 ())
        0x00663CFF3C660000UL,  // U+002A (*)
        0x000C0C3F0C0C0000UL,  // U+002B (+)
        0x00000000000C0C06UL,  // U+002C (,)
        0x0000003F00000000UL,  // U+002D (-)
        0x00000000000C0C00UL,  // U+002E (.)
        0x6030180C06030100UL,  // U+002F (/)
        0x3E63737B6F673E00UL,  // U+0030 (0)
        0x0C0E0C0C0C0C3F00UL,  // U+0031 (1)
        0x1E33301C06333F00UL,  // U+0032 (2)
        0x1E33301C30331E00UL,  // U+0033 (3)
        0x383C36337F307800UL,  // U+0034 (4)
        0x3F031F3030331E00UL,  // U+0035 (5)
        0x1C06031F33331E00UL,  // U+0036 (6)
        0x3F3330180C0C0C00UL,  // U+0037 (7)
        0x1E33331E33331E00UL,  // U+0038 (8)
        0x1E33333E30180E00UL,  // U+0039 (9)
        0x000C0C00000C0C00UL,  // U+003A (:)
        0x000C0C00000C0C06UL,  // U+003B (//)
        0x180C0603060C1800UL,  // U+003C (<)
        0x00003F00003F0000UL,  // U+003D (=)
        0x060C1830180C0600UL,  // U+003E (>)
        0x1E3330180C000C00UL,  // U+003F (?)
        0x3E637B7B7B031E00UL,  // U+0040 (@)
        0x0C1E33333F333300UL,  // U+0041 (A)
        0x3F66663E66663F00UL,  // U+0042 (B)
        0x3C66030303663C00UL,  // U+0043 (C)
        0x1F36666666361F00UL,  // U+0044 (D)
        0x7F46161E16467F00UL,  // U+0045 (E)
        0x7F46161E16060F00UL,  // U+0046 (F)
        0x3C66030373667C00UL,  // U+0047 (G)
        0x3333333F33333300UL,  // U+0048 (H)
        0x1E0C0C0C0C0C1E00UL,  // U+0049 (I)
        0x7830303033331E00UL,  // U+004A (J)
        0x6766361E36666700UL,  // U+004B (K)
        0x0F06060646667F00UL,  // U+004C (L)
        0x63777F7F6B636300UL,  // U+004D (M)
        0x63676F7B73636300UL,  // U+004E (N)
        0x1C36636363361C00UL,  // U+004F (O)
        0x3F66663E06060F00UL,  // U+0050 (P)
        0x1E3333333B1E3800UL,  // U+0051 (Q)
        0x3F66663E36666700UL,  // U+0052 (R)
        0x1E33070E38331E00UL,  // U+0053 (S)
        0x3F2D0C0C0C0C1E00UL,  // U+0054 (T)
        0x3333333333333F00UL,  // U+0055 (U)
        0x33333333331E0C00UL,  // U+0056 (V)
        0x6363636B7F776300UL,  // U+0057 (W)
        0x6363361C1C366300UL,  // U+0058 (X)
        0x3333331E0C0C1E00UL,  // U+0059 (Y)
        0x7F6331184C667F00UL,  // U+005A (Z)
        0x1E06060606061E00UL,  // U+005B ([)
        0x03060C1830604000UL,  // U+005C (\)
        0x1E18181818181E00UL,  // U+005D (])
        0x081C366300000000UL,  // U+005E (^)
        0x00000000000000FFUL,  // U+005F (_)
        0x0C0C180000000000UL,  // U+0060 (`)
        0x00001E303E336E00UL,  // U+0061 (a)
        0x0706063E66663B00UL,  // U+0062 (b)
        0x00001E3303331E00UL,  // U+0063 (c)
        0x3830303e33336E00UL,  // U+0064 (d)
        0x00001E333f031E00UL,  // U+0065 (e)
        0x1C36060f06060F00UL,  // U+0066 (f)
        0x00006E33333E301FUL,  // U+0067 (g)
        0x0706366E66666700UL,  // U+0068 (h)
        0x0C000E0C0C0C1E00UL,  // U+0069 (i)
        0x300030303033331EUL,  // U+006A (j)
        0x070666361E366700UL,  // U+006B (k)
        0x0E0C0C0C0C0C1E00UL,  // U+006C (l)
        0x0000337F7F6B6300UL,  // U+006D (m)
        0x00001F3333333300UL,  // U+006E (n)
        0x00001E3333331E00UL,  // U+006F (o)
        0x00003B66663E060FUL,  // U+0070 (p)
        0x00006E33333E3078UL,  // U+0071 (q)
        0x00003B6E66060F00UL,  // U+0072 (r)
        0x00003E031E301F00UL,  // U+0073 (s)
        0x080C3E0C0C2C1800UL,  // U+0074 (t)
        0x0000333333336E00UL,  // U+0075 (u)
        0x00003333331E0C00UL,  // U+0076 (v)
        0x0000636B7F7F3600UL,  // U+0077 (w)
        0x000063361C366300UL,  // U+0078 (x)
        0x00003333333E301FUL,  // U+0079 (y)
        0x00003F190C263F00UL,  // U+007A (z)
        0x380C0C070C0C3800UL,  // U+007B ({)
        0x1818180018181800UL,  // U+007C (|)
        0x070C0C380C0C0700UL,  // U+007D (})
        0x6E3B000000000000UL,  // U+007E (~)
        0x0000000000000000UL,  // U+007F (space)
    };
}

#endif
