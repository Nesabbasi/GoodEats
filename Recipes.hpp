#ifndef RECIPES_HPP
#define RECIPES_HPP "RECIPES_HPP"

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include <exception>
#include <algorithm>
#include <iomanip>
using namespace std;

#include "exceptions.hpp"
#include "Rating.hpp"

class User;
class Recipes {
public:
	Recipes(string title_, string ingredients_, string vegetarian_,
		string minutes_, string tags_, string imageAddress_, int id_);
	~Recipes();
	int getId() {
		int x;
		return id; 
	}
	string getTitle() { return title; }
	string getIngredients() { return ingredients; }
	string getVegetarian() { return vegetarian; }
	string getMinutesToReady() { return minutesToReady; }
	string getTags() { return tags; }
	string getImageAddress() { return imageAddress; }
	void getScore(string score, User *user);
	float calculateRatings();
	void finalRating(float rate);
	float getFinalRate() { return finalRate; }
	vector<Rating*>getRating() { return rating; }
private:
	string title;
	string ingredients;
	string vegetarian;
	string minutesToReady;
	string tags;
	vector<Rating*>rating;
	string imageAddress;
	int id;
	float finalRate;
};
#endif