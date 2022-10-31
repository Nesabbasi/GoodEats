#include "Shelves.hpp"

Shelves::Shelves(string name_, int id_) {
	name = name_;
	id = id_;
}

Shelves::~Shelves() {
	for (Recipes* shelvesRecipe : recipesInShelves)
		delete shelvesRecipe;
}

void Shelves::putRecipesInShelves(string recipeId, Recipes* recipe) {
	for (int i = 0; i < recipesInShelves.size(); i++) {
		if (to_string(recipesInShelves[i]->getId()) == recipeId)
			throw BadRequestEx();
	}
	recipesInShelves.push_back(recipe);
}

void Shelves::deleteRecipeFromShelves(string recipeId) {
	for (int i = 0; i < recipesInShelves.size(); i++) {
		if (to_string(recipesInShelves[i]->getId()) == recipeId) {
			recipesInShelves.erase(recipesInShelves.begin() + i);
			return;
		}
	}
	throw BadRequestEx();
}

string Shelves::printShelfRecipes() {
	ostringstream body;
	for (Recipes* recipe : recipesInShelves) {
		body << "<h6 style = 'color:white;'>Id:  " << "<a href='/RecipeCompeleteInfo?id=" << recipe->getId() << "'>" << recipe->getId() << "</h6></a>"
			<< "<h6 style = 'color:white;'>Title:  " << recipe->getTitle() << "</h6>"
			<< "<h6 style = 'color:white;'>Vegetarian:  " << recipe->getVegetarian() << "</h6>"
			<< "<h6 style = 'color:white;'>Minutes To Ready:  " << recipe->getMinutesToReady() << "<br></h6>" << endl;
	}
	return body.str();
}