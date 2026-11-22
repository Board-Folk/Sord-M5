
typedef struct {
  uint16_t noshift_1[M5_KEYMAP_SIZE];
  uint16_t shift_1[M5_KEYMAP_SIZE];
  uint16_t noshift_2[M5_KEYMAP_SIZE];
  uint16_t shift_2[M5_KEYMAP_SIZE];
} M5Keymap_t;

typedef struct {
  uint16_t noshift_1[M5_KEYMAP_SIZE];
} M5Serialmap_t;

/* PS/2 Maps are positional in relation to keyboard ASCII codes.

Each map has a normal (without shift) and shifted (with shift) array.

In situations where there is a shift difference, add 160 to the M5 key byte. 
This is when a key is shifted on keyboard, but not shifted on the M5 or vise-versa.

Unused ASCII codes need to have the IGNORE_KEYCODE value in place.(Default 340)

Lost keys remapped:

Back tick is underscore

*/

const PROGMEM M5Keymap_t M5Keymap_main = {
  // map 1 without shift
   {340,340,340,340,340,340,112,112,// ASCII Codes 0x00 - 0x07
     64, 64,340,340,340,340,340,340,// ASCII Codes 0x08 - 0x0F
    340,340,340,340,340,107,  3, 83,// ASCII Codes 0x10 - 0x17
    109,340,340,340,340, 96, 32,  0,// ASCII Codes 0x18 - 0x1F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x20 - 0x27
    340,340,340,340,340,340,340,340,// ASCII Codes 0x28 - 0x2F
    101, 68,100, 84,116, 76,108,  4,// ASCII Codes 0x30 - 0x37
     36, 69,  3, 33, 85, 77,109,340,// ASCII Codes 0x38 - 0x3F
      5, 70, 73, 81, 86, 82,118, 78,// ASCII Codes 0x40 - 0x47
    110, 34,  6, 38, 75,  1,105, 67,// ASCII Codes 0x48 - 0x4F
     99, 66,114,102, 74,  2,113, 98,// ASCII Codes 0x50 - 0x57
     97,106, 65,107, 35, 83,115,117,// ASCII Codes 0x58 - 0x5F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x60 - 0x67
    340,340,340,340,340,340,340,340,// ASCII Codes 0x68 - 0x6F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x70 - 0x77
    340,340,340,340,340,340,340,340,// ASCII Codes 0x78 - 0x7F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x80 - 0x87
    340,340,340, 37,340,340,340,340},// ASCII Codes 0x88 - 0x8F

    
  // map 1 with shift
   {340,340,340,340,340,340,112,112,// ASCII Codes 0x00 - 0x07
     64, 64,340,340,340,340,340,340,// ASCII Codes 0x08 - 0x0F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x10 - 0x17
    340,340,340,340,340, 96, 32,  0,// ASCII Codes 0x18 - 0x1F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x20 - 0x27
    340,340,340,340,340,340,340,340,// ASCII Codes 0x28 - 0x2F
    101, 68,100, 84,116, 76,108,  4,// ASCII Codes 0x30 - 0x37
     36, 69,  3, 33, 85, 77,109,340,// ASCII Codes 0x38 - 0x3F
      5, 70, 73, 81, 86, 82,118, 78,// ASCII Codes 0x40 - 0x47
    110, 34,  6, 38, 75,  1,105, 67,// ASCII Codes 0x48 - 0x4F
     99, 66,114,102, 74,  2,113, 98,// ASCII Codes 0x50 - 0x57
     97,106, 65,107, 35, 83,115,117,// ASCII Codes 0x58 - 0x5F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x60 - 0x67
    340,340,340,340,340,340,340,340,// ASCII Codes 0x68 - 0x6F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x70 - 0x77
    340,340,340,340,340,340,340,340,// ASCII Codes 0x78 - 0x7F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x80 - 0x87
    340,340,340, 37,340,340,340,340},// ASCII Codes 0x88 - 0x8F

  // Same for now....
  // map 2 without shift
   {340,340,340,340,340,340,112,112,// ASCII Codes 0x00 - 0x07
     64, 64,340,340,340,340,340,340,// ASCII Codes 0x08 - 0x0F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x10 - 0x17
    340,340,340,340,340, 96, 32,  0,// ASCII Codes 0x18 - 0x1F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x20 - 0x27
    340,340,340,340,340,340,340,340,// ASCII Codes 0x28 - 0x2F
    101, 68,100, 84,116, 76,108,  4,// ASCII Codes 0x30 - 0x37
     36, 69,  3, 33, 85, 77,109,340,// ASCII Codes 0x38 - 0x3F
      5, 70, 73, 81, 86, 82,118, 78,// ASCII Codes 0x40 - 0x47
    110, 34,  6, 38, 75,  1,105, 67,// ASCII Codes 0x48 - 0x4F
     99, 66,114,102, 74,  2,113, 98,// ASCII Codes 0x50 - 0x57
     97,106, 65,107, 35, 83,115,117,// ASCII Codes 0x58 - 0x5F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x60 - 0x67
    340,340,340,340,340,340,340,340,// ASCII Codes 0x68 - 0x6F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x70 - 0x77
    340,340,340,340,340,340,340,340,// ASCII Codes 0x78 - 0x7F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x80 - 0x87
    340,340,340, 37,340,340,340,340},// ASCII Codes 0x88 - 0x8F

  // map 2 with shift
   {340,340,340,340,340,340,112,112,// ASCII Codes 0x00 - 0x07
     64, 64,340,340,340,340,340,340,// ASCII Codes 0x08 - 0x0F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x10 - 0x17
    340,340,340,340,340, 96, 32,  0,// ASCII Codes 0x18 - 0x1F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x20 - 0x27
    340,340,340,340,340,340,340,340,// ASCII Codes 0x28 - 0x2F
    101, 68,100, 84,116, 76,108,  4,// ASCII Codes 0x30 - 0x37
     36, 69,  3, 33, 85, 77,109,340,// ASCII Codes 0x38 - 0x3F
      5, 70, 73, 81, 86, 82,118, 78,// ASCII Codes 0x40 - 0x47
    110, 34,  6, 38, 75,  1,105, 67,// ASCII Codes 0x48 - 0x4F
     99, 66,114,102, 74,  2,113, 98,// ASCII Codes 0x50 - 0x57
     97,106, 65,107, 35, 83,115,117,// ASCII Codes 0x58 - 0x5F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x60 - 0x67
    340,340,340,340,340,340,340,340,// ASCII Codes 0x68 - 0x6F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x70 - 0x77
    340,340,340,340,340,340,340,340,// ASCII Codes 0x78 - 0x7F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x80 - 0x87
    340,340,340, 37,340,340,340,340}// ASCII Codes 0x88 - 0x8F

};

/*

Serial Key Substitutions

*/

const PROGMEM M5Serialmap_t M5Serialmap_main = {
  // map 1 without shift
   {340,340,340,340,340,340,340,340,// ASCII Codes 0x00 - 0x07
    340,340,340,340,340,340,340,340,// ASCII Codes 0x08 - 0x0F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x10 - 0x17
    340,340,340,340,340,340,340,340,// ASCII Codes 0x18 - 0x1F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x20 - 0x27
    340,340,340,340,340,340,340,340,// ASCII Codes 0x28 - 0x2F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x30 - 0x37
    340,340,340,340,340,340,340,340,// ASCII Codes 0x38 - 0x3F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x40 - 0x47
    340,340,340,340,340,340,340,340,// ASCII Codes 0x48 - 0x4F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x50 - 0x57
    340,340,340,340,340,340,340,340,// ASCII Codes 0x58 - 0x5F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x60 - 0x67
    340,340,340,340,340,340,340,340,// ASCII Codes 0x68 - 0x6F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x70 - 0x77
    340,340,340,340,340,340,340,340,// ASCII Codes 0x78 - 0x7F
    340,340,340,340,340,340,340,340,// ASCII Codes 0x80 - 0x87
    340,340,340,340,340,340,340,340},// ASCII Codes 0x88 - 0x8F
};
