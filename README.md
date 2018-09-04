# 15IT411J Integrative Programming And Technology Laboratory

- [15IT411J Integrative Programming And Technology Laboratory](#15it411j-integrative-programming-and-technology-laboratory)
    - [1. Instructions for Java Native Interface](#1-instructions-for-java-native-interface)
        - [1.1 Requirements](#11-requirements)
        - [1.2 Steps for output](#12-steps-for-output)
        - [1.3 Reference](#13-reference)

## 1. Instructions for Java Native Interface

> This section is for **[00-03]-[...]** titled experiments (==JNI  related experiments==) in this repository.

### 1.1 Requirements

1. A Java Compiler “javac” which ships with the SDK
2. A Java Virtual Machine “java” which ships with the SDK
3. A native method c header file generator “javah” which ships with the SDK.
4. A C/C++ compiler “cc” that can create shared library

### 1.2 Steps for output

**To run the program related java native interface follow the following commands for linux on terminal :**

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

### 1.3 Reference

[REFERENCE FOR MORE CODE](https://www3.ntu.edu.sg/home/ehchua/programming/java/JavaNativeInterface.html)
