#ifndef RATING_HPP
#define RATING_HPP "RATING_HPP"

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include<fstream>
#include <exception>
using namespace std;

#include "exceptions.hpp"
class User;

class Rating {
public:
	Rating(int score_, User *user_);
	int getScore() { return score; }
	User* getUsers() { return users; };
private:
	int score = -1;
	User* users;
};

#endif 
