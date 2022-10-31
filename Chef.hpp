#ifndef CHEF_HPP
#define CHEF_HPP "CHEF_HPP"
#include "User.hpp"

class Chef :public User {
public:
	Chef(string username, string password,int id);
	~Chef();
	virtual string getUserType() override { return "chef"; }
	void addRecipes(Recipes* recipe);
	void deleteRecipes(string id);
	string getId() override { return sessionId; }
	string getRecipes();
	string getUsername() { return username; }
	vector<Recipes*>getChefRecipes() { return chefRecipes; }
private:
	string sessionId;
	vector<Recipes*>chefRecipes;
};
#endif
