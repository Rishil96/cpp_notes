# **C++ Programming Theory**

***

## **Basic Structure of a C++ Program**

- int main() is the starting point of a program.
- int tells us that at the end, an integer output should be returned if the program is executed successfully.
- For the instructions/code that we want to execute, we write it within the curly brackets { } inside the main() function.
- semicolon ( ; ) tells C++ compiler that it is the end of an instruction. Which means if we do not add ; then C++ will try to continue reading the code till it finds a break/endpoint and eventually throw an error.
- We can think of ; as a separator between 2 different instructions.
- std: in C++ is the standard namespace that contains functions, we can use functions from the std namespace. For using it we can either use **std :: function** or import the namespace beforehand using **using namespace std** and then call the function directly.
- The most basic function from std is **cout** which is used to print the output in the console.

***

## **Variables and Comments**

- we can think of variables as a container that holds data.
- In reality, when we create a variable, we assign a name i.e. the variable name, to a particular location in memory(RAM), so that we can access that location again using the variable name to get back the data we previously stored there.
- Comments: can be anything that we do not want the C++ compiler to read as a code/instruction. We simply want the compiler to ignore it. 
- We can write single line comments by starting with // and mutliline comments by enclosing the sentences within /* comment */

***

## **Variable Scopes and Datatypes**

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

## **Basic Input/Output**

- In C++ sequence of bytes corresponding to input and output are commonly called as **streams**.
- **Input Stream:** Direction of flow of bytes takes place from I/P device (keyboard) to the main memory.
- **Output Stream:** Direction of flow of bytes takes place from main memory to the O/P device (Display).
- **cin:** is used to take input from the user.
- **>>** is called the extraction operator used to read stuff. used with **cin**.
- **cout:** is used to display information to the user.
- **<<** is called the insertion operator used to print stuff. used with **cout**.

***

## **Reference Variables & Typecasting**

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

## **Constants, Manipulators & Operator Precedence**

- We can create a constant using const keyword. For e.g., **const int a = 10;**
- Once declared, the value of constant cannot be changed.
- **Manipulators:** are functions that help to format the data while displaying it on the console.
- Example, setw() belongs to the iomanip header file, which helps us to set how many spaces should it take to print the data.
- **Operator Precedence:** tells us which operations will get the higher priority among multiple operations in an expression.
- **Link: https://en.cppreference.com/w/cpp/language/operator_precedence**

***

## **Control Structures**

- There are 3 types of control structures in C++:-

    1. **Sequence Structure :** a regular program with entry, multiple instructions and end.
    2. **Selection Structure :** a program with with condition on the basis of which next instruction will either be executed or not.
    3. **Loop Structure :** a program where an instruction is executed a certain number of times repeatedly.

- 2 types of Selection Structures are if-else and switch-case.
    1. **if else else-if :** here if statement will check a condition, if it is true the if block will be executed or else it will move on to check the else-if and else blocks, if any condition is true the respective block is executed.
    2. **switch case :** in switch case, the condition is a single variable or data, it is not an expression. Multiple cases can be written for a specific value and a default case can also be written in case of any other cases not being true.

***

## **Loop Structures**

- 3 types of loops are:-
    **1. For loop :** Syntax is :- **for (initialization; condition; updation){ }**. **Initialization** is where we initialize a variable for the loop or just use a variable that is already initialized in the namespace. **Condition** is the expression that will keep the loop running till it is not False. **Updation** is the increment or decrement operation after every loop.  

    **2. While loop :** In while statement, we give a conditional expression, as long as the condition returns true, the while loop keeps getting executed. Increment or decrement should be done manually inside the while block.

    **3. Do-While loop:** In do while loop, the code block is written first and while condition is written at the end. This basically ensures that the block is executed atleast once even if the condition is False from the beginning.

***

## **Break and continue**

- **break :** is used to exit any of the above loop. Use it to forcefully exit the loop if a certain condition is met.
- **continue :** is used to stop execution of the current iteration and begin the next iteration of the loop. Basically, it is like a skip button which can be used to skip a specific iteration or iterations based on specific conditions.

***

## **Pointers**

- A pointer is a variable/datatype that stores the address of other variables/datatypes.
- To get a variable's address, we use **&** before the variable name, and to create a pointer, we use **\*** before the pointer name.
- We also specify the data type to the pointer which is same as the variable it is pointing to.
- **&** is called the **(address of) operator**.
- **\*** is called the **Dereference operator**. It is used while creating a pointer and later on we can use it to dereference (meaning get the value at that address) the pointer.
- **Pointer to Pointer** is a pointer that stores the address of another pointer. To create it we use **\*\*** before the pointer name.
- Example of how to define a pointer:
```
    int a = 5;      // Integer variable a
    int *b = &a;    // Int Pointer b pointing to the address of a.
    int **c = &b;   // Pointer to pointer c pointing to the
                       address of pointer b.
```

***

## **Arrays and Pointers**

- is a collection of items(data types) of similar type.
- In computer memory, array is a continuous block of memory.
- To create an array, we simply use **[]** after the variable name saying that this variable will contain more than one value for the mentioned data type.
- We can also provide an integer inside **[]** to specify the number of items the array will hold which will tell the compiler to block the amount of memory in a contiguous manner required for the number of data elements we mentioned.
- To initialize an array, we add data elements inside **{}**.
```
    int array[4] = {1, 2, 3, 4};    // No. of elements specified.
    int array[] = {1, 2};           // Without specifying no. of 
                                       elements.
```
- To access, update a specific element, we use its index. Eg:- 
```
    cout << array[2];   // access element
    array[2] = 10;      // update element
```
- We can create pointers to loop through an array.
- Pointer Arithmetic Formula : 

>**new_address = current_address + i \* sizeof(datatype)**

>where i is the number of addresses we want to move ahead from the current address. This only works because of the nature of arrays i.e. being stored in a contiguous memory.

```
    int numbers[];          // array
    int *ptr = numbers;     // pointer that stores the starting 
                               address of the array (address of
                               the first element).
```

- we can use **sizeof(variable_name)** to check the size of a specific variable or a datatype. Could be specially useful when creating derived and user defined datatypes.

***

## **Structures, Unions and Enum** 

- There are 3 User-defined datatypes in C++:-
> - Structures
> - Unions
> - Enums

- **Structures** are used to combine items of different datatypes.
```
    // Example of Structures
    typedef struct employee
    {
        int empID;
        char initials;
        float salary;
        bool isHappy;
    } emp;
```
- **typedef** is used to provide an alias name to the structures as done in the above example. Alias name comes at the end.
- Creating a structure will take up the total memory required for all the datatypes included in the structure combined.
- The above structure will take **4(int) + 1(char) + 4(float) + 1(bool) = 10 bytes**.

- **Unions** are same as structures but provide better memory management.
```
    // Example of Union
    union money 
    {
    int rupees;
    float dollars;
    char crypto;
    };
```
- In a union, only one value can be set at a time.
- It is used when we need multiple choices/options but will be using only one of the available choices at a time.
- Since, only one option will be used, creating a union will take up only the space required to store the value with the most memory.
- In the above example, float has the highest memory 4 bytes, so the union will be created by allocating 4 bytes of memory to it.

- **Enum** is kind of a list that is used to enumerate the items of that list.
- Every value in an enum will be alloted an integer value starting with 0.

```
    enum Meal {Breakfast, Lunch, Dinner};
    cout << "Value of Breakfast: " << Breakfast << endl; // 0
    cout << "Value of Lunch: " << Lunch << endl;         // 1
    cout << "Value of Dinner: " << Dinner << endl;       // 2

    // Create a variable using enum
    Meal meal1 = Dinner;
    cout << "Meal 1: "  << meal1 << endl;                // 2
```
- The created enum can also act as a datatype and we can perform conditional operations and create variables from it.

***

## **Functions & Function Prototypes**

- A **function** is a block of code or a set of instructions that is only executed when it is called.

```
    // Function to add 2 numbers
    int sum(int a, int b) {
        int c = a + b;
        return c;
    }
```
- A **Function Prototype** basically tells the compiler to look for the function before running so that if it is written after the main function, it can still be used.
- Basically, it is declaring a function before defining(writing the code/instructions) it.
- To declare a function, we simple write the datatype, function name and the parameters it will take.
```
    // 2 function prototypes below
    
    int subtract(int a, int b);
    void greet();
```
- After declaring the functions as shown above, we can write those functions anywhere in the file, even after the main function and the compiler will first find where it is located, only after then it will be executed.
- void can be used as a datatype to a function when we don't want to return any value from that function.

***

## **Call by Value & Call by Reference**

- The variables inside a function are destroyed after function completes its execution.
- When variables are passed as parameters in a function a copy is sent to the function and not the actual variable. 
- So any operation on the variable itself will not take place as the operation is done on a copy of the variable.
- When we pass variables as parameters to a function, it basically creates a copy of those values and performs the instructions in the function. This is called "Call by Value" as we are simply using the value of those parameters.
- But when we want to use the actual variables instead of making a copy of them we need to use "Call by Reference". Which simply means we pass pointers or address references to the function parameters which then directly gets access to the memory location of the variables.
```
    // Swap variable values using Pointers
    void swapPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    }

    swapPointer(&a, &b);


    // Swap variable values using References
    void swapReferenceVar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    }

    swapReferenceVar(a, b);

```
- When we use reference variables, we only pass the variables to the function, the function directly uses **&** in the parenthesis to access its address.
- In case of pointers, we have to pass the address of the variables to the function parameters as the function accepts only pointers, and pointers only stores addresses of variables.

***

## **Inline Functions, Default & Constant Arguments**

- When we write a function, multiple steps are executed even other than the function logic. 
- If a function is used a lot of times in a program, it makes sense for it to be stored in memory so those steps need not be executed again and again.
- These functions that are stored in memory are called inline functions.
- If we use inline, then the compiler places the function in the main function call itself during compilation so it won't go through the previously listed steps during runtime.
- Basically where the function is called in the main code, the function(stored in memory) is replaced with the function call which kind of beats the purpose of reuseability of functions but it makes the code faster.
- This takes up space in memory so inline functions is only suggested to use in case of very small functions typically with 1 operation. 
- Making large functions inline will result in taking up more memory in cache and will risk running out of memory (RAM).

```    
    inline int product(int a, int b) {
    return a*b;
    }
```
- **Static :** if a variable is initialized with static keyword, it will run only once per execution.
- So, if a static variable in declared in a function or class, only during the first time when the function/class is called it will execute. When the function is called again (no matter how many times), it will not run again.
- Particularly useful to make counter varaibles inside a function/class. (In Python, we do this by creating class attributes instead of object attributes)

- **Default Arguments :** are the arguments in the function that has a default value due to which it is not compulsory to give a value for that parameter when calling that function.
```
    // interest is parameter which has a default value.

    float calculateInterest(float amount, float interest = 1.04) {
    return amount * interest;
    }
``` 
- Default Arguments should always be written towards the end of the arguments list in a function.
- **Constant variables :** we pass the arguments with a const keyword so that the function does not change the value of the passed variable. Best used with reference variables and pointers.
```
int strlen(const char *p) {
// function logic
}  Here *p won't be allowed to update in the function.
```

***

## **Recursion & Recursive Functions**

- Recursion means calling a function again and again inside itself till a certain condition is met.
- Kind of like a while loop but gives more functionality.

```
    // Recursive function for factorial
    int factorial(int n) {
    if (n <= 1){
        return 1;
    }
    return n * factorial(n - 1);
    }
```
- A recursive function contains 3 parts:-
    - **Base Case:** condition to stop recursion.
    - **Recursive Case:** where function calls itself again.
    - **Calculation:** small calculation that reduces the problem size making it move closer to the base case.

***

## **Function Overloading**

- **Function Overloading :** is a feature of OOP where 2 functions/methods have the same name but different parameters. 
- So the functions with single name can do multiple tasks depending on the number of arguments provided.

```
    // Cylinder
    float volume(float r, float h) {
        return (3.14 * r * r * h);
    }

    // Cuboid
    float volume(float l, float b, float h) {
        return (l * b *h);
    }

    // Cube
    float volume(float a) {
        return (a * a * a);
}
```

- In above example, the function volume is overloaded and has 3 functionalities.
- Depending on the number of arguments provided as inputs, the respective function will be used by the C++ compiler and it won't throw an error.
- C++ is intelligent enough to figure out which function to use in which case.

***

## **OOP & Classes**

    - OOP : is a way/approach of writing programs
    - C++ was designed with the intention to add OOP features to C language
    - Creator of C++ : **Bjarne Stroustrup**
    - C++ was earlier called **"C with classes"**
    - Creating a class is like creating a datatype
    - Class is a template to create objects.

### **Basic Concepts of OOP**

    1. **Classes:** Basic template for creating objects.
        
    2. **Objects:** Basic run time entities.

    3. **Data Abstraction:** means displaying only essential information and hiding the background details and implementation. 

    4. **Data Encapsulation:** Wrapping data and functions into single unit to make sure that "sensitive" data  hidden from users.

    5. **Inheritance:** Properties of one class can be inherited to others.

    6. **Polymorphism:** ability to take more than one forms. Function overloading is an example.

    7. **Dynamic Binding:** code which will execute is not known until the program runs. Example, executing some code depending on what the user gives as input.

    8. **Message Passing:** Object.message(Information) call format.

### **Benfits of OOP**

    1. Better code reuseability using objects and inheritance.
    2. Principle of data hiding helps build secure systems.
    3. Multiple objects can co-exist without any interference.
    4. Software complexity can be easily managed.

- Difference between Structures and classes
- Data is not protected in structures. All members can be directly accessed.
- Functions/methods cannot be written in a structure
- Use struct when we only need to hold data. Use class when data needs to be protected and/or functions are needed in it.

### **Access Specifiers**

Access Specifiers in C++. There are 3 types:-
- **Public :** members are accessible outside the class.
- **Private :** members cannot be viewed or accessed outside the class.
- **Protected :** members cannot be accessed outside the class, but can be accessed from inherited class.

### **Ways to write a method/member function**

- Methods of a class can be written inside or outside the class.
- To write a function/ method outside the class, it must be declared inside the class.
- **:: is the scope resolution operator :** tells the compiler to which namespace or class the symbol/function belongs to.

### **Additional points to remember**

- It is possible to declare objects along with class declaration.
```
    class Employee{
         // class methods and properties
    } rishil, ashwin;
```
- By default, the members of a class are private. If we want any members to be public, then we must specify it using public keyword.

***

## **Memory Allocation & Arrays**

- In C++, the **member functions** of a class is common for all objects of that all so it is assigned only once in the memory. 

- But the variables of a class will differ from object to object so it is assigned different memory for different objects. 

- C++ compiler does this on its own without any human intervention.

- In C++, the methods of a class are commonly referred to as **member functions**.

***

## **Static Data Members & Methods**

- Static members are class variables that are initialized only once in a program execution.
- For example, if we have a class A and it has a static member s, and if we create 4 objects from class A, the static member will be declared only while creating the first object.
- A good example would be a count variable to keep a count of the number of objects created.
- By default, if a value is not assigned to a static variable, it is 0.
- To create a static variable, we first declare it inside the class using static keyword.
- After that, we also have to associate the static variable/method using scope resolution operator outside the class(compulsory step).
- Static variable won't be reset for every object that is created.
- Static functions are created the same way as static variables.
- Static functions only have access to the static variables i.e. class variables.

```
    class Employee
    {
    
    static int count;   // static var declaration

    public:
        
        static void getCount(void); // static function declaration

    };

    // Count is the static data member of the class Employee
    int Employee :: count;   // Default value is 0

    // Static member functions
    void Employee :: getCount(void) {
        cout << "\nThe number of Employees in the class is " << count;
    };
```

***

## **Array of Objects & Objects as Function Arguments**

- Classes are basically customized data types.
- Creating an array of objects is same as creating an array of any other data types like integer, float, etc.
- **Syntax : class_name var_name[no_of_objects];**
- It is possible to create a member function that takes the same class's objects as arguments to perform operations.

```
    class Complex
    {
        // It is not a good programming practice keep keep 
        data members/variables as public
        int a;
        int b;

        public:
            void setData(int num1, int num2) {
                a = num1;
                b = num2;
            }

            // This member function is using the Class object 
            as arguments
            void setDataBySum(Complex o1, Complex o2) {
                a = o1.a + o2.a;
                b = o1.b + o2.b;
            }

            void printNumber(void) {
                cout << "Your complex number is: " << a << "+" << b << "i" << endl;
            }

    };
```

## **Friend Functions**

- A friend function is a function that is not a member function of a class but it is allowed to use the private members of a particular class.
- Properties of friend functions:-
    1. Friend functions are not in the scope of the class.
    2. Since friend functions are not a part of the class, it cannot be called by any objects of the class.
    3. Can be invoked without the help of any objects.
    4. Usually contains the objects of the class as arguments.
    5. Can be declared in the public or private section of the class, it doesn't matter.
    6. It cannot access the members of the class directly, requires objects to do so.

```
    class Complex
    {
        int a, b;

        public:
            // Declaring friend function in the class.
            friend Complex sumComplex(Complex o1, Complex o2);

            void setNumber(int n1, int n2){
                a = n1;
                b = n2;
            }
            void printNumber(){
                cout << "Your complex number is: " << a << 
                        " + " << b << "i" << endl;
            }
    };

    // Defining the friend function that was declared in the class
    Complex sumComplex(Complex o1, Complex o2){
        Complex o3;
        o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
        return o3;
    }

```
- In the above example, sumComplex is the friend function for class Complex and it can access the private members of the Complex class by using objects.

***

## **Friend Class & Member Friend Functions**

- Friend class is a class that can access all the private data of the class that it is friend of.
- So if Class A is a friend of Class B then, A can access all private members of B.
- To create friend class/member friend functions we need to do some steps:-
    - The compiler reads from top to bottom so if a class type is used in another class the compiler won't find it since one class will be written below the other
    - To fix this we need to do 2 things:-
        1. Forward declaration: declare the other class before writing the logic of the class that uses this class type.
        2. Declare the member function that will use the class type in the other class but define it after both classes are defined.

```
    // Forward declaration
    class Complex;

    class Calculator
    {
    public:
        // Declare add real complex function to define it later
        on after complex class is created.
        int addRealComplex(Complex, Complex);
        int addCompComplex(Complex, Complex);

        int add(int a, int b)
        {
            return (a + b);
        }
    };

    class Complex
    {
        int a, b;
        friend int Calculator ::addRealComplex(Complex o1, Complex o2);
        friend int Calculator ::addCompComplex(Complex o1, Complex o2);

    public:
        void setNumber(int n1, int n2)
        {
            a = n1;
            b = n2;
        }

        void printNumber(void)
        {
            cout << a << " + " << b << "i" << endl;
        }
    };

    // Creating this member function outside the class after complex class is defined.
    int Calculator ::addRealComplex(Complex o1, Complex o2)
    {
        return (o1.a + o2.a);
    }

    int Calculator ::addCompComplex(Complex o1, Complex o2)
    {
        return (o1.b + o2.b);
    }

```
- In the above example, the Calculator class will use the complex class objects so we declare the Complex class first.
- Then we define the Calculator class and use the Complex class as data types and/or parameters of member functions.
- After that we write the Complex class and then add the Calculator class member functions as friends inside the Complex class.
- If we had defined the Complex class first (instead of just declaring), then we would not be able to add the Calculator class member functions as friends inside the Complex class as reading from top to bottom, the complier will not find the Calculator class.