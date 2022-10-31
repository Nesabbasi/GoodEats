#include "NormalUser.hpp"

NormalUser::NormalUser(string username, string password,int id)
	:User(username, password) {
	sessionId = "U" + to_string(id);
}

NormalUser::~NormalUser() {
	for (Shelves* shelve : shelves) {
		delete shelve;
	}
}

void NormalUser::addShelves(Shelves *shelve) {
	shelves.push_back(shelve);
}

string NormalUser::printShelves() {
	ostringstream body;
	for (int i = 0; i < shelves.size(); i++) {
		body << "<h6 style = 'color:white;'>Id:  "<< "<a href='/ShelfInfo?id=" << shelves[i]->getId() << "'>" << shelves[i]->getId() << "</h6></a>"
			<< "<h6 style = 'color:white;'>Title:  " << shelves[i]->getName() << "<br></h6>" << endl;
	}
	return body.str();
}

string NormalUser::printShelfInfo(string id) {
	ostringstream body;
	for (int i = 0; i < shelves.size(); i++) {
		if (to_string(shelves[i]->getId()) == id) {
			body << "<h4 style = 'color:white;'>Id:  " << shelves[i]->getId() << endl
				<< "Title:  " << shelves[i]->getName() << "<br></h4>" << endl
				<< shelves[i]->printShelfRecipes() << endl;
		}
	}
	return body.str();
}

void NormalUser::findShelves(string shelveId, string recipeId, Recipes* recipe) {
	for (int i = 0; i < shelves.size(); i++) {
		if (to_string(shelves[i]->getId()) == shelveId) {
			shelves[i]->putRecipesInShelves(recipeId, recipe);
			return;
		}
	}
	throw PermissionDeniedEx();
}

void NormalUser::searchInShelves(string shelveId, string recipeId) {
	for (int i = 0; i < shelves.size(); i++) {
		if (to_string(shelves[i]->getId()) == shelveId) {
			shelves[i]->deleteRecipeFromShelves(recipeId);
			return;
		}
	}
	throw BadRequestEx();
}