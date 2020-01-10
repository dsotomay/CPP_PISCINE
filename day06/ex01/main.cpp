#include <iostream>

struct Data { 
	std::string s1;
	int n;
	std::string s2;
};

void * serialize( void ){
	Data *serialized = new Data;
	for (int i = 0; i != 2; i++){
		for(int j = 0; j < 8; j++){
			if (i < 1)
				serialized->s1 += static_cast<char>(arc4random() % 32 + 94 );
			else
				serialized->s2 += static_cast<char>(arc4random() % 32 + 94 );
		}
		if (i < 1)
			serialized->n = arc4random();
	}
std::cout << serialized->s1 << serialized->n << serialized->s2 << std::endl;
return (reinterpret_cast<void*>(serialized));
}

Data * deserialize( void * raw ){
	return (reinterpret_cast<Data*>(raw));
}

int	main(void){
	void *serialized = serialize();
	Data *deserialized = deserialize(serialized);
	std::cout << deserialized->s1 << deserialized->n << deserialized->s2 << std::endl;
}
