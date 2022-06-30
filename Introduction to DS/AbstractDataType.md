# Abstract DataType


## What is an abstract data type?

Abstract data types are defined as :

- Representation of data

- Operation on data


### Representation of data :

Lets say we have `int x;`. In some C++ compilers, that integer declaration is stored in 2 bytes (16 bits) of memory.
One bit of the memory cell is assigned to take care of the sign of the number (1 for negatives in binary and 0 for positives) 
and the other 15 bits are used to store the number itself.

Same as the representation of the integer type, we can represent the same way any of the data types like floats, strings, etc.


### Operations on data :

Let's take the integer we've declared above. We can apply multiple operations on this data type, such as : 

- Addition +
- Substraction -
- Multiplication \*
- Division / 
- Modulo %
- Incrementation ++ (post and pre)
- Decrementation -- (post and pre)

Just like an integer data type has different operations, same other data types such as floats, strings, etc. have their own
operations. 
Integers, floating point numbers, strings among other data types already defined are called Primitive Data Types.

### What are Abstract Data Types?

Abstract Data Types are heavily relied to object-oriented programming. As we treat data as an object, the same type of object (which is its type of data)
is defined by the programmer itself. 

Let's take a list as an example : 

`List -> {8, 3, 9, 4, 6, 10, 12}`

The list contains 7 elements, so our positions go from 0 to 6.

In order to code this list, we will need :

- Space to store the elements
- Capacity of the list
- Size of the list

With those elements, we already have an idea of the ressources we can use to represent our list.
Idealy, we can use Array or a Linked List to represent our list of elements. But will we be able to do any operations on our list?
To answer that question, is important to identify the operations allowed in each of the two data structures.

Let's list few of the operations we want to do in our list (which is an abstract data type) : 

- ```add(element) / append(element)```
- ```add(index, element) / insert(index, element)```
- ```remove(element)```
- ```remove(index)```
- ```set(index, element) / replace(index, element)```
- ```get(index)```
- ```search(key) / contains(key)```
- ```sort()```
- ...

Now we have defined a representation and the operations our list will have, we can say our list is a data type. We can put all of it together and 
define this list as an abstract data type class in C++ or in any other object-oriented programming language such as Java. 
In this project, we will represent this data structure aswell as others as abstract data types. 


