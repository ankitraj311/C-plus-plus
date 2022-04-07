#include<iostream>
using namespace std;

class A
{

};



class B : virtual public A
{

};

class C : virtual public A
{

};


class D : public B, public C
{

};


int main()
{



}



/*
 * Virtual Base class, we use when multiple copy of a varible we are having in out class.
 * likee
 *                  
 *
 *
 *                                    Class A ( having a varibale val)
 *                                                  |
 *                                                  |
 *                                                  |
 *                                                  |
 *                                                  |
 *                                --------------------------------------
 *                                |					|
 *                                |					|
 *                                |					|
 *                                |					|
 *                                |					|
 *			Class B ( ingerted class A having val)  Class C (inherited class A having val)
 *				  |					|
 *				  |                                     |
 *				  |                                     |
 *				  |					|
 *				  ---------------------------------------
 *				                     |
 *				                     |
 *					             |
 *						     |			
 *						Class D
 *
 *
 *Class A  ---> Class B
 *Class A  ---> Class C
 *Class B and Class C se Class D Bani hui hai.
 * to Asse scenario mai Class D k pass variale val, jo class A se inherite hui hai vo 
 * do do bar aa jayga.
 * Iss chezze ko resolve krne k liye Virtual Base Class Aati hai.
 * Jo ye dhtyan rakhti hai k at a time Ek val hi inherite hi
 */

