#ifndef ENGLISH_V3_H
#define ENGLISH_V3_H

/*
 * ClockTHREEjr faceplate file.
 * Autogenerated from English_v3.wtf
 * 
 *      Author: 
 *     Licence: 
 * Description:
 *    
 * 
 */

#include "Faceplate.h"

uint8_t english_v3_words[] = {
     32, // # words
      0,  0,  2,       3,  0,  2,       6,  0,  3,       9,  0,  6,     // words
      9,  0,  7,       0,  1,  4,       5,  1,  4,       6,  1,  1,     // words
      9,  1,  7,       0,  2,  4,       3,  2,  2,       8,  2,  3,     // words
      6,  2,  3,       0,  3,  5,       0,  4,  4,       4,  4,  4,     // words
     10,  3,  3,       8,  4,  5,      10,  2,  5,      12,  4,  4,     // words
     13,  3,  3,       4,  3,  6,       0,  5,  6,       7,  5,  2,     // words
     10,  5,  2,      13,  5,  3,       0,  6,  8,       3,  6,  5,     // words
      8,  6,  7,       0,  7,  9,       5,  7,  4,       9,  7,  7,     // words
};

uint8_t english_v3_displays[]= {
   4, // number of bytes per state
//                                          a         
//                                          f  m      
//       t               q                e tm i      
//       wt              u     te         v eo d      
//       ew         t    a     wl  es     e rrnn      
//     hfne       ffh   pr     ee nie     nnnnii      
//     aitnt      iorto at     lvtigvs    iooiggt     
//     lvyteii    vuewntse    aveenhei    noonhhhi    
//    afe-ynst    ereoeotr    tennetnx    gnngtten    
    0b00000011, 0b00000000, 0b01000000, 0b00000100, 
    0b00100011, 0b00000010, 0b01000000, 0b00000100, 
    0b00000111, 0b00000010, 0b01000000, 0b00000100, 
    0b10000011, 0b00000011, 0b01000000, 0b00000100, 
    0b00001011, 0b00000010, 0b01000000, 0b00000100, 
    0b00110011, 0b00000010, 0b01000000, 0b00000100, 
    0b01000011, 0b00000010, 0b01000000, 0b00000100, 
    0b00110011, 0b00001100, 0b00000000, 0b00010011, 
    0b00001011, 0b00001100, 0b00000000, 0b00010011, 
    0b10000011, 0b00001101, 0b00000000, 0b00010011, 
    0b00000111, 0b00001100, 0b00000000, 0b00010011, 
    0b00100011, 0b00001100, 0b00000000, 0b00010011, 
    0b00000011, 0b00001000, 0b00000000, 0b00010011, 
    0b00100011, 0b00001010, 0b00000000, 0b00010011, 
    0b00000111, 0b00001010, 0b00000000, 0b00010011, 
    0b10000011, 0b00001011, 0b00000000, 0b00010011, 
    0b00001011, 0b00001010, 0b00000000, 0b00010011, 
    0b00110011, 0b00001010, 0b00000000, 0b00010011, 
    0b01000011, 0b00001010, 0b00000000, 0b00010011, 
    0b00110011, 0b00010100, 0b00000000, 0b00010011, 
    0b00001011, 0b00010100, 0b00000000, 0b00010011, 
    0b10000011, 0b00010101, 0b00000000, 0b00010011, 
    0b00000111, 0b00010100, 0b00000000, 0b00010011, 
    0b00100011, 0b00010100, 0b00000000, 0b00010011, 
    0b00000011, 0b00010000, 0b00000000, 0b00010011, 
    0b00100011, 0b00010010, 0b00000000, 0b00010011, 
    0b00000111, 0b00010010, 0b00000000, 0b00010011, 
    0b10000011, 0b00010011, 0b00000000, 0b00010011, 
    0b00001011, 0b00010010, 0b00000000, 0b00010011, 
    0b00110011, 0b00010010, 0b00000000, 0b00010011, 
    0b01000011, 0b00010010, 0b00000000, 0b00010011, 
    0b00110011, 0b00100100, 0b00000000, 0b00010011, 
    0b00001011, 0b00100100, 0b00000000, 0b00010011, 
    0b10000011, 0b00100101, 0b00000000, 0b00010011, 
    0b00000111, 0b00100100, 0b00000000, 0b00010011, 
    0b00100011, 0b00100100, 0b00000000, 0b00010011, 
    0b00000011, 0b00100000, 0b00000000, 0b00010011, 
    0b00100011, 0b00100010, 0b00000000, 0b00010011, 
    0b00000111, 0b00100010, 0b00000000, 0b00010011, 
    0b10000011, 0b00100011, 0b00000000, 0b00010011, 
    0b00001011, 0b00100010, 0b00000000, 0b00010011, 
    0b00110011, 0b00100010, 0b00000000, 0b00010011, 
    0b01000011, 0b00100010, 0b00000000, 0b00010011, 
    0b00110011, 0b01000100, 0b00000000, 0b00010011, 
    0b00001011, 0b01000100, 0b00000000, 0b00010011, 
    0b10000011, 0b01000101, 0b00000000, 0b00010011, 
    0b00000111, 0b01000100, 0b00000000, 0b00010011, 
    0b00100011, 0b01000100, 0b00000000, 0b00010011, 
    0b00000011, 0b01000000, 0b00000000, 0b00010011, 
    0b00100011, 0b01000010, 0b00000000, 0b00010011, 
    0b00000111, 0b01000010, 0b00000000, 0b00010011, 
    0b10000011, 0b01000011, 0b00000000, 0b00010011, 
    0b00001011, 0b01000010, 0b00000000, 0b00010011, 
    0b00110011, 0b01000010, 0b00000000, 0b00010011, 
    0b01000011, 0b01000010, 0b00000000, 0b00010011, 
    0b00110011, 0b10000100, 0b00000000, 0b00010011, 
    0b00001011, 0b10000100, 0b00000000, 0b00010011, 
    0b10000011, 0b10000101, 0b00000000, 0b00010011, 
    0b00000111, 0b10000100, 0b00000000, 0b00010011, 
    0b00100011, 0b10000100, 0b00000000, 0b00010011, 
    0b00000011, 0b10000000, 0b00000000, 0b00010011, 
    0b00100011, 0b10000010, 0b00000000, 0b00010011, 
    0b00000111, 0b10000010, 0b00000000, 0b00010011, 
    0b10000011, 0b10000011, 0b00000000, 0b00010011, 
    0b00001011, 0b10000010, 0b00000000, 0b00010011, 
    0b00110011, 0b10000010, 0b00000000, 0b00010011, 
    0b01000011, 0b10000010, 0b00000000, 0b00010011, 
    0b00110011, 0b00000100, 0b00000001, 0b00010011, 
    0b00001011, 0b00000100, 0b00000001, 0b00010011, 
    0b10000011, 0b00000101, 0b00000001, 0b00010011, 
    0b00000111, 0b00000100, 0b00000001, 0b00010011, 
    0b00100011, 0b00000100, 0b00000001, 0b00010011, 
    0b00000011, 0b00000000, 0b00000001, 0b00010011, 
    0b00100011, 0b00000010, 0b00000001, 0b00010011, 
    0b00000111, 0b00000010, 0b00000001, 0b00010011, 
    0b10000011, 0b00000011, 0b00000001, 0b00010011, 
    0b00001011, 0b00000010, 0b00000001, 0b00010011, 
    0b00110011, 0b00000010, 0b00000001, 0b00010011, 
    0b01000011, 0b00000010, 0b00000001, 0b00010011, 
    0b00110011, 0b00000100, 0b00000010, 0b00010011, 
    0b00001011, 0b00000100, 0b00000010, 0b00010011, 
    0b10000011, 0b00000101, 0b00000010, 0b00010011, 
    0b00000111, 0b00000100, 0b00000010, 0b00010011, 
    0b00100011, 0b00000100, 0b00000010, 0b00010011, 
    0b00000011, 0b00000000, 0b00000010, 0b00010011, 
    0b00100011, 0b00000010, 0b00000010, 0b00010011, 
    0b00000111, 0b00000010, 0b00000010, 0b00010011, 
    0b10000011, 0b00000011, 0b00000010, 0b00010011, 
    0b00001011, 0b00000010, 0b00000010, 0b00010011, 
    0b00110011, 0b00000010, 0b00000010, 0b00010011, 
    0b01000011, 0b00000010, 0b00000010, 0b00010011, 
    0b00110011, 0b00000100, 0b00000100, 0b00010011, 
    0b00001011, 0b00000100, 0b00000100, 0b00010011, 
    0b10000011, 0b00000101, 0b00000100, 0b00010011, 
    0b00000111, 0b00000100, 0b00000100, 0b00010011, 
    0b00100011, 0b00000100, 0b00000100, 0b00010011, 
    0b00000011, 0b00000000, 0b00000100, 0b00010011, 
    0b00100011, 0b00000010, 0b00000100, 0b00010011, 
    0b00000111, 0b00000010, 0b00000100, 0b00010011, 
    0b10000011, 0b00000011, 0b00000100, 0b00010011, 
    0b00001011, 0b00000010, 0b00000100, 0b00010011, 
    0b00110011, 0b00000010, 0b00000100, 0b00010011, 
    0b01000011, 0b00000010, 0b00000100, 0b00010011, 
    0b00110011, 0b00000100, 0b00001000, 0b00010011, 
    0b00001011, 0b00000100, 0b00001000, 0b00010011, 
    0b10000011, 0b00000101, 0b00001000, 0b00010011, 
    0b00000111, 0b00000100, 0b00001000, 0b00010011, 
    0b00100011, 0b00000100, 0b00001000, 0b00010011, 
    0b00000011, 0b00000000, 0b00001000, 0b00010011, 
    0b00100011, 0b00000010, 0b00001000, 0b00010011, 
    0b00000111, 0b00000010, 0b00001000, 0b00010011, 
    0b10000011, 0b00000011, 0b00001000, 0b00010011, 
    0b00001011, 0b00000010, 0b00001000, 0b00010011, 
    0b00110011, 0b00000010, 0b00001000, 0b00010011, 
    0b01000011, 0b00000010, 0b00001000, 0b00010011, 
    0b00110011, 0b00000100, 0b00010000, 0b00010011, 
    0b00001011, 0b00000100, 0b00010000, 0b00010011, 
    0b10000011, 0b00000101, 0b00010000, 0b00010011, 
    0b00000111, 0b00000100, 0b00010000, 0b00010011, 
    0b00100011, 0b00000100, 0b00010000, 0b00010011, 
    0b00000011, 0b00000000, 0b00010000, 0b00010011, 
    0b00100011, 0b00000010, 0b00010000, 0b00010011, 
    0b00000111, 0b00000010, 0b00010000, 0b00010011, 
    0b10000011, 0b00000011, 0b00010000, 0b00010011, 
    0b00001011, 0b00000010, 0b00010000, 0b00010011, 
    0b00110011, 0b00000010, 0b00010000, 0b00010011, 
    0b01000011, 0b00000010, 0b00010000, 0b00010011, 
    0b00110011, 0b00000100, 0b00100000, 0b00010011, 
    0b00001011, 0b00000100, 0b00100000, 0b00010011, 
    0b10000011, 0b00000101, 0b00100000, 0b00010011, 
    0b00000111, 0b00000100, 0b00100000, 0b00010011, 
    0b00100011, 0b00000100, 0b00100000, 0b00010011, 
    0b00000011, 0b00000000, 0b00100000, 0b00010011, 
    0b00100011, 0b00000010, 0b00100000, 0b00010011, 
    0b00000111, 0b00000010, 0b00100000, 0b00010011, 
    0b10000011, 0b00000011, 0b00100000, 0b00010011, 
    0b00001011, 0b00000010, 0b00100000, 0b00010011, 
    0b00110011, 0b00000010, 0b00100000, 0b00010011, 
    0b01000011, 0b00000010, 0b00100000, 0b00010011, 
    0b00110011, 0b00000100, 0b01000000, 0b01000000, 
    0b00001011, 0b00000100, 0b01000000, 0b01000000, 
    0b10000011, 0b00000101, 0b01000000, 0b01000000, 
    0b00000111, 0b00000100, 0b01000000, 0b01000000, 
    0b00100011, 0b00000100, 0b01000000, 0b01000000, 
    0b00000011, 0b00000000, 0b01000000, 0b01000000, 
    0b00100011, 0b00000010, 0b01000000, 0b01000000, 
    0b00000111, 0b00000010, 0b01000000, 0b01000000, 
    0b10000011, 0b00000011, 0b01000000, 0b01000000, 
    0b00001011, 0b00000010, 0b01000000, 0b01000000, 
    0b00110011, 0b00000010, 0b01000000, 0b01000000, 
    0b01000011, 0b00000010, 0b01000000, 0b00100011, 
    0b00110011, 0b00001100, 0b00000000, 0b00100011, 
    0b00001011, 0b00001100, 0b00000000, 0b00100011, 
    0b10000011, 0b00001101, 0b00000000, 0b00100011, 
    0b00000111, 0b00001100, 0b00000000, 0b00100011, 
    0b00100011, 0b00001100, 0b00000000, 0b00100011, 
    0b00000011, 0b00001000, 0b00000000, 0b00100011, 
    0b00100011, 0b00001010, 0b00000000, 0b00100011, 
    0b00000111, 0b00001010, 0b00000000, 0b00100011, 
    0b10000011, 0b00001011, 0b00000000, 0b00100011, 
    0b00001011, 0b00001010, 0b00000000, 0b00100011, 
    0b00110011, 0b00001010, 0b00000000, 0b00100011, 
    0b01000011, 0b00001010, 0b00000000, 0b00100011, 
    0b00110011, 0b00010100, 0b00000000, 0b00100011, 
    0b00001011, 0b00010100, 0b00000000, 0b00100011, 
    0b10000011, 0b00010101, 0b00000000, 0b00100011, 
    0b00000111, 0b00010100, 0b00000000, 0b00100011, 
    0b00100011, 0b00010100, 0b00000000, 0b00100011, 
    0b00000011, 0b00010000, 0b00000000, 0b00100011, 
    0b00100011, 0b00010010, 0b00000000, 0b00100011, 
    0b00000111, 0b00010010, 0b00000000, 0b00100011, 
    0b10000011, 0b00010011, 0b00000000, 0b00100011, 
    0b00001011, 0b00010010, 0b00000000, 0b00100011, 
    0b00110011, 0b00010010, 0b00000000, 0b00100011, 
    0b01000011, 0b00010010, 0b00000000, 0b00100011, 
    0b00110011, 0b00100100, 0b00000000, 0b00100011, 
    0b00001011, 0b00100100, 0b00000000, 0b00100011, 
    0b10000011, 0b00100101, 0b00000000, 0b00100011, 
    0b00000111, 0b00100100, 0b00000000, 0b00100011, 
    0b00100011, 0b00100100, 0b00000000, 0b00100011, 
    0b00000011, 0b00100000, 0b00000000, 0b00100011, 
    0b00100011, 0b00100010, 0b00000000, 0b00100011, 
    0b00000111, 0b00100010, 0b00000000, 0b00100011, 
    0b10000011, 0b00100011, 0b00000000, 0b00100011, 
    0b00001011, 0b00100010, 0b00000000, 0b00100011, 
    0b00110011, 0b00100010, 0b00000000, 0b00100011, 
    0b01000011, 0b00100010, 0b00000000, 0b00100011, 
    0b00110011, 0b01000100, 0b00000000, 0b00100011, 
    0b00001011, 0b01000100, 0b00000000, 0b00100011, 
    0b10000011, 0b01000101, 0b00000000, 0b00100011, 
    0b00000111, 0b01000100, 0b00000000, 0b00100011, 
    0b00100011, 0b01000100, 0b00000000, 0b00100011, 
    0b00000011, 0b01000000, 0b00000000, 0b00100011, 
    0b00100011, 0b01000010, 0b00000000, 0b00100011, 
    0b00000111, 0b01000010, 0b00000000, 0b00100011, 
    0b10000011, 0b01000011, 0b00000000, 0b00100011, 
    0b00001011, 0b01000010, 0b00000000, 0b00100011, 
    0b00110011, 0b01000010, 0b00000000, 0b00100011, 
    0b01000011, 0b01000010, 0b00000000, 0b00100011, 
    0b00110011, 0b10000100, 0b00000000, 0b00100011, 
    0b00001011, 0b10000100, 0b00000000, 0b00100011, 
    0b10000011, 0b10000101, 0b00000000, 0b00100011, 
    0b00000111, 0b10000100, 0b00000000, 0b00100011, 
    0b00100011, 0b10000100, 0b00000000, 0b00100011, 
    0b00000011, 0b10000000, 0b00000000, 0b00100011, 
    0b00100011, 0b10000010, 0b00000000, 0b00100011, 
    0b00000111, 0b10000010, 0b00000000, 0b00100011, 
    0b10000011, 0b10000011, 0b00000000, 0b00100011, 
    0b00001011, 0b10000010, 0b00000000, 0b00100011, 
    0b00110011, 0b10000010, 0b00000000, 0b00100011, 
    0b01000011, 0b10000010, 0b00000000, 0b00100011, 
    0b00110011, 0b00000100, 0b00000001, 0b00100011, 
    0b00001011, 0b00000100, 0b00000001, 0b00100011, 
    0b10000011, 0b00000101, 0b00000001, 0b00100011, 
    0b00000111, 0b00000100, 0b00000001, 0b00100011, 
    0b00100011, 0b00000100, 0b00000001, 0b00100011, 
    0b00000011, 0b00000000, 0b00000001, 0b10000011, 
    0b00100011, 0b00000010, 0b00000001, 0b10000011, 
    0b00000111, 0b00000010, 0b00000001, 0b10000011, 
    0b10000011, 0b00000011, 0b00000001, 0b10000011, 
    0b00001011, 0b00000010, 0b00000001, 0b10000011, 
    0b00110011, 0b00000010, 0b00000001, 0b10000011, 
    0b01000011, 0b00000010, 0b00000001, 0b10000011, 
    0b00110011, 0b00000100, 0b00000010, 0b10000011, 
    0b00001011, 0b00000100, 0b00000010, 0b10000011, 
    0b10000011, 0b00000101, 0b00000010, 0b10000011, 
    0b00000111, 0b00000100, 0b00000010, 0b10000011, 
    0b00100011, 0b00000100, 0b00000010, 0b10000011, 
    0b00000011, 0b00000000, 0b00000010, 0b10000011, 
    0b00100011, 0b00000010, 0b00000010, 0b10000011, 
    0b00000111, 0b00000010, 0b00000010, 0b10000011, 
    0b10000011, 0b00000011, 0b00000010, 0b10000011, 
    0b00001011, 0b00000010, 0b00000010, 0b10000011, 
    0b00110011, 0b00000010, 0b00000010, 0b10000011, 
    0b01000011, 0b00000010, 0b00000010, 0b10000011, 
    0b00110011, 0b00000100, 0b00000100, 0b10000011, 
    0b00001011, 0b00000100, 0b00000100, 0b10000011, 
    0b10000011, 0b00000101, 0b00000100, 0b10000011, 
    0b00000111, 0b00000100, 0b00000100, 0b10000011, 
    0b00100011, 0b00000100, 0b00000100, 0b10000011, 
    0b00000011, 0b00000000, 0b00000100, 0b10000011, 
    0b00100011, 0b00000010, 0b00000100, 0b10000011, 
    0b00000111, 0b00000010, 0b00000100, 0b10000011, 
    0b10000011, 0b00000011, 0b00000100, 0b10000011, 
    0b00001011, 0b00000010, 0b00000100, 0b10000011, 
    0b00110011, 0b00000010, 0b00000100, 0b10000011, 
    0b01000011, 0b00000010, 0b00000100, 0b10000011, 
    0b00110011, 0b00000100, 0b00001000, 0b10000011, 
    0b00001011, 0b00000100, 0b00001000, 0b10000011, 
    0b10000011, 0b00000101, 0b00001000, 0b10000011, 
    0b00000111, 0b00000100, 0b00001000, 0b10000011, 
    0b00100011, 0b00000100, 0b00001000, 0b10000011, 
    0b00000011, 0b00000000, 0b00001000, 0b10000011, 
    0b00100011, 0b00000010, 0b00001000, 0b10000011, 
    0b00000111, 0b00000010, 0b00001000, 0b10000011, 
    0b10000011, 0b00000011, 0b00001000, 0b10000011, 
    0b00001011, 0b00000010, 0b00001000, 0b10000011, 
    0b00110011, 0b00000010, 0b00001000, 0b10000011, 
    0b01000011, 0b00000010, 0b00001000, 0b10000011, 
    0b00110011, 0b00000100, 0b00010000, 0b10000011, 
    0b00001011, 0b00000100, 0b00010000, 0b10000011, 
    0b10000011, 0b00000101, 0b00010000, 0b10000011, 
    0b00000111, 0b00000100, 0b00010000, 0b10000011, 
    0b00100011, 0b00000100, 0b00010000, 0b10000011, 
    0b00000011, 0b00000000, 0b10010000, 0b00001000, 
    0b00100011, 0b00000010, 0b10010000, 0b00001000, 
    0b00000111, 0b00000010, 0b10010000, 0b00001000, 
    0b10000011, 0b00000011, 0b10010000, 0b00001000, 
    0b00001011, 0b00000010, 0b10010000, 0b00001000, 
    0b00110011, 0b00000010, 0b10010000, 0b00001000, 
    0b01000011, 0b00000010, 0b10010000, 0b00001000, 
    0b00110011, 0b00000100, 0b10100000, 0b00001000, 
    0b00001011, 0b00000100, 0b10100000, 0b00001000, 
    0b10000011, 0b00000101, 0b10100000, 0b00001000, 
    0b00000111, 0b00000100, 0b10100000, 0b00001000, 
    0b00100011, 0b00000100, 0b10100000, 0b00001000, 
    0b00000011, 0b00000000, 0b10100000, 0b00001000, 
    0b00100011, 0b00000010, 0b10100000, 0b00001000, 
    0b00000111, 0b00000010, 0b10100000, 0b00001000, 
    0b10000011, 0b00000011, 0b10100000, 0b00001000, 
    0b00001011, 0b00000010, 0b10100000, 0b00001000, 
    0b00110011, 0b00000010, 0b10100000, 0b00001000, 
    0b01000011, 0b00000010, 0b10100000, 0b00001000, 
    0b00110011, 0b00000100, 0b11000000, 0b00001000, 
    0b00001011, 0b00000100, 0b11000000, 0b00001000, 
    0b10000011, 0b00000101, 0b11000000, 0b00001000, 
    0b00000111, 0b00000100, 0b01000000, 0b00000100, 
    0b00100011, 0b00000100, 0b01000000, 0b00000100, 
    };
// Minutes hack constants
uint32_t english_v3_minute_leds[]= {
  // n_minute_state, n_minute_led,        led0, led2,           led3,           led4...
                  0,            0, 
};
uint32_t english_v3_minutes_hack[]= {
};

static Faceplate english_v3(english_v3_words, english_v3_displays, english_v3_minute_leds, english_v3_minutes_hack);

#endif
