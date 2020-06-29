# Data Type Ranges

The Microsoft C++ 32-bit and 64-bit compilers recognize the types in the table later in this article.

- `int` (`unsigned int`)

- `__int8` (`unsigned __int8`)

- `__int16` (`unsigned __int16`)

- `__int32` (`unsigned __int32`)

- `__int64` (`unsigned __int64`)

- `short` (`unsigned short`)

- `long` (`unsigned long`)

- `long` `long` (`unsigned long long`)

If its name begins with two underscores (`__`), a data type is non-standard.

The ranges that are specified in the following table are inclusive-inclusive.

|Type Name|Bytes|Other Names|Range of Values|
|---------------|-----------|-----------------|---------------------|
|`int`|4|`signed`|-2,147,483,648 to 2,147,483,647|
|`unsigned int`|4|`unsigned`|0 to 4,294,967,295|
|`__int8`|1|`char`|-128 to 127|
|`unsigned __int8`|1|`unsigned char`|0 to 255|
|`__int16`|2|`short`, `short int`, `signed short int`|-32,768 to 32,767|
|`unsigned __int16`|2|`unsigned short`, `unsigned short int`|0 to 65,535|
|`__int32`|4|`signed`, `signed int`, `int`|-2,147,483,648 to 2,147,483,647|
|`unsigned __int32`|4|`unsigned`, `unsigned int`|0 to 4,294,967,295|
|`__int64`|8|`long long`, `signed long long`|-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807|
|`unsigned __int64`|8|`unsigned long long`|0 to 18,446,744,073,709,551,615|
|`bool`|1|none|`false` or `true`|
|`char`|1|none|-128 to 127 by default<br /><br /> 0 to 255 when compiled by using [/J](../build/reference/j-default-char-type-is-unsigned.md)|
|`float`|4|none|3.4E +/- 38 (7 digits)|
|`double`|8|none|1.7E +/- 308 (15 digits)|

# Character constant

Character constants are one or more members of the “source character set,” the character set in which a program is written, surrounded by single quotation marks (').

| Escape sequence | Define |
| ---- | ---- |
| \\\\ | \ character |
| \' | ' character |
| \" | " character |
| \? | ? character |
| \a | Alarm ringtone |
| \b | Backspace key |
| \f | Form feed |
| \n | Line break |
| \r | Carriage return |
| \t | Horizontal tab |
| \v | Vertical tab |

# Define constants

Constant is something that doesn't change.

# Operator

## Math operators

Assuming that the value of variable A is 10 and the value of variable B is 20, then:

| Operator | Description | Examples |
| ---- | ---- | ---- |
| + | Add two operands | A + B will get 30 |
| - | Subtract the second operand from the first operand | A - B wil get -10 |
| * | Multiply two operands | A * B will get 200 |
| / | Numerator divided by denominator | B / A will get 2 |
| % | Modulus operator, remainder after division | B % A will get 0 |
| ++ | Integer value increase 1 | A++ will get 11 |
| -- | Integer value reduction 1 | A-- will get 9 |

## Relational operator

Assuming that the value of variable A is 10 and the value of variable B is 20, then:

| Operator | Description | Examples |
| ---- | ---- | ---- |
| == | Check if the values of the two operands are equal, if they are equal then the condition is true. | (A == B) Not true |
| != | Check whether the values of the two operands are equal, if not equal, the condition is true. | (A != B) True |
| &gt; | Check if the value of the left operand is greater than the value of the right operand, and if so, the condition is true. | (A &gt; B) Not true |
| &lt; | Check if the value of the left operand is less than the value of the right operand, and if so, the condition is true. | (A &lt; B) True |
| &gt;= | Check if the value of the left operand is greater than or equal to the value of the right operand, and if so, the condition is true. | (A &gt;= B) Not true |
| &lt;= | Check if the value of the left operand is less than or equal to the value of the right operand, and if so, the condition is true. | (A &lt;= B) True |

# Decision

Decision making structures require that the programmer specify one or more conditions to be evaluated or tested by the program, along with a statement or statements to be executed if the condition is determined to be true, and optionally, other statements to be executed if the condition is determined to be false.

| Statement | description |
| ---- | ---- |
| [if Statement](http://www.runoob.com/cplusplus/cpp-if.html) | An **if statement** consists of a boolean expression followed by one or more statements. |
| [if...else Statement](http://www.runoob.com/cplusplus/cpp-if-else.html) | An **if statement** can be followed by an optional **else statement**, which executes when the boolean expression is false. |
| [Nested if Statement](http://www.runoob.com/cplusplus/cpp-nested-if.html) | You can use one **if** or **else if** statement inside another **if** or **else if** statement(s). |
| [switch Statement](http://www.runoob.com/cplusplus/cpp-switch.html) | A **switch statement** allows a variable to be tested for equality against a list of values. |
| [Nested Switch Statement](http://www.runoob.com/cplusplus/cpp-nested-switch.html) | You can use one **switch statement** inside another **switch** statement(s). |

## The ? : Operator

We have covered conditional operator "? :" in previous chapter which can be used to replace **if...else** statements. It has the following general form

```C++
if(y < 10){ 
   var = 30;
}else{
   var = 40;
}
```

```C++
var = (y < 10) ? 30 : 40;
```