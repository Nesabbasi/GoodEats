#ifndef SHELVES_HPP
#define SHELVES_HPP "SHELVES_HPP"

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include <exception>
#include <algorithm>
using namespace std;

#include "Recipes.hpp"

class Shelves {
public:
	Shelves(string name_, int id_);
	~Shelves();
	string getName() { return name; }
	int getId() { return id; }
	void putRecipesInShelves(string recipeId, Recipes* recipe);
	string printShelfRecipes();
	void deleteRecipeFromShelves(string recipeId);
private:
	string name;
	int id;
	vector<Recipes*>recipesInShelves;
};
#endif 
