# 15IT411J-IPT
15IT411J Integrative Programming And Technology Laboratory 

## Instructions for Java Native Interface related experiments

### Requirements

1. A Java Compiler “javac” which ships with the SDK
2. A Java Virtual Machine “java” which ships with the SDK
3. A native method c header file generator “javah” which ships with the SDK.
4. A C/C++ compiler “cc” that can create shared library

### To run the program related java native interface follow the following commands for linux on terminal :

- Compile the java code.

```bash
 javac <filename>.java
```
- Create C/C++ header file.

```bash
javah <Use the Java class file name without the “.class” extention>
```
- Create a shared library file using the C/C++ file created using terminal.

```bash
gcc -fPIC -I"/usr/java/jdk1.8.0_181/include" -I"/usr/java/jdk1.8.0_181/include/linux" --shared -o <the shared library file name you need/want to create>.so <C file name>.c
```
- Run the java program.

```bash
java -Djava.library.path=. <name of java class file>
```

