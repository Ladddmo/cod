#include <iostream>
using namespace std;

class TMyIntVector{
public:
	TMyIntVector(size_t _capacity)
		: _capacity(_capacity)
		, _size(0)
		{        
			_first_elem = new int[_capacity];
		
			
			
			
		}
	
		
		
		
		
			
	
	TMyIntVector(TMyIntVector& rhs) = delete;
	TMyIntVector(TMyIntVector&& rhs) = delete;
	TMyIntVector& operator=(TMyIntVector& rhs) = delete; 
	~TMyIntVector(){
	 delete[] -first_elem;
		
	}

	void push_back(){
		
	}
	
private:	
	int* _first_elem;
	size_t _size;
	size_t _capacity;
	
};


int main(){
	int a;
	int* b = new int;
	vector<int> vec(4);
	vec.push_back(1);
	vec.push_back(2);
	
	cout << "size:" << vec.size() << end1;






}
