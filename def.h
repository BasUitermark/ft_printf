#ifndef DEF_H
# define DEF_H
//=Libraries=//
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

//= MIN & MAX Values=//
# define U8_MAX 0xFF
# define I8_MIN -0x80
# define I8_MAX 0x7F

# define U16_MAX 0xFFFF
# define I16_MIN -0x8000
# define I16_MAX 0x7FFF

# define U32_MAX 0xFFFFFFFF
# define I32_MIN -0x80000000
# define I32_MAX 0x7FFFFFFF

# define U64_MAX 0xFFFFFFFFFFFFFFFF
# define I64_MIN -0x8000000000000000
# define I64_MAX 0x7FFFFFFFFFFFFFFF

# define FD_MIN 0
# define FD_MAX 1024

# define TRUE 1
# define FALSE 0

//= Types ==//
typedef size_t				t_size;

typedef signed char			t_i8;
typedef unsigned char		t_u8;

typedef signed short		t_i16;
typedef unsigned short		t_u16;

typedef signed int			t_i32;
typedef unsigned int		t_u32;

typedef signed long long	t_i64;
typedef unsigned long long	t_u64;

//= Base Strings =//
# define BINARY "01"
# define OCTAL "01234567"
# define DECIMAL "0123456789"
# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

#endif