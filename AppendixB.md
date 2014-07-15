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

##Login Unix/Linux System
- Remote Connection
  - `$ ssh IP_ADDRESS/HOSTNAME`
  - putty
- Change password
  - `$ passwd`

##File System
###File System Hierarchy
The [Filesystem Hierarchy Standard](http://en.wikipedia.org/wiki/Filesystem_Hierarchy_Standard) (FHS) defines the directory structure and directory contents in Unix and Unix-like operating systems, maintained by the Linux Foundation. The current version is 2.3, announced on 29 January 2004.

###Paths
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
  - `\-` Regular file
  - `d` Directory
  - `l` Symbolic link
  - `p` Named pipe
  - `s` Socket
  - `c` Character device file
  - `b` Block device file
  - `D` Door
- User class: what the owner can do
- Group class: what the group members can do
- Other class: what other users can do
  - `r` readable
  - `w` writable
  - `x` executable
  - `s` `t` executable and setuid/setgid/sticky
  - `S` `T` setuid/setgid or sticky, but not executable

####Numeric notation `0755`
- First character: `0`
- Each class
  - `r` 4 (100)
  - `w` 2 (010)
  - `x` 1 (001)

###File System Commands
####Mount Points
- `$ mount`
- `$ mount DEVICE PATH`
- `/etc/fstab`

####Files and Directories
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
- `$ touch FILE`
- `$ chmod PERMISSIONS FILE`
  - `-R`
- `$ chown OWNER:GROUP FILE`
- `$ file`
- `$ du`
- `$ df`

####Displying File Contents
- `$ cat FILE1 [FILE2 ...]` concatenate
- `$ less FILE`
- `$ head FILE`
  - `-n NUMBER`
- `$ tail FILE`
  - `-f`

##Redirection
###Redirect to file
Redirect command output to file.
- `>` Overwrite
- `>>` Append

###Redirect from file
Redirect file as command input
- `<`

###Pipe
- `|`

###Examples

```
$ cat > list.txt
c++
java
javascript
c
c#
fortran
basic
[Ctrl+D]

$ cat >> list.txt
python
perl
[Ctrl+D]

$ sort < list.txt

$ cat list.txt | sort

$ cat list.txt | tee -a list.bak.txt
```

##Searching and Matching
###Regular Expressions
- A regular expression (abbreviated regex or regexp) is a sequence of characters that forms a search pattern

 | Metacharacter | Description                                                                                    |
 | :-----------: | :----------                                                                                    |
 | `.`           | Matches any single character                                                                   |
 | `*`           | Matches the preceding element zero or more times.                                              |
 | `?`           | Matches the preceding element zero or one time.                                                |
 | `+`           | Matches the preceding element one or more times.                                               |
 | `{m,n}`       | Matches the preceding element at least m and not more than n times.                            |
 | `[ ]`         | Matches a single character that is contained within the brackets                               |
 | `[^ ]`        | Matches a single character that is not contained within the brackets.                          |
 | `^`           | Matches the starting position within the string.                                               |
 | `$`           | Matches the ending position of the string or the position just before a string-ending newline. |
 | `( )`         | Matches a subexpression that can be recalled later.                                            |
 | `\n`          | Matches what the nth marked subexpression matched.                                             |

- Examples
  - [Wikipedia: Regular Expression](http://en.wikipedia.org/wiki/Regular_expression)

###Searching File Contents
- `$ grep -e '^-' cpp01.md`
- `$ sed -n -e '/^-/p' cpp01.md`

###Searching File System
- `$ find . -name "*.md" -print`
- `$ find . -size +5k -ls`
- `$ ls -la | grep PATTERN`
- `$ ls *.md | grep cpp | sed 's/\(.*\)/cp \1 \1.bak/g' | bash`

##Processes
- `$ top`
- `$ htop`
- `$ ps` list processes
  - `$ ps -ef`
  - `$ ps -ef | grep -i sshd`
- `$ kill` kill processes
  - `$ kill PID`
  - `$ kill -9 PID`

##Jobs
- `$ sleep 10000 &` run command in background
- `$ jobs` list running jobs
- `$ fg %jobnumber` restart a job by job number
- `[Ctrl+c]` terminate running command
- `$ sleep 10000`
- `[Ctrl+z]` suspend current job
- `$ bg` put suspended job in background
- `$ kill %job number` kill process by job number

##Superuser (root)
###su
- `$ su` switch to root
- `$ su - USERNAME` switch to any users
- `$ who`
- `$ whoami`

###sudo
- `$ visudo` check sudo permission
- `$ sudo command` run command with superuser access

##Other Useful Commands
- [ ] `$ uname`
- [ ] `$ uptime`
- [ ] `$ last`
- [ ] `$ ifconfig`
- [ ] `$ id`
- [ ] `$ history`
- [ ] `$ time`
- [ ] `$ date`
- [ ] `$ diff`
- [ ] `$ awk`
- [ ] `$ iconv`
- [ ] `$ set`
- [ ] `$ echo`
