#include <iostream>

struct student {
	int weight;// declaring struct members
	int height;// declaring struct members
	int age; // declaring struct members

}bobby, sarah, james; // struct objects

// func dec
void gettingInfo();
void printingScreen();


int main()
{

	gettingInfo();
	printingScreen();

	system("PAUSE");
	return 0;
}

void gettingInfo() {

	// object 'bobby' 
	bobby.weight = 125;
	bobby.height = 6;
	bobby.age = 14;

	// object 'sarah'
	sarah.weight = 90;
	sarah.height = 5;
	sarah.age = 15;

	// object 'james'
	james.weight = 150;
	james.height = 6;
	james.age = 16;
}

void printingScreen() {

	// printing 'bobby'
	std::cout << "Bobby's weight: " << bobby.weight << std::endl;
	std::cout << "Bobby's height: " << bobby.height << std::endl;
	std::cout << "Bobby's age: " << bobby.age << "\n" << std::endl;

	// printing 'sarah'
	std::cout << "sarah's weight: " << sarah.weight << std::endl;
	std::cout << "sarahs's height: " << sarah.height << std::endl;
	std::cout << "sarah's age: " << sarah.age << "\n" << std::endl;

	// printing 'james'
	std::cout << "james's weight: " << james.weight << std::endl;
	std::cout << "james's height: " << james.height << std::endl;
	std::cout << "james's age: " << james.age << std::endl;
}
