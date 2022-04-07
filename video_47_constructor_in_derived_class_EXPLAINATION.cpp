/*
 * Constructor in Derived Classes
 *
 * 1. We can use construcotr in dervied class in C++
 * 2. If base class constructor doesn't have any argument, there is no need of any constructor in derived class.
 * 3. But if their is one or more argument in the base class constructor derived class need to pass argument to the base class constructor
 * 4. If both base and derived class have constructor, base class construcotr are the first to execute.
 * 
 *
 *
 * Constructor in Multiple Inheritance.
 *
 * 1.In multiple inheritanve, base classes are constructored in the order in which they apppear in the class declaration.
 *
 *
 * 2. In multilevel inheritance, the constructor are executed in order of inheritance.
 *
 * Special Syntax
 *
 * 1. C++ support an special syntax for passing argument to multiple base classes.
 * 2. The constructor of derived class receive all the argument at once and then will pass the calls to the respective base classes
 * 3. The body is called after all the constructor are finished executing.
 *
 * Class A --> a1,a2
 * Class B : public A --> b1,b2
 * Class C : public B -->c1, c2
 * {
 *    C obj1(1,2,3,4,5,6);
 *    C(a1,a2,b1,b2,c1,c2):B(b1,b2):a(a1,a2)
 *    {
 *    body
 *    }
 *
 *    Special Case of virtual Base class
 *
 *    1. The constructor for virtual base classeess are invoked befor an non-virtual base class
 *    2. If there are multiple virtual base class, they are invoked in the order declared.
 *    3. Any non-virtual base class are then constructed befor the derived class constructor is executed
 */
