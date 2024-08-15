<p align="center">
	<img src="https://img.shields.io/github/last-commit/marianaobmorais/get_next_line?color=%2312bab9&style=flat-square"/>
</p>

# get_next_line

#### Finished in 2024-05-13

## About

 This function returns a line read from a File Descriptor.

 Mandatory equirements:  


• Repeated calls (e.g., using a loop) to your `get_next_line()` function should let you read the text file pointed to by the file descriptor, one line at a time.  
• Your function should return the line that was read. If there is nothing else to read or if an error occurred, it should return `NULL`.  
• Make sure that your function works as expected both when reading a file and when reading from the standard input.  
• Please note that the returned line should include the terminating `\n` character, except if the end of file was reached and does not end with a `\n` character.  

 Bonus requirements:  


• Develop `get_next_line()` using only one static variable.  
• Your get_next_line() can manage multiple file descriptors at the same time. For example, if you can read from the file descriptors 3, 4 and 5, you should be able to read from a different fd per call without losing the reading thread of each file descriptor or returning a line from another fd. It means that you should be able to call `get_next_line()` to read from fd 3, then fd 4, then 5, then once again 3, once again 4, and so forth. Append the `_bonus.[c\h]` suffix to the bonus part files.

## Build

 Clone the repository: 
 ```shell
git clone https://github.com/marianaobmorais/get_next_line.git
```
 Enter the clonned directory:
 ```shell
cd get_next_line
```
Copy the source files .c and header .h to your project directory.

## Usage

Add `#include "get_net_line.h"` – or `#include "get_net_line_bonus.h"` – to your source file.  

```c
#include "get_next_line.h"
#include <stdio.h>    // printf()
#include <unistd.h>   // read(), write()
#include <fcntl.h>    //open()

int	main(void)
{
	int		fd;
	char	*path = "./text_to_read.txt";
	char	*str;

	fd = open(path, O_RDONLY);
	str = get_next_line(fd);
	while (str)
	{
		printf ("%s", str);
		free(str);
		str = get_next_line(fd);
	}
	close(fd);
	return (0);
}
```

Include the `get_next_line.c` and `get_next_line_utils.c` – or `get_next_line_bonus.c` and `get_next_line_utils_bonus.c` – when compiling your project:

```shell
cc -Wall -Werror -Wextra your_project.c get_next_line.c and get_next_line_utils.c
```

## The Norm

This project is written in accordance to the 42 School's "The Norm" (_Version 4_). To review the Norm, [click here](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf).

## Contributions

If you find any issues or have suggestions for improvements, please feel free to open an issue or submit a pull request.

## Message to students

If you are searching resources to learn more about your own get_next_line, I encourage you to turn to your peers and the function manuals. Do not implement any code you do not understand and cannot code from scratch.
