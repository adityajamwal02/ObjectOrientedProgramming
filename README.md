# Object Oriented Programming
#### It aims to implement real-world entities and bind together the data and the functions that operate on them so that no other part of the code can access this data except that function.

## Why do we need object-oriented programming
1) To make the development and maintenance of projects more effortless. <br>
2) To provide the feature of data hiding that is good for security concerns.  <br>
3) We can solve real-world problems if we are using object-oriented programming. <br>
4) It ensures code reusability. <br>
5) It lets us write generic code: which will work with a range of data, so we don’t have to write basic stuff over and over again. <br>

## OOPs Concepts:
### Class
A class is a user-defined data type. It consists of data members and member functions, which can be accessed and used by creating an instance of that class. It represents the set of properties or methods that are common to all objects of one type. <br>

### Objects
An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated. An object has an identity, state, and behavior. Each object contains data and code to manipulate the data.

### Data Abstraction 
Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation. 

### Encapsulation
Encapsulation is defined as the wrapping up of data under a single unit. It is the mechanism that binds together code and the data it manipulates. In Encapsulation, the variables or data of a class are hidden from any other class and can be accessed only through any member function of their class in which they are declared. As in encapsulation, the data in a class is hidden from other classes, so it is also known as data-hiding.

### Inheritance
The capability of a class to derive properties and characteristics from another class is called Inheritance. When we write a class, we inherit properties from other classes. So when we create a class, we do not need to write all the properties and functions again and again, as these can be inherited from another class that possesses it. Inheritance allows the user to reuse the code whenever possible and reduce its redundancy.

#### Single Inheritence <br>
#### Mulitple Inheritence <br> 
#### Multilevel Inheritence <br>
#### Hierarchical Inheritence <br>
#### Hybrid Inheritence <br>
  
### Polymorphism
The word polymorphism means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form. 

#### Compile Time Polymorphism <br>
Function Overloading and Operator Overloading

#### Run Time Polymorphism <br>
Virtual Function

### Dynamic Binding
Dynamic binding means that the code associated with a given procedure call is not known until the time of the call at run time.

### Message Passing
It is a form of communication used in object-oriented programming as well as parallel programming. Objects communicate with one another by sending and receiving information to each other. A message for an object is a request for execution of a procedure and therefore will invoke a function in the receiving object that generates the desired results. Message passing involves specifying the name of the object, the name of the function, and the information to be sent.

### Exception Handling
An exception is termed as an unwanted error that arises during the runtime of the program. The practice of separating the anomaly-causing program/code from the rest of the program/code is known as Exception Handling. 

### File Handling
File handling is used to store data permanently in a computer. Using file handling we can store our data in secondary memory (Hard disk). The I/O system of C++ contains a set of classes which define the file handling methods. These include ifstream, ofstream and fstream classes. These classes are derived from fstream and from the corresponding iostream class.

### Dynamic Memory Allocation (Reasons and Deletion of memory assigned)
Memory has to be allocated to the variables that we create, so that actual variables can be brought to existence. When we declare variables, we actually are preparing all the variables that will be used, so that the compiler knows that the variable being used is actually an important part of the program that the user wants and not just a rogue symbol floating around.The mechanism by which storage/memory/cells can be allocated to variables during the run time is called Dynamic Memory Allocation. Dynamically created lists insertions and deletions can be done very easily just by the manipulation of addresses whereas in case of statically allocated memory insertions and deletions lead to more movements and wastage of memory. When we want data structures without any upper limit of memory space. When we do not know how much amount of memory would be needed for the program beforehand. Static memory allocation can only be done on stack whereas dynamic memory allocation can be done on both stack and heap. An example of dynamic allocation to be done on the stack is recursion. While allocating memory on heap we need to delete the memory manually as memory is not freed(deallocated) by the compiler itself even if the scope of allocated memory finishes(as in case of stack).
