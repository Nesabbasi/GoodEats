#ifndef USER_HPP
#define USER_HPP "USER_HPP"

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <exception>
using namespace std;

#include "Shelves.hpp"
#include "Rating.hpp"

class Recipes;
class User {
public:
	User(string username_, string password_);
	string getUsername() { return username; }
	string getPassword() { return password; }
	virtual string getUserType() = 0;
	virtual string getId() = 0;
protected:
	string username;
	string password;
};
#endif
