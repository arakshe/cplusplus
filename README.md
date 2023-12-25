


## Questions

### Q-streamsort (I/O)

Write a function named streamsort that takes an istream as an
argument. The function reads integers from the stream until an error
condition (as in assignments). It then prints the sorted integers it
read to stdout, preceded by "sorted: " and separated by a single
space.

You can use any classes and functions provided by the already included
headers in your implementation (such as standard library algorithms).

### Q-strncat (C-strings)

Write a function named strncat that returns a bool and takes three
parameters: a C-string named s1, the size of the total buffer
containing s1 named s1sz as a size_t, and a const C-string
named s2. If there is enough space in the buffer of s1 to hold the
resulting C-string, the function concatenates s2 onto s1 and returns
true; otherwise, it returns false and the contents of s1 are
unspecified. You can assume that s1 and s2 are not null.

Requirements:
* **Do not use any library functions or classes in your implementation.**

### Q-color (operator overloading)

Write a class called Color that represents *immutable* RGB color values
as floats. For an RBG color, use a combination of (red, green, blue)
elements, with each element's value between 0 and 1. Values outside
this range should be clamped to stay within it. Once a Color has been
constructed, its elements cannot be changed.

Given Color objects c?, floats f?, and integers i?, the following
expressions should be defined:

* Color(): initializes to black, RGB (0, 0, 0)
* Color(c1): copy construction
* Color(f1, f2, f3): initializes color's RGB to (f1, f2, f3)
* c1[i1]: accesses elements by index: [0] is red, [1] is green, [2] is blue; any other indices throw a std::out_of_range exception
* f1 * c1: returns a color with all elements of c1 scaled by f1
* c1 * f1: returns a color with all elements of c1 scaled by f1

Note that a `clamp` utility function is provided.

Requirements:
* **Do not change the provided body of the Color class. Add implementations below it.**

### Q-chararray (memory management)

Write a class CharArray that represents a C-string with a dynamic
character array just big enough to hold the C-string (and terminating
null), and manages the memory it dynamically allocates to hold the
C-string (i.e. is reponsible for deallocating it). Do not use any
cstring library functions.

* A CharArray has a single char * member.
* A CharArray is constructible from an std::string, and when constructed will allocate its own buffer and copy the contents of the std::string.
* A CharArray **is not** copy constructible or copy assignable.
* A CharArray *is* move constructible and move assignable.
* CharArray has a const member function print() that will print "chararray: " followed by the contents (if any) of the CharArray C-string followed by a newline to stdout. 

### Q-entity (inheritance)

You are provided with a partial implementation of a class
hierarchy. Entity is the base class and UpMover, DownMover, and
Destroyer should inherit from it. Update the classes so that the
derived classes can be constructed and used through base class
pointers correctly. Do not add new member variables to any classes or
new member functions to the derived classes.

* Entity holds the position as x, y coordinates.
* All objects are constructed with a starting position.
* The update method can change the position.

### Q-binstree (data structures)

You are provided with a partial implementation of an integer binary
search tree BST. Implement the insert method to correctly insert the
given element into the tree. All children to the left should be less
than the current node and all children to the right should be greater
than the current node. Duplicates should be discarded. You don't have
to keep the tree well-balanced, just find a place for new elements.

### Q-accum (templates)

Write **one function template** conditional_accum that takes as arguments
iterators to the beginning and end of a range, an initial value, and a
predicate function (a function returning a bool). conditional_accum
returns the sum (with operator +) of the initial value and all the
elements in the range for which the predicate function returns true.

For example, if the range contained the values 1, 2, 3, 4, 5, the
initial value was 0, and the predicate returns true for odd numbers,
the function would return 1 + 3 + 5 + 0, or 9.
