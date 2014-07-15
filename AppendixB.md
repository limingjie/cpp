#Unix/Linux Shell Commands

##History
![Image](https://github.com/limingjie/cpp/blob/master/images/UnixHistory.png?raw=true)

##Shell
Shell is the interface between human and kernel, it is a command-line interpreter (CLI) to that interpreter user input commands to execute.

###Common Shells
- Bourne-Again shell (bash)
- Korn shell (ksh)
- C shell (csh)

###Getting Help
- `$ man command` Manual pages
- `$ command --help`

###Commands
- `Commands [Options]`
  - Single hyphen options
    - `$ command -c`
    - `$ command -c[value]`
    - `$ command -abc`
  - Double hyphen options
    - `$ command --long[=value]`
- Examples

    ```
    $ ls
    $ ls -l
    $ ls -a
    $ ls -la
    $ ls -lrt
    $ ls -la --color=none
    ```

###Wildcards
Special characters to extend or match filenames
- bash wildcards
  - `?`
  - `*`
  - `~`
  - `~user`
  - [c<sub>1</sub>c<sub>2</sub>...]
  - [^c<sub>1</sub>c<sub>2</sub>...]
  - [c<sub>1</sub>-c<sub>2</sub>]

##File System
###File System Hierarchy
The [Filesystem Hierarchy Standard](http://en.wikipedia.org/wiki/Filesystem_Hierarchy_Standard) (FHS) defines the directory structure and directory contents in Unix and Unix-like operating systems, maintained by the Linux Foundation. The current version is 2.3, announced on 29 January 2004.

###Path
- A full path or absolute path is a path that points to the same location on one file system regardless of the present working directory or combined paths.
- A relative path is a path relative to the working directory of the user or application, so the full absolute path will not have to be given.
- Paths
  - `/` Root directory
  - `.` Current directory
  - `..` Parent directory
  - `~` Home directory

###File System Permissions
####Symbolic notation `-rwxr-xr-x`
- First character: file type
  - \-: Regular file
  - d: Directory
  - l: Symbolic link
  - p: Named pipe
  - s: Socket
  - c: Character device file
  - b: Block device file
  - D: Door
- User class: what the owner can do
- Group class: what the group members can do
- Other class: what other users can do
  - r: readable
  - w: writable
  - x: executable
  - s or t: executable and setuid/setgid/sticky
  - S or T: setuid/setgid or sticky, but not executable

####Numeric notation `0755`
- First character: 0
- Each class
  - r: 4 (100)
  - w: 2 (010)
  - x: 1 (001)

###File System Commands
- `$ pwd` present working directory
- `$ ls PATH` list
  - `-l` long
  - `-a` all
  - `-r` reverse order
  - `-t` sort by modification time
- `$ cd PATH` change directory
  - `$ cd absolute_path`
  - `$ cd relative_path`
  - `$ cd`
  - `$ cd /`
  - $ cd ..`
- `$ mkdir DIRECTORY` make directory
  - `-p path/to/directory`
- `$ rmdir DIRECTORY` remove directory
- `$ cp SOURCE DEST` copy
  - `-R` recursive
- `$ move FILE1 FILE2` move
- `$ rm FILE` remove
  - `-r` recursive
  - `-f` force
- `$ chmod Permissions FILE`
  - `-R`
- `$ chown OWNER:GROUP FILE`


filesystem

attribute


sed / regex



passwd / adduser
