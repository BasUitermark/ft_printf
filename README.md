<div align="center">

  <img src="assets/print.png" alt="logo" width="200" height="auto" />
  <h1>FT_PRINTF</h1>
  
  <p>
    Your very own printf!
  </p>
</div>
  
  # :notebook_with_decorative_cover: Table of Contents

- [About the Project](#star2-about-the-project)
  * [Features](#dart-features)
- [Getting Started](#toolbox-getting-started)
  * [Installation](#gear-installation)
- [Usage](#eyes-usage)
- [Roadmap](#compass-roadmap)
- [Contact](#handshake-contact)



## :star2: About the Project
A project made in accordance with the ft_printf project for the Codam Core Curriculum.
Using write and variable arguments to make a custom printf function. Teaching the basics of bigger function programming.




### :dart: Features

This version of printf onyl features a couple of flags from the original printf:
- %c: For individual characters
- %s: For char arrays
- %d & %i For digits
- %p: For void pointers
- %x: For lowercase hexadecimal
- %X: For uppercase hexadecimal
- %%: For procentage symbol




## 	:toolbox: Getting Started

### :gear: Installation

As my [libft](https://github.com/BasUitermark/libft) project includes this function I recommend to go over to that project page.



## :eyes: Usage

```c
#include "libft.h"
#include <stdio.h>

{
  int   len = 0;
  char  *str = "Hello World!"
  
  len = ft_printf("Str contains: %s\n", str);
  ft_printf("The number characters printed is: %d\n.", len);
}
```



## :compass: Roadmap

Nothing to do here.



## :handshake: Contact

See my profile page for ways to contact me!
