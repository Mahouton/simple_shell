<<<<<<< HEAD
# Simple shell
=======
# Simple_shell Project
>>>>>>> 61dd71654f8efde1fd802c802e45624ab146bc52

### Overview
`shell` is a UNIX command interpreter that replicates core functionalities of the `sh` shell.

### Installation
Clone this repository to your local system and compile using `gcc -Wall -Werror -Wextra -pedantic *.c`.

<<<<<<< HEAD
### Usage
* Once in the shell, use exactly like `sh`. A list of covered features is provided below. The shell can run in either interactive or non-interactive mode.
* Function returns with the specified exit status.

### Features
The shell handles command line input, including arguements, without the use of most standard library functions such as `printf`, `strtok`, or `getline`. In addition to running executables in the PATH, the following features are currently implemented.

|  Builtin Commands  |    Functionality                            |
| ------------------ | ------------------------------------------- |
| `exit [status]`    | Exit shell with specified exit status       |
| `env`              | Print list of current environment variables |
| `setenv`           | Set an environment variable                 |
| `unsetenv`         | Unset an environment variable               |
| `cd`               | Change directories                          |
| `history`			 | Prints command history					   |
| `help` 			 | Displays help for builtin commands		   |
| `alias`			 | Alias a command as another or print aliases |

|  Other Features    |    Functionality                            |
| ------------------ | ------------------------------------------- |
| `Ctrl-D`           | End of file - exit shell                    |
| `Ctrl-C`           | Does not exit shell - (Differs from `sh`)   |
| `;`                | Command separator, allows command chaining  |
| `#`                | Comment indicator                           |
| `<`				 | Redirect input							   |
| `>`				 | Redirect output							   |
| `<<`				 | Append input (heredoc)					   |
| `>>`				 | Append output							   |

### Example Usage
* This shell takes input the same as a standard unix shell.  After running the executable `hsh`, enter desired input and press return.
* `ls -l`
* `exit 98`
* `cd -`

### Release History
* 0.0.1 - First release - 07 May 2022
* 0.0.2 - Second release - 18 May 2022

### About
All files were created and compiled on `Ubuntu 20.04 LTS` using `GCC 4.8.4` with the following flags: `-Wall -Werror -Wextra -pedantic`

### Authors
* Batya Tonny [Github](https://github.com/Chirrrupin)
* Paul  [Github](https://github.com/[])
=======
## Compilation
The shell will be compiled this way:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

## Functionalities of the Simple Shell
> * Usage: simple_shell
> * Display a prompt and wait for the user to type a command.
A command line alaways end swith the new line.
> * The prompt is displayed again each time a command has been executed.
> * The command lines are simple, no semicolons, no pipes, no redirections or any
other advanced features.
> * The command lines ared made only of one word. No arguments will be passed to programs.
> * If an executable cannot be found, print an error message and display the prompt again.
> * Handle errors.
> * Handle the "end of file" condition(Ctrl+D)

>>>>>>> 61dd71654f8efde1fd802c802e45624ab146bc52
