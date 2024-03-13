## 0x08.C-Static Libraries

## Resources

**Read or watch**:

-   [What Is A “C” Library? What Is It Good For?](https://intranet.alxswe.com/rltoken/XB1iH0qE6gshx0x8TfRAPQ "What Is A "C" Library? What Is It Good For?")
-   [Creating A Static “C” Library Using “ar” and “ranlib”](https://intranet.alxswe.com/rltoken/XB1iH0qE6gshx0x8TfRAPQ "Creating A Static "C" Library Using "ar" and "ranlib"")
-   [Using A “C” Library In A Program](https://intranet.alxswe.com/rltoken/XB1iH0qE6gshx0x8TfRAPQ "Using A "C" Library In A Program")
-   [What is difference between Dynamic and Static library(Static and Dynamic linking)](https://intranet.alxswe.com/rltoken/PexOGO-npR_ZDQk-SpOR9g "What is difference between Dynamic and Static library(Static and Dynamic linking)") (_stop at 4:44_)

**man or help**:

-   `ar`
-   `ranlib`
-   `nm`

## Additional Resource

-   [Static Libraries: How to Create & Use them in C programming](https://intranet.alxswe.com/rltoken/1BPeabLhE4bu86H3g3kmHA "Static Libraries: How to Create & Use them in C programming")

## Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://intranet.alxswe.com/rltoken/dkyFVPYqNQb2pkuknMb9Sw "explain to anyone"), **without the help of Google**:

### General

-   What is a static library, how does it work, how to create one, and how to use it
-   Basic usage of `ar`, `ranlib`, `nm`

### Copyright - Plagiarism

-   You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
-   You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
-   You are not allowed to publish any content of this project.
-   Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

### C

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is mandatory
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
-   You are allowed to use [\_putchar](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c "_putchar")
-   You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
-   In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
-   The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
-   Don’t forget to push your header file

### Bash

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your scripts will be tested on Ubuntu 20.04 LTS
-   All your files should end with a new line ([why?](http://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789))
-   The first line of all your files should be exactly `#!/bin/bash`
-   A `README.md` file, at the root of the folder of the project, describing what each script is doing
-   All your files must be executable

## More Info

You do not need to learn about dynamic libraries, yet.
