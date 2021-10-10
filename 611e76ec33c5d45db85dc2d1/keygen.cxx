#include <iostream>
#include <string>

int main(int argc, char** argv) {
				int len = std::stoi(argv[1]);
				char str[len];

				for (int i = 0; i < len - 2; i++) {
								//str[i] = static_cast<char>(48);
								std::cout << static_cast<char>(48);
				}
				std::cout << static_cast<char>(95);
				std::cout << static_cast<char>(88);
				//str[len - 3] = static_cast<char>(95);
				//str[len - 2] = static_cast<char>(88);
				//str[len - 1] = 0;
				//std::cout << std::string{str} << std::endl;
				return 0;
}
