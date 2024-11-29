#include <iostream>

class VectorClass{
pulbic:
	int size;
	int *data;
	VectorClass(){
		size = 10;
		data = new int[size];
		for (int i = 0 ; i < size; i++){
			data[i] = i;
		}
	}
	~VectorClass(){
		delete[] data;
		data = nullptr;
		size = -1;
	}
	public:
	void print_vector(){
		for (int i = 0; i < size; i++){
			cout << data[i] << endl;
		}
	}
};
int main(){
	VectorClass* obj = new VectorClass();
	obj -> print_vector();

	delete obj;
	return 0;
}


