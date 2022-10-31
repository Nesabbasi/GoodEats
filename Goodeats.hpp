#ifndef GOODEATS_HPP
#define GOODEATS_HPP "GOODEATS_HPP"

#include "server\server.hpp"

#include "exceptions.hpp"
#include "User.hpp"
#include "Chef.hpp"
#include "NormalUser.hpp"
#include "Recipes.hpp"

#include <iostream>
#include <exception>

class Goodeats {
public:
	void runProgram();
	User* signup(std::string username, std::string password, std::string type);
	void checkForAvaibleUser(std::string username);
	User* findUserByUsername(std::string username);
	User* findUserById(std::string id);
	User* login(std::string username, std::string password);
	void AddRecipe(std::string id, std::string title, std::string vegetarian,
		std::string minutesToReady, std::string ingredients, std::string tags, std::string imageAddress);
	void deleteChefRecipe(std::string id, std::string deleteRecipeId);
	User* searchForRecipes(std::string id);
	string printRecipes();
	string printRecipesInfo(std::string id);
	Recipes* findRecipe(std::string id);
	void addShelves(std::string shelfName, User* user);
private:
	int userId = 1;
	int chefId = 1;
	int recipesId = 1;
	int shelvesId = 1;
	vector<User*> users;
	vector<Recipes*> recipes;
};

#endif