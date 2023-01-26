# **C++ Programming Theory**

***

### **Basic Structure of a C++ Program**

- int main() is the starting point of a program.
- int tells us that at the end, an integer output should be returned if the program is executed successfully.
- For the instructions/code that we want to execute, we write it within the curly brackets { } inside the main() function.
- semicolon ( ; ) tells C++ compiler that it is the end of an instruction. Which means if we do not add ; then C++ will try to continue reading the code till it finds a break/endpoint and eventually throw an error.
- We can think of ; as a separator between 2 different instructions.
- std: in C++ is the standard namespace that contains functions, we can use functions from the std namespace. For using it we can either use **std :: function** or import the namespace beforehand using **using namespace std** and then call the function directly.
- The most basic function from std is **cout** which is used to print the output in the console.

***

### **Variables and Comments**

- we can think of variables as a container that holds data.
- In reality, when we create a variable, we assign a name i.e. the variable name, to a particular location in memory(RAM), so that we can access that location again using the variable name to get back the data we previously stored there.
- Comments: can be anything that we do not want the C++ compiler to read as a code/instruction. We simply want the compiler to ignore it. 
- We can write single line comments by starting with // and mutliline comments by enclosing the sentences within /* comment */

***

### **Variable Scopes and Datatypes**

- Data types are categorized into 3 types:-
    1. Built in datatype
    2. User defined datatype
    3. Derived datatype

- Built in data types are:-
    - **int** : whole numbers- 3, 7, 11. **Size: 2 or 4 bytes**
            
    - **float** : Low precision decimal numbers- 3.5, 2.71. **Size: 4 bytes**
    - **char** : single character- 'a', 'R'. **Size: 1 byte**
    - **double** : High precision decimal numbers- 4.54345373. **Size: 8 bytes**
    - **boolean** : true(1) or false(0). **Size: 1 byte**

- A scope is a region of the program and broadly speaking there are three places, where variables can be declared −

    - Inside a function or a block which is called local variables,

    - In the definition of function parameters which is called formal parameters.

    - Outside of all functions which is called global variables.

- A program can have same name for local and global variables but value of local variable inside a function will take preference.

***

### **Basic Input/Output**

- In C++ sequence of bytes corresponding to input and output are commonly called as **streams**.
- **Input Stream:** Direction of flow of bytes takes place from I/P device (keyboard) to the main memory.
- **Output Stream:** Direction of flow of bytes takes place from main memory to the O/P device (Display).
- **cin:** is used to take input from the user.
- **>>** is called the extraction operator used to read stuff. used with **cin**.
- **cout:** is used to display information to the user.
- **<<** is called the insertion operator used to print stuff. used with **cout**.

***

### **Reference Variables & Typecasting**

- 