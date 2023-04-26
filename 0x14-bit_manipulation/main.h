#ifndef MAIN_H
#define MAIN_H

unsigned long int _power(unsigned int base, unsigned int pow);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int j);
int get_bit(unsigned long int j, unsigned int index);
int set_bit(unsigned long int *j, unsigned int index);
int clear_bit(unsigned long int *j, unsigned int index);
unsigned int flip_bits(unsigned long int j, unsigned long int m);
int get_endianness(void);
int _putchar(char c);

#endif

