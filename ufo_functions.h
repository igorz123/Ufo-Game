#ifndef UFO_FUNCTIONS_H_INCLUDED
#define UFO_FUNCTIONS_H_INCLUDED
#include <vector>
void display_misses(int misses);
void greet();
void display_status(std::vector<char> incorrect, std::string answer);
void end_game(std::string answer, std::string codeword);



#endif // UFO_FUNCTIONS_H_INCLUDED
