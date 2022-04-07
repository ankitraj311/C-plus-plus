/////Templetes
//Classs se Objecte banti hai
//Class object k liye Templete hai
//Templet se class bianti hai 
//Jo class k liye templet hai vo templet hai.
//

//Why to use templet.
//to follow dry principle, generic programming 
//Let we make a class named as Vector.
//
//class vector{
//
//int *arr;
//int size;
//	public:
//
//	}
//
//Let use suppose we want a class which have interger, float, decim and soo on.
//Then we have to make numberous number of class, which break the dry principle
//
// TO bahut sari class bnani na pade usle liye hum, ek templet bnayge, jisme likha hoga k interger k liye run kro, ab float k loye kro class..
// means class ek hogi but vo behave ass krgi jaise independent class hoooo....
//
// Templets also known as Parametrize classess. (Class with paramter)
//

//Q : How to define templetes.
// Syntax :
// 
// template <class T> //T can be int, float, char
// class vector
// {
// 	T * arr;
// 	public:
// 		vector(T *arr)
// 			{
//
// 				//code
// 			}
//
// 			//many other methods
// }
//
// int main()
// {
//
// vector <int>   myvec(ptr);
// vector <float> myfvec(ptr);
//
// }
