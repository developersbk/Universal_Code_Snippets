A generic stack class

#include <iostream>
#include <new>
#include <string>
#include <sstream>

using namespace std;

#if !defined __STACK_H
#define __STACK_H

namespace stk{
	template<class T>
	class Stack; // Forward declaration of Stack class for overloaded <<
operator

	template<class T>
	ostream& operator<<(ostream &,Stack<T> &); // template declaration of 
<<
operator

	template<class T>
	class Stack{
		private:
			T *p;
			int top,length;

			string str()const;
		public:
			Stack();
			Stack(const int);
			Stack(const Stack<T>&);
			~Stack();

			void push(T);
			T pop();
			int get_length()const;
			bool is_empty()const;
			Stack<T> operator=(const Stack<T>&);

			// only for basic types
			friend ostream& operator<< <>(ostream&,Stack<T> &);

			class StackException{
				private:
					string desc;
				public:
					StackException(string exp){ desc="Exception : "+exp; }
					string get_exp(){ return desc; }
			};
	};

	template<class T>
	Stack<T>::Stack(){
		top=-1;
		length=0;
		p=0;
	}

	template<class T>
	Stack<T>::Stack(const int size){
		top=-1;
		length=size;
		try{
			p=new T[length];
		}catch(bad_alloc ba){
			cout<<"Memory can not be alllocated
";
			return;
		}
	}

	template<class T>
	Stack<T>::Stack(const Stack<T> &o){
		top=o.top;
		length=o.length;
		try{
			p=new T[length];
		}catch(bad_alloc ba){
			cout<<"Memory allocation failed
";
			return;
		}
		for(int i=0;i<length;i++)
			p[i]=o.p[i];
	}

	template<class T>
	Stack<T>::~Stack(){
		if(p!=0)
			delete [] p;
	}

	template<class T>
	void Stack<T>::push(T elem){
		if(p==0){
			try{
				p=new T[1];
			}catch(bad_alloc ba){
				throw StackException("Memory fault
");
			}
			length++;
			top++;
			p[top]=elem;
		}
		else if(top==(length-1)){
			T *q;
			try{
				q=new T[length+1];
			}catch(bad_alloc ba1){
				throw StackException("Memory fault
");
			}
			for(int i=0;i<length;i++)
				q[i]=p[i];
			length++;
			top++;
			q[top]=elem;
			delete [] p;
			p=q;
		}
		else{
			top++;
			p[top]=elem;
		}
	}

	template<class T>
	T Stack<T>::pop(){
		if(p==0 || top==-1){
			throw StackException("Stack empty!
");
		}
		T ret=p[top];
		top--;
		length--;

		if(top==-1){
			delete [] p;
			p=0;
		}
		else{
			T *q;
			try{
				q=new T[length];
			}catch(bad_alloc ba){
				throw StackException("Memory fault
");
			}
			for(int i=0;i<length;i++)
				q[i]=p[i];
			delete [] p;
			p=q;
		}

		return ret;
	}

	template<class T>
	int Stack<T>::get_length()const{
		return length;
	}

	template<class T>
	bool Stack<T>::is_empty()const{
		return ((p==0)? true : false);
	}

	template<class T>
	string Stack<T>::str()const{  // private member function
		if(p==0)
			return string("");
		stringstream ss;
		for(int i=0;i<length;i++){
			ss << p[i];
			if(i!=(length-1))
				ss << ", ";
		}
		//ss<<"
";
		return ss.str();
	}

	template<class T>
	Stack<T> Stack<T>::operator=(const Stack<T> &stk){
		length=stk.length;
		top=stk.top;

		if(p!=0)
			delete [] p;
		try{
			p=new T[length];
		}catch(bad_alloc ba){
			throw StackException("Memory fault in copying!
");
		}
		for(int i=0;i<length;i++)
			p[i]=stk.p[i];

		return *this;
	}

	template<class T>
	ostream& operator<<(ostream &o,Stack<T> &s){
		o<<s.str();
		return o;
	}

} // namespace stk;

#endif
