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