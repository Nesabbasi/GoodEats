#include "Chef.hpp"

Chef::Chef(string username, string password,int id)
	: User(username, password) {
	sessionId = "C" + to_string(id);
}

Chef::~Chef() {
	for (Recipes* chefRecipe : chefRecipes) {
		delete chefRecipe;
	}
}

void Chef::addRecipes(Recipes* recipe) {
	chefRecipes.push_back(recipe);
}

void Chef::deleteRecipes(string id) {
	for (int i = 0; i < chefRecipes.size(); i++) {
		if (to_string(chefRecipes[i]->getId()) == id) {
			chefRecipes.erase(chefRecipes.begin() + i);
			return;
		}
	}
	throw PermissionDeniedEx();
}

string Chef::getRecipes() {
	ostringstream body;
	for (int i = 0; i < chefRecipes.size(); i++) {
		body << "<h6 style = 'color:white;'>Id:  " << chefRecipes[i]->getId() << "</h6>"
			<< "<h6 style = 'color:white;'>Title:  " << chefRecipes[i]->getTitle() << "</h6>"
			<< "<h6 style = 'color:white;'>Vegetarian:  " << chefRecipes[i]->getVegetarian() << "</h6>"
			<< "<h6 style = 'color:white;'>Ingredients:  " << chefRecipes[i]->getIngredients() << "</h6>"
			<< "<h6 style = 'color:white;'>Minutes To Ready:  " << chefRecipes[i]->getMinutesToReady() << "</h6>"
			<< "<h6 style = 'color:white;'>Tags:  " << chefRecipes[i]->getTags() << "</h6>"
			<< "<h6 style = 'color:white;'>Rating:  " << chefRecipes[i]->getFinalRate() << "<br><br></h6>" << endl;
	}
	return body.str();
}