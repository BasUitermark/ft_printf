#ifndef DEF_H
# define DEF_H
//=Libraries=//
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

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