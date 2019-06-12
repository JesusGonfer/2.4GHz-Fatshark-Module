#include "logo.h"

PROGMEM const unsigned char logo[] = {
112,18,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
  0x00,0x03,0xC0,0x40,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x7E,0x01,0xC0,
  0x00,0x1F,0xC0,0xC0,0x01,0xE0,0x40,0x30,0x3C,0x0C,0x10,0x0F,0x07,0xE0,
  0x00,0x7F,0x01,0xC3,0x03,0xE0,0xE0,0x78,0x7C,0x1E,0x38,0x23,0x9F,0xF0,
  0x00,0x78,0x01,0xCF,0x07,0xE1,0xE0,0xF0,0xFC,0x3E,0x38,0xC3,0xBC,0xF0,
  0x00,0xFC,0x03,0xFE,0x0F,0xC3,0xC3,0xE1,0xF8,0x3E,0x7B,0x83,0xB1,0xE0,
  0x00,0x7F,0x03,0xF8,0x1F,0xC3,0xF7,0xE3,0xF8,0x7E,0x73,0x87,0x83,0xE0,
  0x00,0x1F,0x87,0xF0,0x1D,0xC7,0xFF,0xC3,0xB8,0x7E,0xE3,0xFF,0x07,0xC0,
  0x00,0x07,0xC7,0xC0,0x39,0xCF,0x7F,0xC7,0x39,0xE7,0xE1,0xFC,0x0F,0x80,
  0x00,0x03,0xCF,0xC0,0x7F,0xFF,0x7B,0xCF,0xFE,0xE7,0xC3,0xF8,0x1F,0x00,
  0x00,0x07,0x9F,0xC0,0xFF,0xFE,0x33,0x9F,0xFF,0xC7,0xCF,0xF8,0x3E,0x00,
  0x00,0x0F,0x9F,0xE3,0xFF,0x9C,0x07,0xFF,0xF1,0xC7,0x9E,0x0C,0x7C,0x70,
  0x00,0x3F,0x1C,0xF3,0xC3,0x9C,0x07,0x78,0x73,0x87,0x9C,0x18,0xFF,0xE0,
  0x01,0xFC,0x1C,0x73,0x83,0x18,0x0F,0x70,0x63,0x87,0x1C,0xF9,0xFF,0x80,
  0x07,0xF0,0x28,0x3F,0x03,0x30,0x0C,0xE0,0x64,0x07,0x1F,0xE1,0xFC,0x00,
  0x3F,0x80,0x00,0x1A,0x01,0x00,0x00,0x00,0x24,0x00,0x0F,0xC0,0xE0,0x00,
  0x7E,0x00,0x00,0x08,0x01,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 
};


PROGMEM const unsigned char bitmap_nkizw_OSD[] = {
  56,32,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ........................................................
  0x00,0x00,0x00,0x00,0x00,0x70,0x00, // .........................................###............
  0x00,0x00,0x00,0x00,0x00,0x70,0x00, // .........................................###............
  0x00,0x00,0x00,0x00,0x00,0x70,0x00, // .........................................###............
  0x00,0xFF,0xE0,0xFF,0x06,0x73,0x00, // ........###########.....########.....##..###..##........
  0x01,0x00,0x1F,0xFF,0xF8,0xF8,0x80, // .......#...........##################...#####...#.......
  0x02,0x00,0x01,0xFF,0x80,0x70,0x40, // ......#................##########........###.....#......
  0x04,0x00,0x01,0x00,0x80,0x20,0x20, // .....#.................#........#.........#.......#.....
  0x04,0x00,0x01,0x00,0x80,0x00,0x20, // .....#.................#........#.................#.....
  0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ........................................................
  0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC, // ..####################################################..
  0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE, // .######################################################.
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // ########################################################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x0F, // ##########################################..........####
  0xFF,0xFB,0xBF,0xFF,0xFF,0xBF,0xF7, // #############.###.#######################.##########.###
  0xFF,0xF7,0x7F,0xFF,0xFF,0xBF,0xF7, // ############.###.########################.##########.###
  0xFF,0xEE,0xFF,0xFF,0xFF,0xB4,0x37, // ###########.###.#########################.##.#....##.###
  0x7F,0xDD,0xDF,0xFF,0xFF,0xA7,0xF6, // .#########.###.###.######################.#..#######.##.
  0xFF,0xBB,0xBF,0xFF,0xFF,0xBC,0x37, // #########.###.###.#######################.####....##.###
  0xFF,0x77,0x7F,0xFF,0xFF,0xA7,0xF7, // ########.###.###.########################.#..#######.###
  0xFF,0xEE,0xFF,0xFF,0xFF,0xB4,0x37, // ###########.###.#########################.##.#....##.###
  0xFF,0xDD,0xFF,0xFF,0xFF,0xBF,0xF7, // ##########.###.##########################.##########.###
  0xFF,0xBB,0xFF,0xC3,0xFF,0xC0,0x0F, // #########.###.############....############..........####
  0x7F,0xFF,0xFF,0x81,0xFF,0xFF,0xFE, // .########################......########################.
  0x3F,0xFF,0xFF,0x00,0xFF,0xFF,0xFC, // ..######################........######################..
  0x1F,0xFF,0xFE,0x00,0x7F,0xFF,0xF8, // ...####################..........####################...
  0x0F,0xFF,0xFC,0x00,0x3F,0xFF,0xF0, // ....##################............##################....
  0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ........................................................
  0x01,0x80,0x30,0x00,0x0C,0x01,0x80, // .......##.........##................##.........##.......
  0x00,0x7F,0xC0,0x00,0x03,0xFE,0x00, // .........#########....................#########.........
  0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ........................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00  // ........................................................
};

PROGMEM const unsigned char bitmap_hd85pj_OSD[] = {
  56,32,
  0x00,0x00,0x3E,0x00,0x00,0x00,0x00, // ..................#####.................................
  0x00,0x00,0x3E,0x00,0x00,0x00,0x00, // ..................#####.................................
  0x00,0x00,0x3E,0x00,0x00,0x00,0x00, // ..................#####.................................
  0x00,0x00,0x3E,0x00,0x03,0xBB,0xA0, // ..................#####...............###.###.###.#.....
  0x00,0x00,0x3E,0x00,0x02,0xA2,0x00, // ..................#####...............#.#.#...#.........
  0x00,0x00,0x3E,0x00,0x02,0xBB,0xA0, // ..................#####...............#.#.###.###.#.....
  0x00,0x00,0x3E,0x00,0x03,0x08,0xA0, // ..................#####...............##....#...#.#.....
  0x00,0x00,0x3E,0x00,0x02,0xBB,0xA0, // ..................#####...............#.#.###.###.#.....
  0x00,0x00,0x3E,0x7C,0x00,0x00,0x00, // ..................#####..#####..........................
  0x00,0x00,0x3E,0x7C,0x00,0x00,0x00, // ..................#####..#####..........................
  0x00,0x00,0x3E,0x7C,0x00,0x00,0x00, // ..................#####..#####..........................
  0x00,0x00,0x3E,0x7C,0x00,0x00,0x00, // ..................#####..#####..........................
  0x00,0x00,0x3E,0x7C,0x00,0x00,0x00, // ..................#####..#####..........................
  0x00,0x00,0x3E,0x7C,0x00,0x00,0x00, // ..................#####..#####..........................
  0x00,0x00,0x3E,0x7C,0x00,0x00,0x00, // ..................#####..#####..........................
  0x00,0x00,0x3E,0x7C,0x00,0x00,0x00, // ..................#####..#####..........................
  0x00,0x00,0x3E,0x7C,0xF8,0x00,0x00, // ..................#####..#####..#####...................
  0x00,0x00,0x3E,0x7C,0xF8,0x00,0x00, // ..................#####..#####..#####...................
  0x00,0x00,0x3E,0x7C,0xF8,0x00,0x00, // ..................#####..#####..#####...................
  0x00,0x00,0x3E,0x7C,0xF8,0x00,0x00, // ..................#####..#####..#####...................
  0x00,0x00,0x3E,0x7C,0xF8,0x00,0x00, // ..................#####..#####..#####...................
  0x00,0x1F,0x3E,0x7C,0xF8,0x00,0x00, // ...........#####..#####..#####..#####...................
  0x00,0x1F,0x3E,0x7C,0xF8,0x00,0x00, // ...........#####..#####..#####..#####...................
  0x00,0x1F,0x3E,0x7C,0xF9,0xF0,0x00, // ...........#####..#####..#####..#####..#####............
  0x0F,0x9F,0x3E,0x7C,0xF9,0xF3,0xE0, // ....#####..#####..#####..#####..#####..#####..#####.....
  0x0F,0x9F,0x3E,0x7C,0xF9,0xF3,0xE0, // ....#####..#####..#####..#####..#####..#####..#####.....
  0x0F,0x9F,0x3E,0x7C,0xF9,0xF3,0xE0, // ....#####..#####..#####..#####..#####..#####..#####.....
  0x0F,0x9F,0x3E,0x7C,0xF9,0xF3,0xE0, // ....#####..#####..#####..#####..#####..#####..#####.....
  0x0F,0x9F,0x3E,0x7C,0xF9,0xF3,0xE0, // ....#####..#####..#####..#####..#####..#####..#####.....
  0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ........................................................
  0x0F,0x9F,0x3E,0x7C,0xF9,0xF3,0xE0, // ....#####..#####..#####..#####..#####..#####..#####.....
  0x00,0x00,0x00,0x00,0x00,0x00,0x00  // ........................................................
};

PROGMEM const unsigned char bitmap_w113l_OSD[] = {
  56,32,
   0x00,0x00,0x0F,0xFF,0xE0,0x00,0x00, // ....................###############.....................
  0x00,0x00,0x1F,0xFF,0xF0,0x00,0x00, // ...................#################....................
  0x00,0x00,0x3F,0xFF,0xF8,0x00,0x00, // ..................###################...................
  0x00,0x00,0x7C,0x00,0x7C,0x00,0x00, // .................#####...........#####..................
  0x00,0x00,0xF8,0x00,0x3E,0x00,0x00, // ................#####.............#####.................
  0x00,0x00,0xF0,0x00,0x1E,0x00,0x00, // ................####...............####.................
  0x00,0x00,0xE0,0x00,0x0E,0x00,0x00, // ................###.................###.................
  0x00,0x00,0xE0,0xEA,0x0E,0x00,0x00, // ................###.....###.#.#.....###.................
  0x00,0x00,0xE0,0x8A,0x0E,0x00,0x00, // ................###.....#...#.#.....###.................
  0x00,0x00,0xE0,0x8E,0x0E,0x00,0x00, // ................###.....#...###.....###.................
  0x00,0x00,0xE0,0x8A,0x00,0x00,0x00, // ................###.....#...#.#.........................
  0x00,0x00,0xE0,0xEA,0x00,0x00,0x00, // ................###.....###.#.#.........................
  0x00,0x00,0xE0,0x00,0x00,0x00,0x00, // ................###.....................................
  0x00,0x00,0xE0,0x00,0x00,0x00,0x00, // ................###.....................................
  0x00,0x00,0xE0,0x00,0x00,0x00,0x00, // ................###.....................................
  0x00,0x00,0xE0,0x00,0x00,0x00,0x00, // ................###.....................................
  0x00,0x00,0xFF,0xFF,0xFE,0x00,0x00, // ................#######################.................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ........................................................
  0x00,0x00,0xFF,0xFF,0xFE,0x00,0x00, // ................#######################.................
  0x00,0x00,0xFF,0xFF,0xFE,0x00,0x00, // ................#######################.................
  0x00,0x00,0xFF,0xE7,0xFE,0x00,0x00, // ................###########..##########.................
  0x00,0x00,0xFF,0xC3,0xFE,0x00,0x00, // ................##########....#########.................
  0x00,0x00,0xFF,0x81,0xFE,0x00,0x00, // ................#########......########.................
  0x00,0x00,0xFF,0x81,0xFE,0x00,0x00, // ................#########......########.................
  0x00,0x00,0xFF,0xC3,0xFE,0x00,0x00, // ................##########....#########.................
  0x00,0x00,0xFF,0xE7,0xFE,0x00,0x00, // ................###########..##########.................
  0x00,0x00,0xFF,0xE7,0xFE,0x00,0x00, // ................###########..##########.................
  0x00,0x00,0xFF,0xE7,0xFE,0x00,0x00, // ................###########..##########.................
  0x00,0x00,0xFF,0xFF,0xFE,0x00,0x00, // ................#######################.................
  0x00,0x00,0xFF,0xFF,0xFE,0x00,0x00, // ................#######################.................
  0x00,0x00,0xFF,0xFF,0xFE,0x00,0x00, // ................#######################.................
  0x00,0x00,0x7F,0xFF,0xFC,0x00,0x00  // .................#####################..................
};

PROGMEM const unsigned char bitmap_ydywrn_OSD[] = {
  56,32,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ........................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ........................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ........................................................
  0x00,0x1F,0xE0,0x0F,0xE0,0x00,0x00, // ...........########.........#######.....................
  0x00,0x0B,0xC0,0x05,0xC0,0x00,0x00, // ............#.####...........#.###......................
  0x00,0x0B,0xC0,0x05,0xC0,0x00,0x00, // ............#.####...........#.###......................
  0x00,0x0B,0xC0,0x05,0xC0,0x00,0x00, // ............#.####...........#.###......................
  0x00,0x00,0x00,0x00,0x03,0xFC,0x00, // ......................................########..........
  0x00,0x3F,0xE0,0x1F,0xF8,0x02,0x00, // ..........#########........##########.........#.........
  0x00,0x2F,0xE0,0x17,0xF8,0x01,0x00, // ..........#.#######........#.########..........#........
  0x00,0x2F,0xE0,0x17,0xF8,0x00,0x80, // ..........#.#######........#.########...........#.......
  0x00,0x2F,0xEF,0xD7,0xF8,0x00,0x80, // ..........#.#######.######.#.########...........#.......
  0x00,0x2F,0xFC,0xF7,0xF8,0x00,0x80, // ..........#.##########..####.########...........#.......
  0x00,0x2F,0xFC,0xF7,0xF8,0x00,0x80, // ..........#.##########..####.########...........#.......
  0x00,0x2F,0xFC,0xF7,0xF8,0x00,0x80, // ..........#.##########..####.########...........#.......
  0x00,0x2F,0xFF,0xF7,0xF8,0x00,0x80, // ..........#.################.########...........#.......
  0x00,0x3F,0xF0,0x3F,0xF8,0x00,0x80, // ..........##########......###########...........#.......
  0x00,0x00,0x00,0x00,0x00,0x00,0x80, // ................................................#.......
  0x00,0x7F,0xF8,0x7F,0xFC,0x00,0x80, // .........############....#############..........#.......
  0x00,0x5F,0xF8,0x5F,0xFD,0x00,0x80, // .........#.##########....#.###########.#........#.......
  0x00,0x5F,0xF8,0x5F,0xFC,0x80,0x80, // .........#.##########....#.###########..#.......#.......
  0x00,0x5F,0xF8,0x5F,0xFC,0x40,0x80, // .........#.##########....#.###########...#......#.......
  0x00,0x5F,0xF8,0x5F,0xFC,0x21,0x00, // .........#.##########....#.###########....#....#........
  0x00,0x5F,0xF8,0x5F,0xFC,0x12,0x00, // .........#.##########....#.###########.....#..#.........
  0x00,0x5F,0xF8,0x5F,0xFC,0x04,0x00, // .........#.##########....#.###########.......#..........
  0x00,0x5F,0xF8,0x5F,0xFC,0x08,0x00, // .........#.##########....#.###########......#...........
  0x00,0x5F,0xF8,0x5F,0xFC,0x12,0x00, // .........#.##########....#.###########.....#..#.........
  0x00,0x5F,0xF8,0x5F,0xFC,0x21,0x00, // .........#.##########....#.###########....#....#........
  0x00,0x5F,0xF8,0x7F,0xFC,0x21,0x00, // .........#.##########....#############....#....#........
  0x00,0x7F,0xF8,0x7F,0xFC,0x1E,0x00, // .........############....#############.....####.........
  0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ........................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00  // ........................................................
};

PROGMEM const unsigned char bitmap_949gqh_OSD[] = {
  56,32,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ........................................................
  0x00,0x00,0x7C,0x00,0x00,0x08,0x00, // .................#####......................#...........
  0x00,0x00,0x3E,0x00,0x00,0x1C,0x00, // ..................#####....................###..........
  0x00,0x00,0x1F,0x00,0x00,0x3C,0x00, // ...................#####..................####..........
  0x00,0x00,0x0F,0x80,0x00,0x78,0x00, // ....................#####................####...........
  0x00,0x00,0x07,0xC0,0x00,0xF0,0x00, // .....................#####..............####............
  0x00,0x08,0x07,0xC0,0x00,0xE0,0x00, // ............#........#####..............###.............
  0x00,0x0C,0x07,0xC0,0x01,0x80,0x00, // ............##.......#####.............##...............
  0x00,0x0E,0x0F,0xC0,0x03,0x00,0x00, // ............###.....######............##................
  0x00,0x0F,0x1D,0xC0,0x06,0x00,0x00, // ............####...###.###...........##.................
  0x00,0x0F,0xFA,0xC0,0x0C,0x00,0x00, // ............#########.#.##..........##..................
  0x00,0x07,0xF5,0xE0,0x18,0x00,0x00, // .............#######.#.####........##...................
  0x00,0x03,0xFB,0xF0,0x70,0x00,0x00, // ..............#######.######.....###....................
  0x00,0x01,0xFF,0xF9,0xE0,0x00,0x00, // ...............##############..####.....................
  0x00,0x00,0xFF,0xFC,0xE0,0x00,0x00, // ................##############..###.....................
  0x00,0x00,0x03,0xFE,0x40,0x00,0x00, // ......................#########..#......................
  0x00,0x00,0x01,0xFF,0x00,0x00,0x00, // .......................#########........................
  0x00,0x00,0x00,0xFF,0x80,0x00,0x00, // ........................#########.......................
  0x00,0x00,0x00,0x7F,0xC0,0x00,0x00, // .........................#########......................
  0x00,0x00,0x00,0x3F,0xE0,0x00,0x00, // ..........................#########.....................
  0x00,0x00,0x01,0x9F,0xF0,0x00,0x00, // .......................##..#########....................
  0x00,0x00,0x03,0x4F,0xF8,0x00,0x00, // ......................##.#..#########...................
  0x00,0x00,0x06,0xA7,0xFC,0x00,0x00, // .....................##.#.#..#########..................
  0x00,0x00,0x0D,0x63,0xFE,0x00,0x00, // ....................##.#.##...#########.................
  0x00,0x00,0x1A,0xC1,0xF7,0x00,0x00, // ...................##.#.##.....#####.###................
  0x00,0x00,0x35,0x80,0xE3,0x80,0x00, // ..................##.#.##.......###...###...............
  0x00,0x00,0x6B,0x00,0x77,0x80,0x00, // .................##.#.##.........###.####...............
  0x00,0x00,0x76,0x00,0x3F,0x80,0x00, // .................###.##...........#######...............
  0x00,0x00,0x3C,0x00,0x1F,0x00,0x00, // ..................####.............#####................
  0x00,0x00,0x18,0x00,0x0E,0x00,0x00, // ...................##...............###.................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ........................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00  // ........................................................
};

PROGMEM const unsigned char bitmap_be8bbq_OSD[] = {
  56,32,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ........................................................
  0x00,0x00,0xFF,0xFF,0xF0,0x00,0x00, // ................####################....................
  0x00,0x00,0x80,0x00,0x10,0x00,0x00, // ................#..................#....................
  0x00,0x00,0x80,0x00,0x10,0x00,0x00, // ................#..................#....................
  0x00,0x00,0x80,0x00,0x10,0x00,0x00, // ................#..................#....................
  0x00,0x00,0x80,0x00,0x10,0x00,0x00, // ................#..................#....................
  0x00,0x00,0x80,0x00,0x10,0x00,0x00, // ................#..................#....................
  0x00,0x00,0x80,0x00,0x10,0x00,0x00, // ................#..................#....................
  0x00,0x00,0x80,0x01,0x10,0x00,0x00, // ................#..............#...#....................
  0x00,0x00,0x80,0x03,0x10,0x00,0x00, // ................#.............##...#....................
  0x00,0x00,0x80,0x07,0x00,0x00,0x00, // ................#............###........................
  0x00,0x00,0x80,0x0F,0xFF,0xF0,0x00, // ................#...........################............
  0x00,0x00,0x80,0x1F,0xFF,0xF8,0x00, // ................#..........##################...........
  0x00,0x00,0x80,0x0F,0xFF,0xFC,0x00, // ................#...........##################..........
  0x00,0x00,0x80,0x07,0x00,0x1C,0x00, // ................#............###...........###..........
  0x00,0x00,0x9C,0x03,0x10,0x1C,0x00, // ................#..###........##...#.......###..........
  0x00,0x00,0x84,0x01,0x10,0x1C,0x00, // ................#....#.........#...#.......###..........
  0x00,0x00,0x80,0x00,0x10,0x1C,0x00, // ................#..................#.......###..........
  0x00,0x00,0x80,0x00,0x10,0x1C,0x00, // ................#..................#.......###..........
  0x00,0x00,0x80,0x00,0x17,0xFC,0x00, // ................#..................#.#########..........
  0x00,0x00,0x80,0x00,0x17,0xF8,0x00, // ................#..................#.########...........
  0x00,0x00,0x80,0x00,0x17,0xF0,0x00, // ................#..................#.#######............
  0x00,0x00,0x80,0x00,0x10,0x00,0x00, // ................#..................#....................
  0x00,0x00,0x80,0x00,0x10,0x00,0x00, // ................#..................#....................
  0x00,0x00,0x80,0x00,0x10,0x00,0x00, // ................#..................#....................
  0x00,0x00,0x80,0x00,0x10,0x00,0x00, // ................#..................#....................
  0x00,0x00,0x80,0x00,0x10,0x00,0x00, // ................#..................#....................
  0x00,0x00,0x80,0x00,0x10,0x00,0x00, // ................#..................#....................
  0x00,0x00,0x80,0x00,0x10,0x00,0x00, // ................#..................#....................
  0x00,0x00,0x80,0x00,0x10,0x00,0x00, // ................#..................#....................
  0x00,0x00,0xFF,0xFF,0xF0,0x00,0x00, // ................####################....................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00  // ........................................................
};

PROGMEM const unsigned char bitmap_6zuzag_OSD[] = {
  56,32,
  0x00,0x00,0x00,0x10,0x00,0x00,0x00, // ...........................#............................
  0x00,0x00,0x00,0x38,0x00,0x00,0x00, // ..........................###...........................
  0x00,0x00,0x00,0x7C,0x00,0x00,0x00, // .........................#####..........................
  0x00,0x00,0x10,0x38,0x10,0x00,0x00, // ...................#......###......#....................
  0x00,0x00,0x38,0x10,0x38,0x00,0x00, // ..................###......#......###...................
  0x00,0x00,0x10,0x10,0x10,0x00,0x00, // ...................#.......#.......#....................
  0x00,0x00,0x18,0x38,0x30,0x00,0x00, // ...................##.....###.....##....................
  0x00,0x00,0x1C,0x38,0x70,0x00,0x00, // ...................###....###....###....................
  0x00,0x00,0x1E,0x7C,0xF0,0x00,0x00, // ...................####..#####..####....................
  0x00,0x00,0x1F,0xFF,0xF0,0x00,0x00, // ...................#################....................
  0x00,0x00,0x1F,0xFF,0xF0,0x00,0x00, // ...................#################....................
  0x00,0x00,0x3F,0xFF,0xF8,0x00,0x00, // ..................###################...................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ........................................................
  0x00,0x00,0x1F,0x7F,0xE0,0x00,0x00, // ...................#####.##########.....................
  0x00,0x00,0x1F,0x7F,0xF0,0x00,0x00, // ...................#####.###########....................
  0x00,0x00,0x1F,0x7F,0xF8,0x00,0x00, // ...................#####.############...................
  0x00,0x00,0x1F,0x7F,0xFC,0x00,0x00, // ...................#####.#############..................
  0x00,0x00,0x1F,0x00,0xFC,0x00,0x00, // ...................#####........######..................
  0x00,0x00,0x1F,0x00,0x7E,0x00,0x00, // ...................#####.........######.................
  0x00,0x00,0x1F,0x00,0x3E,0x00,0x00, // ...................#####..........#####.................
  0x00,0x00,0x1F,0x00,0x3E,0x00,0x00, // ...................#####..........#####.................
  0x00,0x00,0x1F,0x00,0x3E,0x00,0x00, // ...................#####..........#####.................
  0x00,0x00,0x1F,0x00,0x3E,0x00,0x00, // ...................#####..........#####.................
  0x00,0x00,0x1F,0x00,0x3E,0x00,0x00, // ...................#####..........#####.................
  0x00,0x00,0x1F,0x00,0x7E,0x00,0x00, // ...................#####.........######.................
  0x00,0x00,0x1F,0x00,0xFC,0x00,0x00, // ...................#####........######..................
  0x00,0x00,0x1F,0x7F,0xFC,0x00,0x00, // ...................#####.#############..................
  0x00,0x00,0x1F,0x7F,0xF8,0x00,0x00, // ...................#####.############...................
  0x00,0x00,0x1F,0x7F,0xF0,0x00,0x00, // ...................#####.###########....................
  0x00,0x00,0x1F,0x7F,0xE0,0x00,0x00, // ...................#####.##########.....................
  0x00,0x00,0x1F,0x7F,0xC0,0x00,0x00, // ...................#####.#########......................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00  // ........................................................
};
