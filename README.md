# CS101 Lab Manual
## Lab 2: Variables, Arithmetic Operations and Control Structures -I

The aims of this lab are to cover Control Structures of C++.

Learning Objectives:

* Variable Types
* Declaring Variables
* Arithmetic Operators
* Comments
* Input/output in C++
* Comparison/Relational Operators
* Logical Operators
* `if` Statement
* `if - else` statement
* `else if` Statement

Outcomes:

* Students should be able to know C++ variables, their types and arithmetic operators.
* Students should be able to use `cin` and `cout` methods in the programs.
* Students should be able to use all types of C++ operators
* Students should be able to use if, if-else and else-if statements

### Variables, Types and Operators

A variable is a place to store a piece of information. Just as you might store a friend's phone number in your own memory, you can store this information in a computer's memory. Variables are your way of accessing your computer's memory.

C++ imposes fairly strict rules on how you can name your variables:

* Must begin with a letter
* Are "case-sensitive" (i.e., the variable `myNumber` is different from the variable `MYNUMBER` which is different from the variable `mYnUmBeR`)
* Can not have spaces
* Can not have special characters (typographic symbols)

What can you name your variables? In general, variable names can be composed of **letters**, **numbers**, and **underscores (_)**.

**Keywords**: C++ reserves certain names which have special meaning to the language, and you are not allowed to use any of these keywords as variables names. Some examples of C++ keywords are **int**, **for**, **else**, and **class**. You can, however, use keywords in the middle of a variable name, such as **"foreign"** or **"classical"**.

### Variable Types

The values of variables are stored somewhere in an unspecified location in the computer memory as zeros and ones. Our program does not need to know the exact location where a variable is stored; it can simply refer to it by its name. What the program needs to be aware of is the kind of data stored in the variable.

It's not the same to store a simple integer as it is to store a letter or a large floating-point number; even though they are all represented using zeros and ones, they are not interpreted in the same way, and in many cases, they don't occupy the same amount of memory.

Fundamental data types are basic types implemented directly by the language that represent the basic storage units supported natively by most systems. They can mainly be classified into:

* **Character types**: They can represent a single character, such as 'A' or '$'. The most basic type is char, which is a one-byte character. Other types are also provided for wider characters.
* **Numerical integer types**: They can store a whole number value, such as 7 or 1024. They exist in a variety of sizes, and can either be signed or unsigned, depending on whether they support negative values or not.
* **Floating-point types**: They can represent real values, such as 3.14 or 0.01, with different levels of precision, depending on which of the three floating-point types is used.
* **Boolean type**: The boolean type, known in C++ as bool, can only represent one of two states, true or false.
Here is the complete description of all data types:

| **Group**                    | **Type Names**           | **Notes on Size / Precision**                                  |
| ---------------------------- | ------------------------ | -------------------------------------------------------------- |
| **Character types**          | `char` | Exactly one byte in size. At least 8 bits.                     |
|                              | `char16_t` | Not smaller than char. At least 16 bits.                       |
|                              | `char32_t` | Not smaller than char16_t. At least 32 bits.                   |
|                              | `wchar_t` | Can represent the largest supported character set.             |
| **Integer types (signed)**   | `signed char` | Same size as char. At least 8 bits.                            |
|                              | `signed short int` | Not smaller than char. At least 16 bits.                       |
|                              | `signed int` | Not smaller than short. At least 16 bits.                      |
|                              | `signed long int` | Not smaller than int. At least 32 bits.                        |
|                              | `signed long long int` | Not smaller than long. At least 64 bits.                       |
| **Integer types (unsigned)** | `unsigned char` | Same size as their signed counterparts.                        |
|                              | `unsigned short int` | Same size as signed short.                                     |
|                              | `unsigned int` | Same size as signed int.                                       |
|                              | `unsigned long int` | Same size as signed long int.                                  |
|                              | `unsigned long long int` | Same size as signed long long int.                             |
| **Floating-point types**     | `float` | Single precision floating-point.                               |
|                              | `double` | Precision not less than `float` .                               |
|                              | `long double` | Precision not less than `double` .                              |
| **Boolean type**             | `bool` | Stores either `true` or `false` .                               |
| **Void type**                | `void` | Indicates no storage (used in functions with no return value). |
| **Null pointer**             | `decltype(nullptr)` | Represents a null pointer.                                     |

### Declaring Variables

Declaring a variable in C++ is simple. Let's say you want to declare a variable of type int called myAge. That is to say, the variable myAge will store an integer. In C/C++, this is written: Int myAge; 

All this does is tell the computer that you plan to use an integer, and that the integer's name is myAge. In some languages, variables are initialized to 0 - that is, a variable's initial value will be 0. This is not true of C++! Sometimes your variables will be initialized to 0, but sometimes they will be initialized with garbage. As you might anticipate, this can cause some nasty bugs. Hence, it is always a good idea to initialize your variables with some value. If you don't know what a variable's initial value should be, initialize it to 0.

#### Example 2.1

Let’s write a program that stores your age in a variable and outputs “My age is 21". The first line of the main function initializes myAge by assigning it a value immediately. compile and run the following code.

```cpp
#include <iostream>

using namespace std;

int main()
{
    int myAge = 21;
    cout << "My age is" << myAge << "years";
    system("pause");
    return 0;
}
```

### Introduction to strings

Fundamental types represent the most basic types handled by the machines where the code may run. But one  of  the  major  strengths  of  the  C++  language  is  its  rich  set  of  compound  types, of  which  the fundamental types are mere building blocks.  
An example of compound type is the string class. Variables of this type can store sequences of characters, such as words or sentences. A very useful feature!  
The first difference with fundamental data types is that in order to declare and use objects (variables) of this type, the program needs to include the header where the type is defined within the standard library.

```cpp
#include <iostream>
using namespace std;
int main(){
    string myString;
    myString = "This is a string";
    cout << myString;
    return 0;
}
```

As  you  can  see  in  the  previous  example, strings  can  be  initialized  with  any  valid  string  literal, just  like numerical  type  variables  can  be  initialized  to  any  valid  numerical  literal.  As  with  fundamental  types, all initialization formats are valid with strings:

```cpp
    string myString = "This is a string";
    string myString ("This is a string");
    string myString {"This is a string"};
```

Strings can also perform all the other basic operations that fundamental data types can, like being
declared without an initial value and change its value during execution:

#### Example 2.2

```cpp
#include <iostream>
using namespace std;
int main()
{
    string mystring;
    mystring = "This is the initial string content";
    cout << mystring << endl;
    mystring = "This is a different string content";
    cout << mystring << endl;
    return 0;
}
```

Note: inserting the endl manipulator ends the line (printing a newline character and flushing the stream).  
The string class is a compound type. As you can see in the example above, compound types are used in  
the same way as fundamental types: the same syntax is used to declare variables and to initialize them.  

### C++ Comments

A comment is text that the compiler ignores but that is useful for programmers. Comments are normally used  to  annotate  code  for  future  reference.  The  compiler  treats  them  as  white  space.  You  can  use comments in testing to make certain lines of code inactive.
A C++ comment is written in one of the following ways:

* The /*(slash, asterisk) characters, followed by any sequence of characters (including new lines), followed by the*/ characters. This syntax is the same as ANSI C.  
* The // (two slashes) characters, followed by any sequence of characters. A new line not
immediately preceded by a backslash terminates this form of comment. Therefore, it is
commonly called a single-line comment.

The comment characters (`/*` , `*/`, and `//`) have no special meaning within a character constant, string literal, or comment.

#### Example 2.3

```cpp
#include <iostream>
using namespace std;
int main()
{
    // Declaring integer and character variables
    int a;
    char ch;

    // Initializing the variables
    a = 10;
    ch = 'b';

    /* Printing
        the
        variables
    */
    cout << "The value of ch is " << ch << endl;
    cout << "The value of a is " << a << endl;
    return 0;
}
```

Output:

```
The value of ch is b
The value of a is 10
```

Notice the use of `endl` at the end of the `cout` statements. It simply adds a carriage return which ends the current line

### Inputing Multiple Values

If you have multiple format specifiers  within the string argument of cin, you can input multiple values.
All you need to do is to separate each format specifier with a `>>` string that separates variables. By default, cin stops reading in a value when `space` , `tab` or `enter` is pressed. Consider

```cpp
cin >> rollNumber >> myAge;
```

(Assume  that  roll_number  and  MyAge  have  been  declared  beforehand!).  If  I  entered:  1  2  and  pressed Enter, 1 would get assigned to roll_number, and 2 would get assigned to MyAge. But if I entered 1, 2 and pressed  Enter, roll_number  would  equal  1, but  MyAge  won't  get  assigned  2  because  cin  was  not expecting a comma in the input string.

Now let us look at a way to get input from the user and store it in variables. Consider the following program:

```cpp
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter value  of  a: \n";
    cin >> a;
    cout << "Enter value  of  b: \n";
    cin >> b;
    cout << "The  value  of  a  is:  " << a << endl;
    cout << "The value of b is: " << b << endl;
    cout << "Enter new value for both separated by a space:\n";
    cin >> a >> b;
    cout << "New values  are: " << a << "  " << b << endl;

    return 0;
}
```

Output:

```
Enter value of a: 
4 
Enter value of b:  7 
The value of a is: 4 
The value of b is: 7 
Enter new value for both separated by a space:  2 5 
New values are: 2 5 
```

### Arthmetic Operators

Arithmetic operators  are commonly used in a variety of programming languages. In C, there are five of them, and they all take two **OPERANDS**. Recall that an operand is an expression that is  required for an operator to work. For example, for `8 + 4 `, ` 8 ` and  ` 4 ` are considered as the operands.

| **Operator Name** | **Symbol** |
| ----------------- | ---------- |
| Multiplication    |     `*`    |
| Division          |     `/`    |
| Modulus           |     `%`    |
| Addition          |     `+`    |
| Subtraction       |     `-`    |

#### What is `%` ?

Multiplication, addition  and  subtraction  are  the  simplest  to  use.  Division  is  also  easy, but  watch
out  for  the  truncation  of  an  int  divided  by  an  int!  Now, the  one  that  confuses  novices  is  the
modulus operator, sometimes known as the remainder operator.  
To keep things simple, a%b returns the REMAINDER that occurs after performing a/b. For this
operator, a and b MUST be integers!  
For example, `6 % 3` returns `0` because 3 goes into 6 **EXACTLY**. Similarly, `4 % 4` , `8 % 2` and `16 % 8` all return `0` . So  why  does  `3 % 4`  return  3? Picture  it  this  way:  you have  3  holes  to  fill, but  you  can  only  fill  4 holes  at  a  time.  You  can't  fill  a  group  of  4  holes, therefore  the  3  holes  you  had  are  still  empty.
Similar story for `7 % 4` because you can fill in one group of 4 but still have 3 holes remaining.

#### Example 2.4

```cpp
int main()
{

    int a, b;
    int sum;

    cout << "Enter value  of  a: \n";

    cin >> a;

    cout << "Enter value  of  b: \n";

    cin >> b;

    sum = a + b;

    cout << "Sum:  " << sum << endl;

    return 0;
}
```

Output:

```
Enter value of a:
3
Enter value of b:
6
Sum: 9
```

### Comparison/Relational Operators

| **Operator Name**        | **Syntax** |
| ------------------------ | ---------- |
| Less than or equal to    | `a <= b` |
| Greater than or equal to | `a >= b` |
| Not equal to             | `a != b` |
| Equal to                 | `a == b` |
| Less than                | `a < b` |
| Greater than             | `a > b` |

### Logical Operators

| **Operator Name**      | **Syntax** |
| ---------------------- | ---------- |
| Logical negation (NOT) | `!a` |
| Logical AND            | `a && b` |
| Logical OR             | `a \|\| b` |

### Decision Control Structures

Till now we have used sequence control structure in the programs, in which the various steps are executed
sequentially i.e. in the same order in which they appear in the program. In C programming the instructions
are  executed  sequentially, by  default.  At  times, we  need  a  set  of  instructions  to  be  executed  Depending
upon different conditions to be satisfied.  
In such cases we must use decision control instructions. This can be achieved in C using; 

1. The if statement.
2. The if-else statement
3. The else - if statement

The `if` statement controls conditional branching. The body of an `if` statement is executed if the value of the expression/condition specified in the `if` statement is true. The syntax of the if statement is as follows:

```cpp
if(expression)
{
    // block of statement
}
```

#### Example 2.5

Write a program in which it takes a number from keyboard as an input and if the number is greater than 100 it prints “The number is greater than hundred”.

```cpp
#include <iostream>

using namespace std;
int main()
{
    int number;

    cout << "Enter an integer\n";
    cin >> number;
    if (number > 100)
    {
        cout <<"The number is greater than 100";
    }
    if (number < 100)
    {
        cout << "The number is greater than 100\n";
        cout << "No doubt that the number is greater than 100";
    }
}

```

Note we did not use curly brackets ‘{ }’for body of  if () because it did not include multiple statements
(block of statements). If it includes multiple statements, then it would have been something like this
if-else statement is similar to if with the addition of else statement. If the condition is false in if then
its body will be skipped and the else statement’s body will be executed.

```cpp
if (expression)  
{
    Block of statement;
}  
else  
{  
    Block of statement;  
}  
    Block of statement;   

```

#### Example 2.6

Write a program in which it takes two numbers from keyboard as input and subtract larger number
from smaller.

```cpp

#include <iostream>

using namespace std;

int main()
{

    int a, b;

    cout << "Enter first number\n";
    cin >> a;
    cout
        << "Enter second number\n";
    cin >> b;

    if (a >= b)
        // this condition can also be written as if(a>b||a==b)
        cout << a << "-" << b << "=" << a - b;
    else
        cout << b << "-" << a << "=" << b - a;
    return 0;
}

```

Nested if is basically if inside if.

#### Example 2.7

Write a program which take a number from keyboard and checks the number whether that number is 
less than 100 ornot if that number is lessthan100 than check that is it less than 50 or not.   

```cpp
#include <iostream>

using namespace std;
int main()
{
    int number;
    cout << "Enter an integer\n";
    cin >> number;
    if (number < 100)
    {
        cout << "Yes the number is less than 100";
        if (number < 50)
        {
            cout << " and number is also less than 50";
        }
        else
        {
            cout << " but the number is not less than 50";
        }
    }
    else

        cout << "No the number is not less than 100";
    return 0;
}
```

The above program checks if the number is less than 100. This check is done in the first if statement. 
If  the  result  is  true  the  program  enters  the  second  if  statement  which  is  also  called  the  nested  if 
statement.  Here  another  check  is  performed.  The  number  is  checked  if  it  less  than  50  or  not.  If  the 
number is less than 50 it is conveyed to the user. The rest is self-explanatory.

### The C++ else-if Statement

Sometimes we wish to make a multi-way decision based on several conditions. The most general way 
of doing this is by using the else if variant on the if statement. This works by cascading several 
comparisons. As soon as one of these gives a true result , the following statement or block is executed, 
and no further comparisons are performed.

Syntax:

```cpp
if (expression)  
{  
    Block of statement;  
}  
else if (expression)  
{   
    Block of statement  
}  
else if (expression)  
{  
    Block of statement;  
}  
// you can add as many else-if statements as many you need  
else  
{  
    Block of statement  
} 
```

#### Example 2.8

Write a program which takes marks as input and shows the output as follows: 

| **Marks Range**   | **Output**             |
|-------------------|------------------------|
| 75 and above      | Passed: Grade A        |
| 60 to 74          | Passed: Grade B        |
| 45 to 59          | Passed: Grade C        |
| Below 45          | Failed                 |

```cpp
#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter an marks\n";
    cin >> marks;
    if (marks >= 75)
        cout << "Passed: Grade A\n";
    else if (marks >= 60)
        cout << "Passed: Grade B\n";
    else if (marks >= 45)
        cout << "Passed: Grade C\n";
    else
        cout << "Failed\n";

    return 0;
}
```

In  this  example, all  comparisons  test  a  single  variable  called  marks.  In  other  cases, each  test  may 
involve a different variable or some combination of tests. The same pattern can be used with more or 
fewer else if's, and the final lone else may be left out. It is up to the programmer to devise the correct 
structure for each programming problem.

#### Example 2.9

Write a program which takes marks as input and then shows output as follows:

| **Marks Range**    | **Output**   |
|--------------------|--------------|
| 87 – 100           | Grade A      |
| 80 – 87            | Grade B+     |
| 72 – 80            | Grade B      |
| 67 – 72            | Grade C+     |
| 60 – 67            | Grade C      |
| Below 60           | Failed       |

```cpp
#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter an marks\n";
    cin >> marks;

    if (marks >= 87 && marks <= 100)
        cout << "Grade A\n";
    else if (marks >= 80 && marks < 87)
        cout << "Grade B+\n";
    else if (marks >= 72 && marks < 80)
        cout << "Grade B\n";
    else if (marks >= 67 && marks < 72)
        cout << "Grade C+\n";
    else if (marks >= 60 && marks < 67)
        cout << "Grade C\n";
    else
        cout << "Failed\n";
    return 0;
} 
```

In the above example logical operator && is used and because of this && operator condition will 
only  be  satisfied  if  both  the  conditions  in  a  single  if  are  true.  If  any  of  the  condition  is  false 
because of && operator the whole condition will be treated as false.

### Practice Problem 2.1

Write  a  C++  program  that  prompts  the  user  to  input  the  elapsed  time  for  an  event  in  seconds.  The program  then  outputs  the  elapsed  time  in hours, minutes, and  seconds.  (For  example, if  the  elapsed time is 9630 seconds, then the output is 2:40:30.)

Solution:

```cpp
#include <iostream> 
 
using namespace std; 
 
int main()  
{  
    int secondsElapsed, hours, minutes, seconds; 
    
    const int secondsPerMinute = 60;  
    const int secondsPerHour = 60 * secondsPerMinute; 
    
    cout << "Please enter the number of seconds elapsed: "; 
    cin >> secondsElapsed; 
    
    hours = secondsElapsed / secondsPerHour; 
    secondsElapsed = secondsElapsed % secondsPerHour; 
    minutes = secondsElapsed / secondsPerMinute; 
    seconds = secondsElapsed % secondsPerMinute; 
    
    cout << hours << ":" << minutes << ":" << seconds << endl; 
    return 0;  
} 
```

### Practice Problem 2.2

McDonald  offers  chill  out  deals  for  students.  They  have  special  student  discount  of  their  different 
food  items  i-e:  25%  discount  on  each  chicken BBq  platter, 10%  on  mayo  garlic  fries, 20%  on  each 
chicken burger and 15% on each beef burger. Original price of items are 400 , 700, 300 and 600 rupees 
per item respectively. Moreover there 10% more discount on chicken Bbq if order contains more than 
2 platters. Design a bill calculation system for McDonald.

```cpp
#include <iostream>
using namespace std;
int main()
{
    cout << "***************Select Deals***************\n";
    cout << "1. Chicken BBQ\n";
    cout << "2. Mayo garlic fries\n";
    cout << "3. Chicken burger\n";
    cout << "4. Beef Burger\n";
    int op;
    cout << "enter your favorite meal\n";
    cin >> op;
    int cbb = 400;
    int mf = 700;
    int cb = 300;
    int bb = 600;
    int amt;
    if (op == 1)
    {
        cout << "How many chicken BBq platter do you want??";
        cin >> amt;
        if (amt > 2)
        {
            cbb = cbb - (cbb * .25);
            amt = amt * cbb;
            amt = amt - (amt * .10);
        }
        else
        {
            cbb = cbb - (cbb * .25);
            amt = amt * cbb;
        }
        cout << "Your bill is: " << amt << endl;
    }
    else if (op == 2)
    {
        cout << "How many fries platter do you want??";
        cin >> amt;
        mf = mf - (mf * .10);
        amt = amt * mf;
        cout << "YOur bill is: " << amt << endl;
    }
    else if (op == 3)
    {
        cout << "How many chicken burger do you want??";
        cin >> amt;
        cb = cb - (cb * .20);
        amt = amt * cb;
        cout << "YOur bill is: " << amt << endl;
    }
    else if (op == 4)
    {
        cout << "How many Beef burger do you want??";
        cin >> amt;
        bb = bb - (bb * .15);
        amt = amt * bb;
        cout << "YOur bill is: " << amt << endl;
    }
    else
        cout << "Your entered option is not available please try again\n";
}
```
## Lab 3: Control Structures - II

The aims of this lab are to cover Control Structures of C++.  
Learning Objectives:

* Ternary Operator
* Introduction to Switch and Case Statement 
* General Syntax of Switch and Case Statements 
* Use of Break Statement
* Break Statement
* While Loop  
* Nested While Loop  
* Do While loop. 
 
Outcomes:

* Students should be able to use Switch statement, Case statement, Break statement
* Students should be able to use while, nested while and do while loop loops.  
* Students should be able to use For loop, Nested for Loop and differentiate them.

### Ternary Operator

#### Syntax

``` cpp
variable = (condition) ? expressionTrue : expressionFalse;
```

#### Example 3.1

``` cpp
    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;

```
#### Output
```
Good evening.
```

### Switch Statement

Switch statement is C/C++ language is used for selection control. The difference between if/else and 
switch selection statements is that the second one is used for selecting from multiple statements.  
There are times when you'll find yourself writing a huge if block that consists of many else if statements.  
The switch statement can help simplify things a little. It allows you to test the value returned by a 
single expression and then execute the relevant bit of code.  
You can have as many cases as you want, including a default case which is evaluated if all the cases 
fail.

#### Syntax

``` cpp
switch (expression) {  
    case expression1:  
        /* one or more statements */  
    case expression2:  
        /* one or more statements */   
        /* ...more cases if necessary */  
    default:  
        /* do this if all other cases fail */  
}
```
expression is any legal C++ expression, and the statements are any legal C++ statements or block of statements.  switch  evaluates  expression  and  compares  the  result  to  each  of  the  case  values.  Note, however, that the evaluation is only for equality; relational operators  may not be used here, nor can Boolean operations.

#### Flow Chart of Switch

![[images/switch_flow_chart.png]]

#### Example 3.2

``` cpp
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Pick a number from 1 to 4:\n";
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "You choose number 1\n";
    case 2:
        cout << "You choose number 2\n";
    case 3:
        cout << "You choose number 3\n";
    case 4:
        cout << "You choose number 4\n";
    default:
        cout << "That’s not 1, 2, 3 or 4\n";
    }
    return 0;
}
```

(Suppose I entered 2...)  

```
Pick a number from 1 to 4:  
2  
You chose number 2  
You chose number 3  
You chose number 4  
That's not 1,2,3 or 4! 
```
 
You'll notice that the program will select the correct case but will also run through all the cases below 
it (including the default) until the switch block's closing bracket is reached.  
To prevent this from happening, we'll need to insert another statement into our cases.

### The Break Statement

The break statement terminates the execution of the nearest enclosing do, for, switch, or while 
statement in which it appears. Control passes to the statement that follows the terminated statement. 

#### Example 3.3

``` cpp
#include <iostream>
using namespace std;
int main()
{
    int a;

    cout << "Pick a number from 1 to 4 :\n";
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "You choose number 1\n";
        break;
    case 2:
        cout << "You choose number 2\n";
        break;
    case 3:
        cout << "You choose number 3\n";
        break;
    case 4:
        cout << "You choose number 4\n";
        break;
    default:
        cout << "That's not 1, 2, 3 or 4\n";
    }
    return 0;
}

```

On first inspection you'll find that it's virtually identical to the last example, except I've inserted a 
break statement at the end of each case to "break" out of the switch block.  
Now it should work as expected:

```
Pick a number from 1 to 4:  
2  
You chose number 2
```

``` cpp


#include <iostream>
using namespace std;
int main()
{
    char grade;
    cout << "Enter your grade: ";
    cin >> grade;
    switch (grade)
    {
    case 'A':
        cout << "Your average must be between 90 - 100"
             << endl;
        break;
    case 'B':
        cout << "Your average must be between 80 - 89"
             << endl;
        break;
    case 'C':
        cout << "Your average must be between 70 - 79" << endl;
        break;
    case 'D':
        cout << "Your average must be between 60 - 69 " << endl;
        break;
    default:
        cout << " Your average must be below 60 " << endl;
    }
    return 0;
}
```

``` cpp
#include <iostream>
using namespace std;
int main()
{
    char c;
    int store;
    for (;;)
    {

        cout << "\nPress any key, Q to quit :";
        cin >> c;
        if (c == 'Q')
            break;
        else
        {

            store = (int)c; // convert character to corresponding ASCII value
            cout << store << endl;
        }
    }
    return 0;
} // loop exits only when ‘Q’ is pressed

```

**NOTE:**  It is  almost always  a good idea to have a default case in switch statements. If you have no other  need  for  the  default,  use  it  to  test  for  the  supposedly  impossible  case,  and print  out  an  error message; this can be a tremendous aid in debugging.
### Practice Problem 3.1

McDonald  offers  chill  out  deals  for  students.  They  have  special  student  discount  of  their  different 
food  items  i-e:  25%  discount  on  each  chicken BBq  platter,  10%  on  mayo  garlic  fries,  20%  on  each 
chicken burger and 15% on each beef burger. Original price of items are 400 ,700,300 and 600 rupees 
per item respectively. Moreover there 10% more discount on chicken Bbq if order contains more than 
2 platters. Design a bill calculation system for McDonald.

``` cpp

#include <iostream>
using namespace std;
int main()
{
    cout << "***************Select Deals***************\n";
    cout << "1. Chicken BBQ\n";
    cout << "2. Mayo garlic fries\n";
    cout << "3. Chicken burger\n";
    cout << "4. Beef Burger\n";
    int op;
    cout << "Enter your favorite meal\n";
    cin >> op;
    int cbb = 400;
    int mf = 700;
    int cb = 300;
    int bb = 600;
    int amt;
    switch (op)
    {

    case 1:

        cout << "How many chicken BBQ platter do you want?";
        cin >> amt;
        if (amt > 2)
        {
            cbb = cbb - (cbb * .25);
            amt = amt * cbb;
            amt = amt - (amt * .10);
        }
        else
        {
            cbb = cbb - (cbb * .25);
            amt = amt * cbb;
        }

        cout << "YOur bill is: " << amt << endl;
        break;

    case 2:
        cout << "How many fries platter do you want??";
        cin >> amt;
        mf = mf - (mf * .10);
        amt = amt * mf;
        cout << "YOur bill is: " << amt << endl;
        break;

    case 3:
        cout << "How many chicken burger do you want??";
        cin >> amt;
        cb = cb - (cb * .20);
        amt = amt * cb;
        cout << "YOur bill is: " << amt << endl;
        break;

    case 4:
        cout << "How many Beef burger do you want??";
        cin >> amt;
        bb = bb - (bb * .15);
        amt = amt * bb;
        cout << "YOur bill is: " << amt << endl;
        break;
    default:
        cout << "Your entered option is not available please try again\n";
    }
}
```
## Lab 4: Control Structure - III

The aims of this lab are to cover Control Structures of C++. 

* Use of For Loop 
* Use of Nested for Loop
* Comparison between For loop, while loop and Do While loop. 

Outcomes: 

* Students should be able to use while, nested while and do while loop loops. 
* Students should be able to use For loop, Nested for Loop and differentiate them

### Loop

Loops are used to repeat a block of code. Being able to have your program repeatedly execute a block of code is  one of the most basic but useful tasks in programming  --  many programs or websites  that produce  extremely  complex  output  are  really  only  executing  a  single  task  many  times.  Now,  think about what this means: a loop lets you write a very simple statement to produce a significantly greater result simply by repetition

### While Loop

The most basic loop in C is the while loop. A while statement is like a repeating if statement. Like an If statement, if the test condition is true: the statements get executed. The difference is that after the statements have been executed, the test condition is checked again. If it is still true the statements get executed again. This cycle repeats until the test condition evaluates to false.  A while loop is a control flow statement that allows code to be executed repeatedly based on a given condition. The while consists of a block of code and a condition. The condition is first evaluated and if  the  condition  is  true  the  code  within  the  block  is  then  executed.  This  repeats  until  the  condition 
becomes false.

#### Syntax

Basic syntax of while loop is as follows:

``` cpp
while ( expression )  
{  
    Single statement or  
    Block of statements;
}
```

The expression can be any combination of Boolean statements that are legal. Even, (while x \== 5 || v \== 7) which says execute the code while x equals five or while v equals 7.

#### Flow Chart of While Loop
![[images/while_loop_flow_chart.png]]
#### Example 4.1

Write a program using while loop who print the values from 10 to 1.

``` cpp
#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    while (i > 0)
    {
        cout << i << endl;
        i = i - 1;
    }
    return 0;
}
```

This will produce the following output:

```
10  
9  
8  
7  
6  
5  
4  
3  
2  
1
```

#### Example 4.2

Print numbers from 1 to 10 using a while loop

``` cpp

#include <iostream>
using namespace std;
int main()
{
    int counter = 1;
    while (counter <= 10)
    {

        cout << counter;
        cout << "\n";
        counter++;
    }
    return 0;
}

```

This example uses a while loop to count from 1 to 10. It does so by incrementing a variable  named  counter  by  1  in  each  iteration  or  cycle. Incrementing  a  variable  means  to  add something to it, so that its value is increased.

#### Example 4.3
Printing the numbers you entered using a while loop

``` cpp

#include <iostream>
using namespace std;
int main()
{
    int flag;

    cout << "Enter any number : (-1 to quit) ";
    cin >> flag;
    cout << "Entering the while loop now...\n";
    while (flag != -1)
    {
        cout << "Enter any number : (-1 to quit) ";
        cin >> flag;
        cout << "You entered \n"
             << flag;
    }
    cout << "Out of loop now";
    return 0;
}
```

It is based on a while - loop that keeps on running until a certain condition is reached (a certain value is entered by the user). That certain value is called the 'sentinel value','signal value' or 'flag value'. Our program asks the user for an integer value, if that value is not -1, it keep so running through the next cycle/iteration.


### Nested While Loop

Write a program who prints asterisk sign (\*) in such a way using nested while loops
```
*************  
************  
***********  
**********  
*********  
********  
*******  
******  
*****  
****  
***  
**  
*
```

``` cpp

#include <iostream>
using namespace std;
int main()
{
    int i = 15, j = 0;
    while (i > 0)
    {
        j = i - 1;
        while (j > 0)
        {
            cout << "*";
            j = j - 1;
        }
        cout << "\n";
        i = i - 1;
    }
    return 0;
}

```

#### Example 4.4

A program to show the nested while loop

``` cpp
#include <iostream>
using namespace std;
int main()
{
    // variable for counter
    int i = 1, j = 0;
    // outer loop, execute this first ...
    // for every i iteration, execute the inner loop
    while (i <= 9)
    {
        cout << i;
        // then execute inner loop with loop index j,
        // the initial value of j is i-1
        j = i - 1;
        while (j > 0)
        {
            cout << "==" << j;
            // decrement j by 1 until j>0, i-e j=1
            j = j - 1;
        }
        i = i + 1;
        cout << endl;
    }
    return 0;
}
```

Output:

```
1
2==1
3==2==1
4==3==2==1
5==4==3==2==1
6==5==4==3==2==1
7==6==5==4==3==2==1
8==7==6==5==4==3==2==1
9==8==7==6==5==4==3==2==1
```

### Do-while loop

Syntax

``` cpp

do {
    // statement
} while (expression) {
    // statement
}

```

Its functional it  is exactly the same as the while loop, except that condition in the do-while loop is evaluated  after  the  execution  of  statement  instead  of  before,  granting  at  least  one  execution  of statement even if condition is never fulfilled. For example, the following example program echoes any number you enter until you enter 0.

#### Example 4.5

``` cpp

#include <iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cout << "Enter number (0 to end): ";
        cin >> n;
        cout << "You entered: " << n << "\n";
    } while (n != 0);
    return 0;
}


```

Output:

```
Enter number (0 to end): 12345  
You entered: 12345  
Enter number (0 to end): 160277  
You entered: 160277
Enter number (0 to end): 0  
You entered: 0
```

### Continue Statement

In computer programming, the `continue` statement is used to skip the current iteration of the loop and the control of the program goes to the next iteration.

#### Syntax

``` cpp
continue;
```

#### Example 4.6

``` cpp
#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    while (i <= 5)
    {
        // condition to continue
        // it skips cout if number is even
        if (i % 2 == 0)
        {
            i++;
            continue;
        }
        cout << i << endl;
        i++;
    }
    return 0;
}

```


### For Loop

A for loop is a repetition control structure that allows you to efficiently write a loop that needs to execute a specific number of times.

#### Syntax
``` cpp

for ( init; condition; increment )
{
	statement(s);
}
```

Here is the flow of control in a for loop:

* The **init** step is executed first, and only once. This step allows you to declare and initialize any loop control variables. You are not required to put a statement here, as long as semicolon appears.
* Next, the **condition** is evaluated. If it is true, the body of the loop is executed. If it is false, the body of the loop does not execute, and flow of control jumps to the next statement just after the for loop.
* After the body of the for loop executes, the flow of control jumps back up to the **increment** statement. This statement allows you to update any loop control variables. This statement can be left blank, as long as a semicolon appears after the condition.
* The condition is now evaluated again. If it is true, the loop executes and the process repeats itself (body of loop, then increment step, and then again condition). After the condition becomes false, the for loop terminates.
#### Flow Diagram
![[images/for_loop_flow_chart.png]]
#### Example 4.7
``` cpp
#include <iostream>

using namespace std;
int main ()
{
	// for loop execution
	for( int a = 10; a < 20; a = a + 1 )
	{
		cout<< "value of a: " << a <<endl;
	}
	return 0;
}
```

Output
```
value of a: 10
value of a: 11
value of a: 12
value of a: 13
value of a: 14
value of a: 15
value of a: 16
value of a: 17
value of a: 18
value of a: 19
```
#### Example 4.8
``` cpp
#include<iostream>

using namespace std;
int main()
{
	int x;
	for ( x=5; x <= 50; x = x+5 )
	{
	x = x + 5 could also be written x += 5
	cout<< "Loop counter value is " << x << ".\n";
	}
	return 0; 
}
```

Output
```
Loop counter value is 5.
Loop counter value is 10.
Loop counter value is 15.
Loop counter value is 20.
Loop counter value is 25.
Loop counter value is 30.
Loop counter value is 35.
Loop counter value is 40.
Loop counter value is 45.
Loop counter value is 50.
```

*Can you modify the above program that counts from 50 to 5 with decrements of. 5?*

### Nested For Loop

We have seen the advantages of using various methods of iteration, or looping. Now let's take a look at what happens when we combine looping procedures.

The placing of one loop inside the body of another loop is called **nesting**. When you "**nest**" two loops, the outer loop takes control of the number of complete repetitions of the inner loop. While all types of loops may be nested, the most nested loops are **for** loops.

#### Example 4.9

Rectangle comprised of x's.

``` cpp
for (int rows = 0; rows < 4; rows++)
{
	for (int col = 0; col < 12; col++)
	{
		cout<<”x”;
	}
}
```
Output
```
xxxxxxxxxxxx
xxxxxxxxxxxx
xxxxxxxxxxxx
xxxxxxxxxxxx
```

#### Example 4.10

Missing `init` statement in for loop

``` cpp
#include <iostream>

using namespace std;

int main()

{
    int x = 0;
    for (; x < 10; x++)
    {
        cout << "\n"
             << x;
    }
    return 0;
}
```

**Note:** for ( ; ; ) works as an infinite loop

Which Loop should I use?

* while: the loop must repeat until a certain "condition" is met. If the "condition" is FALSE at the beginning of the loop, the loop is never executed. The "condition" may be determined by the user at the keyboard. The "condition" may be a numeric or an alphanumeric entry. This is a good, solid looping process with applications to numerous situations.
* do-while: operates under the same concept as the while loop except that the do-while will always execute the body of the loop at least once. (Do-while is an exit-condition loop -- the condition is checked at the end of the loop.) This looping process is a good choice when you are asking a question, whose answer will determine if the loop is repeated.
* for: the loop is repeated a "specific" number of times, determined by the program or the user. The loop "counts" the number of times the body will be executed. This loop is a good choice when the number of repetitions is known or can be supplied by the user.

### Do while, while and for comparison

The following program fragments print the numbers 1 - 20. Compare the different looping procedures. Remember, there are always MANY possible ways to prepare code!

##### do-while

``` cpp
int ctr = 1;

    do
    {
        cout << ctr++ << "\n";
    } while (ctr <= 20);

```

##### for

``` cpp

int ctr;
for (ctr = 1; ctr <=20; ctr++)
{
    Cout<<ctr<<”\n”;
}
```

##### while
``` cpp
int ctr = 1;
while (ctr<=20)
{
	cout<<ctr++<<”\n”;
}
```

### Common Error
If you wish the body of a for loop to be executed, DO NOT put a semicolon after the for's parentheses. Doing so will cause the for statement to execute only the counting portion of the loop, creating the illusion of a timing loop. The body of the loop will never be executed.
Semicolons are required inside the parentheses of the for loop. The for loop is the only statement that requires such semicolon placement.
### Practice Problem 4.1

GIKI admin opens a joint account for their employees (Assistant professors, lecturers and Engineers) with starting amount of 50,000. Any employee in case of emergency in need of money can utilize the account and draw certain amount from the account i-e For Assistant professors its 25,000-maximum limit, for lecturers its 20,000 and for engineers its 10,000. Design a transaction system for the admin which applies all the checks (of maximum limit) on account and perform transactions. System should detect invalid inputs and display error messages

``` cpp
 

#include <iostream>
using namespace std;
int main()
{
    int money = 50000;
    char op;
    int m;
    int t = 1;
    cout << "Welcome to giki joint account\n";
    cout << "Enter options for following profession\n";
    cout << "A. Assistant Professor\n";
    cout << "B.Lecturer\n";
    cout << "C. Engineer\n";
    while (t != 0)
    {
        cout << "\nEnter your profession\n";
        cin >> op;
        if (op == 'A')
        {
            cout << "Enter money you want to transact\n";
            cin >> m;
            if (m <= 25000)
            {
                money = money - m;
                cout << "transaction successful\n";
                cout << "Amount left in account\n";
                cout << money;
            }
            else if (op == 'B')
            {
                cout << "Enter money you want to transact\n";
                cin >> m;
                if (m <= 20000)
                {
                    money = money - m;
                    cout << "transaction successful\n";
                    cout << "Amount left in account\n";
                    cout << money;
                }
            }
            else if (op == 'C')
            {
                cout << "Enter money you want to transact\n";
                cin >> m;
                if (m <= 10000)
                {
                    money = money - m;
                    cout << "transaction successful\n";
                    cout << "Amount left in account\n";
                    cout << money;
                }
            }
            else
            {
                cout << "Option entered is wrong\n";
            }
            cout << "Want to continue\n";
            cin >> t;
        }
    }
}

```
### Practice Problem 4.2

Shanley hotel in Islamabad wants to replace their waiters with robots to take orders from their customers. Hotel owner wants to display menu on the screen of robots showing menu and their prices as:
| Item               | Price (PKR) |
|--------------------|-------------|
| Kabab              | 500         |
| Rice               | 200         |
| Drink              | 50          |
| Mutton Karahi      | 1200        | 
 
- Customer should be able to select items from menu as well as their amount (how much they want to order each item). 
- Wrong inputs should be detected and error message should be displayed in case of wrong input. 
- Bill should be displayed as well on the screen of the robot when customer is done with order. 

Write a program for above scenario.

``` cpp

#include <iostream>
using namespace std;
int main()
{

    int flag = 1;
    int kebabPrice = 500;
    int ricePrice = 200;
    int drinkPrice = 50;
    int a4 = 1200;
    int quantity = 1;
    int op = 0;
    int amount = 0;

    do
    {
        cout << "*******Shanley Hotel Menu******\n";
        cout << "1. Kabab ------- 500 WITH 3 PIECES\n";
        cout << "2.Rice with BBq ---- 200 PER PLATTER\n";
        cout << "3.Drinks --- 50 each\n";
        cout << "4. mutton Karahi ---- 1200\n";
        cout << "Select your food item: ";
        cin >> op;
        if (op == 1)
        {
            cout << "How many servings: ";
            cin >> quantity;
            amount = amount + kebabPrice * quantity;
        }
        else if (op == 2)
        {
            cout << "How many servings: ";
            cin >> quantity;
            amount = amount + ricePrice * quantity;
        }
        else if (op == 3)
        {
            cout << "How many servings: ";
            cin >> quantity;
            amount = amount + drinkPrice * quantity;
        }
        else if (op == 4)
        {
            cout << "How many servings: ";
            cin >> quantity;
            amount = amount + a4 * quantity;
        }
        else
        {
            cout << "Try again!! Wrong input: ";
        }

        cout << "Enter 1 to add more items and 0 to exit: ";
        cin >> flag;
    } while (flag != 0);

    cout << "Your total bill is: "<< amount;
}
```

### Practice Problem 4.3

To make telephone numbers easier to remember, some companies use letters to show their telephone number. For example, using letters, the telephone number 438-5626 can be shown as GET LOAN. In some cases, to make a telephone number meaningful, companies might use more than seven letters. For example, 225-5466 can be displayed as CALL HOME, which uses eight letters. Write a program that prompts the user to enter a telephone number expressed in letters and outputs the corresponding telephone number in digits.

If the user enters more than seven letters, then process only the first seven letters. Also output the â€“ (hyphen) after the third digit. Allow the user to use both uppercase and lowercase letters as well as spaces between words.

``` cpp
#include <iostream>

using namespace std;

int main()

{

    char letter;

    int counter = 0;

    cout << "Program to convert letters to their corresponding telephone digits" << endl;

    while (cin.get(letter) && counter < 7)
    {

        if (letter != ' ' && letter >= 'A' && letter <= 'z')
        {

            counter++; // Only increment the counter for valid characters

            if (letter > 'Z')
            {
				// Convert lowercase to uppercase if required.
                letter = (int)letter - 32; 
            }

            if (counter == 4)
            {

                cout << "-"; // Print the hyphen when required
            }

            switch (letter)
            {

            case 'A':

            case 'B':

            case 'C':

                cout << "2";

                break;

            case 'D':

            case 'E':

            case 'F':

                cout << "3";

                break;

            case 'G':

            case 'H':

            case 'I':

                cout << "4";

                break;

            case 'J':
            case 'K':

            case 'L':

                cout << "5";

                break;

            case 'M':

            case 'N':

            case 'O':

                cout << "6";

                break;

            case 'P':

            case 'Q':

            case 'R':

            case 'S':

                cout << "7";

                break;

            case 'T':

            case 'U':

            case 'V':

                cout << "8";

                break;

            case 'W':

            case 'X':

            case 'Y':

            case 'Z':

                cout << "9";

                break;

            default:

                break;
            }
        }
    }

    return 0;
}
```

### Practice Problem 4.4
Write a C++ program that does the following:
- It asks the user to enter an odd negative integer.
- The program reads a value n entered by the user. If the value is not legal, the program repeatedly makes the user type in another value until a legal value of n has been entered.
- The program computes the equivalent positive number and finds the entries of Fibonacci series up to that number.

``` cpp
#include <iostream>

using namespace std;

int main()

{

    int c, r, n;

    int fibonacci, first = 0, second = 0;

    cout << "Enter a negative odd integer: ";

    cin >> n;

    while ((n >= 0) || (n % 2 == 0))

    {

        cout << "Illegal Entry. Try again: ";

        cin >> n;
    }

    n = -1 * n;

    cout << "Fibonicci Series upto " << n << " Terms " << endl;

    for (int j = 0; j < n; j++)
    {
        if (j <= 1)
            fibonacci = j;
        else
        {
            fibonacci = first + second;
        }
        first = second;
        second = fibonacci;
        cout << fibonacci << ", ";
    }
    return 0;
}
```

## Lab 5: User defined Functions -I

Learning Objectives

* Call function by value
* Constant and default parameters
* Scope of variables within function
* Parameter Promotion and Demotion
* Built-in Functions

Outcomes

* Students should be able to understand the concepts of call by value
* Students should be able to understand the concept constant and default parameter
* Students should practice the examples discussed in the tutorial to get the clear image of functions before performing tasks.

### Function Declaration (Function Prototype)

Declares the function to the compiler, informing it about the function's name, return type, and parameters (if any) without providing the function body.

#### Syntax
    ```cpp
    return_type function_name(parameter_list);
    ```

#### Example 5.1
    ```cpp
    int add(int, int);
    ```

### Function Definition

Provides the actual implementation of the function. It consists of the same signature (return type, function name, parameter list) as in the declaration but also includes the function body.

#### Syntax
    ```cpp
    return_type function_name(parameter_list) {
        // Function body
    }
    ```

#### Example 5.2:
    ```cpp
    int add(int a, int b) {
        return a + b;
    }
    ```

### Returning Values from a Function in C++

A function can return a value to the calling code. The value returned must match the function's return type. A function that does not return any value has a return type of `void`.

The return statement ends the function's execution, and the value specified is sent back to the location where the function was called. If the function has a return type of void, no value is returned and no return statement is necessary, though it can be used to exit early.

#### Syntax:
```cpp
// within function definition
return expression;
```

#### Example 5.

``` cpp

int max(int a, int b) {
    if (a > b) {
        return a;  // If a is greater, return a
    } else {
        return b;  // Otherwise, return b
    }
}

```

#### Example 

``` cpp
void checkNumber(int n) {
    if (n < 0) {
        cout << "Negative number" << endl;
        return;  // Exit early
    }
    cout << "Non-negative number" << endl;
}
```

### Function Call

A **function call** is the process of invoking a function to execute its code. When you call a function, you provide the necessary arguments (if any) and the program jumps to the function definition to run the code.

#### Syntax:
```cpp
function_name(argument_list);
```

Any expression can be passed as  an argument into a function, for instance, the following is a legal function call for a maximum function defined to take 3 arguments: maximum( a, b, a + b, maximum(c + d, e, f) ).  

C++  functions  in  can  be  compared  to  mathematical  functions:  just  like  f(x,  y,  z)  means  some mathematical expression named f evaluated for certain values  of x, y, and z, isMultiple(a, b) means some set of instructions named isMultiple evaluated for certain values of a and b. 

#### Example 5.3

```cpp
#include <iostream>
using namespace std;

// Function declaration
int add(int, int);

int main() {
    int num1 = 5, num2 = 10;
    
    // Function call
    int result = add(num1, num2);
    cout << "Sum: " << result << endl;
    
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
```

### Parameters and Arguments
**Parameters** and **arguments** are used to pass data to functions. While they are often used interchangeably, there is a subtle difference between the two. 
### Parameters 
**Parameters** are the variables defined by a function that receive the values when the function is called. They are specified in the function declaration and definition. 
#### Syntax
```cpp 
return_type function_name(parameter_type parameter_name); 
```

#### Example 5.

``` cpp
int add(int a, int b) {
    return a + b;
}

```

In this example, `int a` and `int b` are **parameters** of the `add` function. They are placeholders that will hold the values passed when the function is called.

### Arguments

**Arguments** are the actual values passed to the function when it is called. These values are assigned to the corresponding parameters.

``` cpp
function_name(argument1, argument2, ...);
```

#### Example 5.
``` cpp
int result = add(5, 10);
```
Here, `5` and `10` are **arguments** that are passed to the `add` function. These arguments are copied into the parameters `a` and `b` respectively when the function is executed.

#### Example 5.

```cpp
#include <iostream>
using namespace std;

// Function declaration with parameters
int multiply(int, int);

int main() {
    int num1 = 6, num2 = 7;

    // Function call with arguments
    int result = multiply(num1, num2);
    
    cout << "Product: " << result << endl;
    
    return 0;
}

// Function definition with parameters
int multiply(int a, int b) {
    return a * b;
}

```

- **Parameters**: In the `multiply` function, `int a` and `int b` are parameters.
- **Arguments**: In `main()`, when the function is called as `multiply(num1, num2)`, `num1` and `num2` (which have the values `6` and `7`) are arguments passed to the function.
- The arguments are copied into the parameters (`a` and `b`) within the function and used to compute the product.


### Scopes

**Scope** refers to the region or area in a program where a variable or function is accessible. The concept of scope defines the lifetime and visibility of a variable or function within different parts of a program. Variables or functions can only be used within the scope they are defined in.

**Types of Scopes:**

1. Local Scope 
2. Global Scope 
3. Block Scope 
4. Function Scope

#### Local Scope

A variable declared inside a function or block is said to have **local scope**. It is only accessible within that function or block. Once the function or block is exited, the variable goes out of scope and is destroyed. 
##### Example (Local Scope): 
 ``` cpp
#include <iostream> 
using namespace std; 
void myFunction() { 
	int localVar = 10; // localVar has local scope 
	cout << "Local variable: " << localVar << endl; 
} 
int main() { 
	myFunction(); 
	// cout << localVar; // Error: localVar is not accessible here 
	return 0; 
} 
```

In this example, `localVar` is declared inside the `myFunction()` function, so it has **local scope**. It cannot be accessed outside the function.

#### Global Scope

A variable declared outside of all functions is said to have **global scope**. Global variables can be accessed from anywhere in the program after they have been declared.

``` cpp
#include <iostream>
using namespace std;

int globalVar = 20;  // globalVar has global scope

void myFunction() {
    cout << "Global variable inside function: " << globalVar << endl;
}

int main() {
    cout << "Global variable in main: " << globalVar << endl;
    myFunction();
    return 0;
}

```

In this example, `globalVar` is declared outside of any function, so it has **global scope** and is accessible both in `main()` and `myFunction()`.

#### Block Scope

Variables declared inside a block of code (enclosed by `{}`) have **block scope**. They are accessible only within that block and cannot be accessed from outside it.

``` cpp

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    
    {  // Start of block
        int y = 20;
        cout << "Inside block: x = " << x << ", y = " << y << endl;
    }  // End of block
    
    // cout << y;  // Error: y is not accessible outside the block
    return 0;
}


```

In this example, `y` is declared inside a block and can only be used within that block. Outside the block, `y` is no longer in scope.

#### Function Scope

All variables declared inside a function (whether local or global) are said to have **function scope**. These variables are not accessible outside the function they are declared in.

``` cpp
#include <iostream>
using namespace std;

void myFunction() {
    int funcVar = 100;  // funcVar has function scope
    cout << "Function variable: " << funcVar << endl;
}

int main() {
    myFunction();
    // cout << funcVar;  // Error: funcVar is not accessible in main()
    return 0;
}

```

In this example, `funcVar` has **function scope** and is accessible only within `myFunction()`.

### Practice Problem 5.1

Create a class named `BankAccount` that represents a simple bank account. The class should have the following private member variables:
- `accountNumber` (string)
- `balance` (double)

The class should include the following public methods:
- A constructor that initializes the `accountNumber` and sets the `balance` to `0.0`.
- A method `deposit(double amount)` that adds the specified amount to the balance.
- A method `withdraw(double amount)` that subtracts the specified amount from the balance (only if sufficient funds are available).
- A method `getBalance()` that returns the current balance.
- A method `getAccountNumber()` that returns the account number.

Implement the class in a program and demonstrate its functionality in the `main()` function.

##### Requirements
- Create a `BankAccount` object.
- Perform several deposits and withdrawals.
- Print the account number and the final balance.
----
##### Expected Output

```
Account Number: 123456 
Deposited: $500.00 
Deposited: $300.00 
Withdrawn: $200.00 
Withdrawn: $800.00 // Should show an error message for insufficient funds Final Balance: $800.00
```

``` cpp
#include <iostream>
#include <string>

using namespace std;

// Global variables
string accountNumber; // Account number
double balance = 0.0; // Account balance initialized to 0.0

// Function to initialize the bank account
void initializeAccount(string accNum) {
    accountNumber = accNum; // Set the account number
    balance = 0.0;          // Initial balance set to 0
    cout << "Account initialized successfully!" << endl;
}

// Function to deposit money into the account
void deposit(double amount) {
    if (amount > 0) {
        balance += amount; // Add amount to balance
        cout << "Deposited: $" << amount << endl;
    } else {
        cout << "Invalid deposit amount!" << endl;
    }
}

// Function to withdraw money from the account
void withdraw(double amount) {
    if (amount > balance) {
        cout << "Insufficient funds for withdrawal!" << endl;
    } else if (amount > 0) {
        balance -= amount; // Subtract amount from balance
        cout << "Withdrawn: $" << amount << endl;
    } else {
        cout << "Invalid withdrawal amount!" << endl;
    }
}

// Function to get the current balance
double getBalance() {
    return balance;
}

// Function to get the account number
string getAccountNumber() {
    return accountNumber;
}

int main() {
    int choice;
    string accNum;
    double amount;

    // Initialize account with user input
    cout << "Enter your account number to initialize: ";
    cin >> accNum;
    initializeAccount(accNum);

    do {
        // Display menu options to the user
        cout << "\nSelect an action:" << endl;
        cout << "1. Deposit money" << endl;
        cout << "2. Withdraw money" << endl;
        cout << "3. Check balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                withdraw(amount);
                break;
            case 3:
                cout << "Account Number: " << getAccountNumber() << endl;
                cout << "Current Balance: $" << getBalance() << endl;
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

```


## Lab 6: User defined Function - II, Recursion and Enums

### Default Parameters

A default value is assigned to a parameter if no argument is provided during the function call.

#### Example 5.

``` cpp
int add(int a, int b = 10) { 
	return a + b; 
} 
int main() {
	cout << add(5) << endl; // Outputs 15 (since b defaults to 10) 
	cout << add(5, 3) << endl; // Outputs 8 (b is overridden by 3) 
	return 0; 
}
```

In this example, the second parameter `b` has a default value of `10`. If the function `add` is called with only one argument, the default value is used. If two arguments are provided, the second argument overrides the default value.


### Recursion

Recursion is a programming technique where a function calls itself to solve smaller instances of the same problem until it reaches a base condition that stops the recursive calls. It is a powerful tool for solving problems that can be broken down into smaller, similar subproblems, for example finding factorial of an integer.

#### Key Points of Recursion

1. **Base Case**: The condition under which the function stops calling itself. Without a base case, the recursion would continue indefinitely, leading to a memory constraints.
2. **Recursive Case**: The part of the function where it calls itself to break the problem down into smaller parts.

#### Example 6.

The factorial of a number `n` (denoted as `n!`) is the product of all positive integers less than or equal to n. Factorial can be defined recursively as:

- `n! = n * (n-1)!`
- Base case: `0! = 1`


``` cpp

#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0) {
        return 1;  // Base case
    } else {
        return n * factorial(n - 1);  // Recursive case
    }
}

int main() {
    int number = 5;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}

```

##### Output

```

Factorial of 5 is 120
```

##### Explanation

1. When `factorial(5)` is called, the function keeps calling itself with `n - 1` (i.e., 5 → 4 → 3 → 2 → 1 → 0).
2. Once `n` reaches 0, the base case is triggered, returning 1.
3. The recursion then unwinds, multiplying the results as it returns from each recursive call:
`1 * 1 = 1`,
`2 * 1 = 2`,
`3 * 2 = 6`,
`4 * 6 = 24`,
`5 * 24 = 120`.


### Function Overloading

Function overloading allows you to define multiple functions with the same name, provided they differ in either the number or types of their parameters. This enhances code readability and maintainability by enabling the use of a single, descriptive function name for related tasks that operate on different types or amounts of data

#### Key points of Function Overloading

1. **Same Function Name:** The overloaded functions must have the same name.
2. **Different Parameter List:** Functions must differ in either:
    - Number of parameters
    - Type of parameters
    - Order of parameters
3. **Return Type:** The return type alone cannot be used to distinguish overloaded functions.

``` cpp

#include <iostream>
using namespace std;

// Overloaded function for adding two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded function for adding two floating-point numbers
float add(float a, float b) {
    return a + b;
}

// Overloaded function for adding three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    // Call the overloaded functions
    cout << "Addition of two integers: " << add(10, 20) << endl;          // Calls add(int, int)
    cout << "Addition of two floats: " << add(10.5f, 20.3f) << endl;      // Calls add(float, float)
    cout << "Addition of three integers: " << add(10, 20, 30) << endl;    // Calls add(int, int, int)

    return 0;
}
```

##### Output

```

Addition of two integers: 30
Addition of two floats: 30.8
Addition of three integers: 60
```

##### Explanation

- `add(int a, int b)`: Adds two integers.
- `add(float a, float b)`: Adds two floating-point numbers.
- `add(int a, int b, int c)`: Adds three integers.

The compiler automatically selects the appropriate overloaded function based on the number and types of arguments passed to the function. This makes the function name consistent while providing flexibility for different use cases.

### Enum

Enums (short for enumerations) are user-defined data types that consist of a set of named integral constants. They make the code more readable and maintainable by allowing you to define a group of related constants with descriptive names.

#### Syntax

``` cpp

enum EnumName {
    Constant1, // By default, the value is 0
    Constant2, // The value is 1
    Constant3  // The value is 2, and so on
};
```

#### Example 6.

``` cpp

#include <iostream>
using namespace std;

// Define an enum for days of the week
enum DaysOfWeek {
    Sunday,    // 0
    Monday,    // 1
    Tuesday,   // 2
    Wednesday, // 3
    Thursday,  // 4
    Friday,    // 5
    Saturday   // 6
};

int main() {
    DaysOfWeek today = Wednesday;

    if (today == Wednesday) {
        cout << "It's Wednesday!" << endl;
    }

    // Output the integer value of today (3 in this case)
    cout << "Integer value of today: " << today << endl;

    return 0;
}
```

Output

```

It's Wednesday!
Integer value of today: 3
```

#### Example 6.

``` cpp

#include <iostream>
using namespace std;

enum TrafficLight {
    Red,    // 0
    Yellow, // 1
    Green   // 2
};

void trafficLightAction(TrafficLight light) {
    switch (light) {
        case Red:
            cout << "Stop! The light is Red." << endl;
            break;
        case Yellow:
            cout << "Caution! The light is Yellow." << endl;
            break;
        case Green:
            cout << "Go! The light is Green." << endl;
            break;
        default:
            cout << "Invalid traffic light!" << endl;
    }
}

int main() {
    TrafficLight currentLight = Green;

    trafficLightAction(currentLight); // Output: Go! The light is Green.

    currentLight = Yellow;
    trafficLightAction(currentLight); // Output: Caution! The light is Yellow.

    currentLight = Red;
    trafficLightAction(currentLight); // Output: Stop! The light is Red.

    return 0;
}

```
- The TrafficLight enum represents three possible states of a traffic light: Red, Yellow, and Green.
- The function trafficLightAction() takes the current traffic light as an argument and performs an action based on its value using a switch statement.
- In the main() function, we simulate different traffic light states and call the function to display appropriate messages.

#### Output
```

Go! The light is Green.
Caution! The light is Yellow.
Stop! The light is Red.
```
