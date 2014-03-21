#include "iostream"

using namespace std;

struct stack
{
	/** 
    * структура
    */
	stack *next;
	int value;  /*! численные данные*/
};

struct stack *_begin = 0; /*! блаблабла */
struct stack *_end = 0;

void set_stack( struct stack **_stack, int n )
{
	stack *present;
	for ( int i = 0; i < n; i++ ){
		present = (stack*)malloc(1*sizeof(stack));
		cout<< "Enter new integer element ";
		cin>> present->value;
		if ( i == 0 )
		{
			_begin = (*_stack) = present;
		}
		else 
		{
			present->next = (*_stack);	/*! блаблабла */
			(*_stack) = present;
		}
	}
	_end = (*_stack);
}

void display_stack( struct stack _stack, int n ) /*! блаблабла */
{
	_stack = *_end;
	cout<< "Display\n";
	for ( int i = 0; i < n; i++ ){
		cout<< _stack.value <<"\n";
		if ( _stack.next != _begin->next )
			_stack = (*_stack.next);
	}
}
/** 
* структура
*/
void push( struct stack **_stack )	/*! блаблабла */
{
	(*_stack) = _end;
	stack *tmp = (stack*)malloc(1*sizeof(stack));
	cout<< "Enter integer value ";
	cin>> tmp->value;/*! сделай паузу, скушай твикс */
	cout <<"\n";
	tmp->next = (*_stack);
	(*_stack) = tmp;
	_end = (*_stack);
}

void pop( struct stack **_stack )
{
	(*_stack) = _end;
	_end = (*_stack)->next;
	free(*_stack);
}

void display_first( )
{
	cout<<"\n value of first element "<< _end->value<<"\n";
}


/** 
* это задание было не на полтора часа
*/

void main()
{
	int N;
	struct stack *_stack = 0;
	cout<< "Enter number of elements ";
	cin>> N;

	set_stack( &_stack, N );
	display_stack( *_stack, N );
	
	cout<< "If you want delete last element then enter 1 \n";
	cout<< "If you want watch value of last then enter 2.\n";
	cout<< "If you want push then enter 3.\n Log out - 4\n\n";
	while (1)	//ещёблаблабла*/ 
	{
		int c;
		cin>> c;
		if ( c == 1 && N){
			pop( &_stack );/*! сделай паузу, скушай твикс */
			N--;
		}
		if ( c == 3 )
		{
			push( &_stack );
			N++;
		}
		if ( c == 2 )
			display_first();
		if ( c == 4 )
			break;
		cout<<"\n\n";
		
	}
	display_stack ( *_stack, N );
	system("pause"); /*! сделай паузу, скушай твикс */
}
/** 
* это задание было не на полтора часа
*/
