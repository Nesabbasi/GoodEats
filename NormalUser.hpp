#ifndef NormalUser_HPP
#define NormalUser_HPP "NormalUser_HPP"
#include "User.hpp"

class NormalUser :public User {
public:
	NormalUser(string username, string password,int id);

	string getId() override { return sessionId; }
	virtual string getUserType() override { return "user"; }
	~NormalUser();
	void addShelves(Shelves *shelve);
	string printShelves();
	string printShelfInfo(string id);
	void findShelves(string shelveId, string recipeId, Recipes* temp);
	void searchInShelves(string shelveId, string recipeId);

private:
	string sessionId;
	vector<Shelves*>shelves;
};

#endif