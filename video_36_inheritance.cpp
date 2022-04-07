1. Reusablity is very important feature of OOPs.
How ?
Explaination : 
If thier is a class named as Employee. Which consist all the element regarding an Employee.

Then If we want a Programmer class, whi is also an Employeee. Then there is no need to rewrite the
Employee class again and again. because it Against the DRY principle. Dont Repeat Your Self.


2. In c++ we can reuse a class and add additional feature to it.
3. Reusing class save time and Money.
4. Reuseing already tested and debbug class will save a lot of effort of developing and debugging the same thing again.
5. The concept of reuseablity in C++ is supported using inheritance.
6. We can reuse the properties of an existing class by inheriting from it.
7. The existing class is called Base class.
8. The New class which is inherited is class as the derived class.
9. Reusng class saves time and Money.
10. There are different type of inheritance in C++;


Example : 

Class Employee   (Base Class)
Class Assistence (Base Class)
Class Programmer  (Derived Class)

Type of Inheriatnce.

1. Single Inheritance.
2. Multiple Inheritance.
3. Hierarchical Inheritance.
4. MultiLevel INheritance
5. Hybrid InHeritance.


Single Inheritance :- 
1. A derived class with one base class B.

      Class A
	|
	|
	down
	|
     Class B


2. Class A is BASE and Class C is BASE and Class C is Derived Class then the Mupltiple Inheriatnce.

     Class A	Class C
       |           |
       down	  down 
       |	   |
	   Class B


3. Herierical Inheritance Class B is Base and Class A and Class C is Derived class

	Class B


	|	|
	|	|	
	|	|
	|	down
	down	|
	|	|
	|	class C
	|
	class A

4. Muptilevel Inheritance 
Class A is BAse Class for Class B
Class B is BAse Class for Class C
Class C is Derived class




	Class A
	   |
	   |
	   |
	   |
	   down
	    |
	    |
	    |
	    Class B
	       |
	       |
	      down
	       |
	     Class C



5. Hybrid Inheritance = Multiple Inheritance + MultiLeve Inheritance
   A class is derived from two as in multiple INheritance


   			Class A
			   |
			   |
			   |
			  down
			    |
			    |
		Class B 	Class C

			    |
			    |
			    |
			    down
			    |
			    |
			  Class D



Class A = Animal
Class B = Mamal
Class C =  Bird
Class D = Bird.









