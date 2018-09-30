# 15IT411J Integrative Programming And Technology Laboratory

- [15IT411J Integrative Programming And Technology Laboratory](#15it411j-integrative-programming-and-technology-laboratory)
    - [1. Instructions for Java Native Interface](#1-instructions-for-java-native-interface)
        - [1.1 Requirements](#11-requirements)
        - [1.2 Steps for output](#12-steps-for-output)
        - [1.3 Reference](#13-reference)

## 1. Instructions for Java Native Interface

> This section is only for **00-03** titled experiments (<span style="background-color: #FFff21">JNI related</span>
) in this repository.

### 1.1 Requirements

1. A Java Compiler “javac” which ships with the SDK
2. A Java Virtual Machine “java” which ships with the SDK
3. A native method c header file generator “javah” which ships with the SDK.
4. A C/C++ compiler “cc” that can create shared library

### 1.2 Steps for output

**To run the program related java native interface follow the following commands for linux on terminal :**

1. **Compile the java code.**
  - **A**
    - *Java* file name.

```bash
 javac A.java
```

2. **Create C/C++ header file.**
  - **A** 
    - *class* file name.

```bash
javah A
```

3. **Create a shared library file using the C/C++ file created using terminal.**

  - **A** 

    - Put *lib* and then the name for the file written inside the .java file under static block. 

    - Example - *JNIDemo.java*

      - ```java
        static
        {
        System.loadLibrary("JNIDemo");
        }
        ```

        Then library file's name should be *libJNIDemo.so*

  - **B**

    - C file name.

  - **How to get *jdk* folder path in linux**  

    - If you don't have jdk1.8.0* then follow these commands if you are using ubuntu or any debian based distro : 

      - ```bash
        sudo apt-get update
        ```

        ```bash
        sudo apt install default-jdk
        ```

        Enter password (if you have) and Press Y/y

    - Go to root directory and search for jdk1.8.0 or a file jni.h

    - You may get the folder then can copy the path for *include* folder and *linux* folder

```bash
gcc -fPIC -I"/usr/java/jdk1.8.0_181/include" -I"/usr/java/jdk1.8.0_181/include/linux" --shared -o A.so B.c
```

4. **Run the java program.**
  -	**A**
        -	Name of *class* file.

```bash
java -Djava.library.path=. A
```

### 1.3 Reference

[REFERENCE FOR MORE CODE](https://www3.ntu.edu.sg/home/ehchua/programming/java/JavaNativeInterface.html)

## 2. Instructions for Beans

> This section will show you how to use these projects (04 - 07)

### 2.1 Non Visual Bean Project 

> For 04-jb-non-visual-bean

- If you are a **IntelliJ IDEA** user then directly import the project or open this project in IDE.
- If you are a **Netbeans** user then follow the steps :
  - Create a new project.
  - Choose JavaFx Application.
  - Name the project whatever you want and finish.
  - Go to workspace directory of Netbeans and delete *src* folder.
  - Paste *src* folder from 04-jb-non-visual-bean
  - Build and run the project now. 