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

- **Type casting** refers to the conversion of one data type to another in a program. 
- Typecasting can be done in two ways: automatically by the compiler and manually by the programmer or user. 
- Type Casting is also known as **Type Conversion**.
- Type Casting is only possible when both data types are compatible with each other.
- **Types of Type Casting are:-**

    **1. Implicit Typecasting:-**
        - It is known as the automatic type casting.
        - It is automatically converted from one data type to another without any external intervention such as programmer or user. 
        - It means the compiler automatically converts one data type to another.
        - All data type is automatically upgraded to the largest type without losing any information.
    
    **2. Explicit Typecasting:-**
        - It is also known as the manual type casting in a program.
        - It is manually cast by the programmer or user to change from one data type to another type in a program. - It means a user can easily cast one data to another according to the requirement in a program.
        - It does not require checking the compatibility of the variables.
        - In this casting, we can upgrade or downgrade the data type of one variable to another in a program.
        - It uses the cast () operator to change the type of a variable. E.G. (float) 21/5

- **Reference Variables**: are the variables that refer to some other variable. For e.g. **int y = &x**.
- &x gives the address of variable x to y. Now y refers to the same address as x so if we change the value of x, y will also change as they both refer to the same address in memory.

***

### **Constants, Manipulators & Operator Precedence**

- We can create a constant using const keyword. For e.g., **const int a = 10;**
- Once declared, the value of constant cannot be changed.
- **Manipulators:** are functions that help to format the data while displaying it on the console.
- Example, setw() belongs to the iomanip header file, which helps us to set how many spaces should it take to print the data.
- **Operator Precedence:** tells us which operations will get the higher priority among multiple operations in an expression.
- **Link: https://en.cppreference.com/w/cpp/language/operator_precedence**

***

### **Control Structures**

- There are 3 types of control structures in C++:-

    1. **Sequence Structure :** a regular program with entry, multiple instructions and end.
    2. **Selection Structure :** a program with with condition on the basis of which next instruction will either be executed or not.
    3. **Loop Structure :** a program where an instruction is executed a certain number of times repeatedly.

- 2 types of Selection Structures are if-else and switch-case.
    1. **if else else-if :** here if statement will check a condition, if it is true the if block will be executed or else it will move on to check the else-if and else blocks, if any condition is true the respective block is executed.
    2. **switch case :** in switch case, the condition is a single variable or data, it is not an expression. Multiple cases can be written for a specific value and a default case can also be written in case of any other cases not being true.

***

### **Loop Structures**

- 3 types of loops are:-
    **1. For loop :** Syntax is :- **for (initialization; condition; updation){ }**. **Initialization** is where we initialize a variable for the loop or just use a variable that is already initialized in the namespace. **Condition** is the expression that will keep the loop running till it is not False. **Updation** is the increment or decrement operation after every loop.  

    **2. While loop :** In while statement, we give a conditional expression, as long as the condition returns true, the while loop keeps getting executed. Increment or decrement should be done manually inside the while block.

    **3. Do-While loop:** In do while loop, the code block is written first and while condition is written at the end. This basically ensures that the block is executed atleast once even if the condition is False from the beginning.

***

### **Break and continue**

- **break :** is used to exit any of the above loop. Use it to forcefully exit the loop if a certain condition is met.
- **continue :** is used to stop execution of the current iteration and begin the next iteration of the loop. Basically, it is like a skip button which can be used to skip a specific iteration or iterations based on specific conditions.

***

# HI SHAWN