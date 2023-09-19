#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdarg.h>

/* main printf function prototype */
int _printf(const char *format, ...);


/**
 * struct conversion_specifiers - maps printf conversion
 * specifier their functions
 * @spec_char: character representing
 * the conversion specifier
 * @spec_func: function to be executed
 * for the given conversion specifier
 *
 */
typedef struct conversion_specifiers
{
	char spec_char;
	int (*spec_func)(char *);
} con_spec;

/* conversion specifiers function prototypes go here */
int c_spec_func(char *);
int s_spec_func(char *);
/* end of conversion specifiers function prototypes */


/* conversion specifiers helper functions prototypes go here */

int get_spec_func(char, va_list);

/* end of conversion specifiers helper functions prototype */


/**
 * struct length_modifiers - maps printf length modifiers
 * characters to their handler functions
 * @mod_char: character representing
 * the length modifier
 * @mod_func: function to be executed for
 * the given length modifier
 *
 */
typedef struct length_modifiers
{
	char mod_char;
	int (*mod_func)(char *);
} len_mod;

/* length modifiers function prototypes go here */

/* end of length modifiers function prototypes */


/* length modifiers helper functions prototypes go here */
int (*get_mod_func(char))(char *);
/* end of length modifiers helper functions prototype */



/**
 * struct flag - maps printf flag character their functions
 * @flag_char: character representing the flag character
 * @flag_func: function to be executed for the given flag character
 *
 */
typedef struct flag
{
	char flag_char;
	int (*flag_func)(char *);
} flag_t;

/* flag function prototypes go here */

/* end of flag function prototypes */

/* flag helper functions prototypes goes here */
int (*get_flag_func(char))(char *);
/* end of flag helper prototypes */


/**
 * struct field_width - maps printf field width charaters their functions
 * @width_char: character representing the conversion specifier
 * @width_func: function to be executed for the given conversion specifier
 *
 */
typedef struct field_width
{
	char width_char;
	int (*width_func)(char *);
} width_t;

/* field width function prototypes go here */

/* end of field width function prototypes */

/* field width helper functions prototypes goes here */
int (*get_width_func(char))(char *);
/* end of field width helper prototypes */


/**
 * struct precision - maps printf precision characters their functions
 * @prec_char: character representing the precision
 * @prec_func: function to be executed for the given precision
 *
 */
typedef struct precision
{
	char prec_char;
	int (*prec_func)(char *);
} precision_t;

/* precision function prototypes go here */

/* end of precision function prototypes */

/* flag helper functions prototypes goes here */
int (*get_prec_func(char))(char *);
/* end of flag helper prototypes */


#endif /* ends ifndef */
