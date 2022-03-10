# ALX - Low Level Programming
An ALX Programme Module that deals with C-programming

## Resources
### Read or watch:

 - Everything you need to know to start with C.pdf (You do not have to learn everything in there yet, but make sure you read it entirely first)
 - Dennis Ritchie
 - “C” Programming Language: Brian Kernighan
 - Why C Programming Is Awesome
 - Learning to program in C part 1
 - Learning to program in C part 2
 - Understanding C program Compilation Process
 - Betty Coding Style
 - Hash-bang under the hood (Look at only after you finish consuming the other resources)
 - Linus Torvalds on C vs. C++ (Look at only after you finish consuming the other resources)

### man or help:

 - `gcc`
 - `printf (3)`
 - `puts`
 - `putchar`

#More Info

## Betty linter
To run the `Betty` linter just with command `betty <filename>`:

 - Go to the `Betty` repository
 - Clone the `repo` to your local machine
 - cd into the `Betty` directory
 - Install the linter with `sudo ./install.sh`
 - `emacs` or `vi` a new file called `betty`, and copy the script below:
 
    `#!/bin/bash`
    `# Simply a wrapper script to keep you from having to use betty-style`
    `# and betty-doc separately on every item.`
    `# Originally by Tim Britton (@wintermanc3r), multiargument added by`
    `# Larry Madeo (@hillmonkey)`

    `BIN_PATH="/usr/local/bin"`
    `BETTY_STYLE="betty-style"`
    `BETTY_DOC="betty-doc"`

    `if [ "$#" = "0" ]; then
        echo "No arguments passed."
        exit 1
    fi

    for argument in "$@" ; do
        echo -e "\n========== $argument =========="
        ${BIN_PATH}/${BETTY_STYLE} "$argument"
        ${BIN_PATH}/${BETTY_DOC} "$argument"
    done`
    
 - Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`
 - Move the `betty` file into `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`

You can now type `betty <filename>` to run the `Betty` linter!

## Projects

| Project Name | Description |
|--------------| ----------- |
| 0x00. C-Hello World | ... |
