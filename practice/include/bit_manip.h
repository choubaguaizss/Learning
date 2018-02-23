#define TRUE 1
#define FALSE 0

void set_bit(unsigned int *p_word, unsigned char position);
void clear_bit(unsigned int *p_word, unsigned char position);
unsigned char count_bit(unsigned int word);
int toggle_bit(unsigned int *p_word, unsigned char position);
unsigned char isbit_set(unsigned int *p_word, unsigned char position);
void clear_lowest_set_bit(unsigned int *p_word);
unsigned char get_lowest_set_bit(unsigned int *p_word);
unsigned char check_power_of_2(unsigned int word);
unsigned int multiply10(unsigned int number);
