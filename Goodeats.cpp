#include "Goodeats.hpp"
#include "Handler.hpp"

void Goodeats::runProgram() {
	Server server(5000);
	server.get("/", new ShowPage("static/Signup.html"));
	server.get("/Goodeats.png", new ShowImage("static/Goodeats.png"));
	server.get("/Signup", new ShowPage("static/Signup.html"));
	server.post("/Signup", new SignupHandler(this));
	server.get("/Login", new ShowPage("static/Login.html"));
	server.post("/Login", new LoginHandler(this));
	server.get("/UserHome", new ShowPage("static/NormalUserHome.html"));
	server.get("/ChefHome", new ChefHomeHandler(this));
	server.get("/BadRequest", new BadRequest(this));
	server.get("/PermissionDenied", new PermissionDenied(this));
	server.get("/NotFound", new ShowPage("static/NotFound.html"));
	server.get("/Logout", new LogoutHandler(this));
	server.get("/RecipeTitle", new RecipeHandler(this));
	server.get("/ShelvesTitle", new ShelvesHandler(this));
	server.get("/AddRecipe", new ShowPage("static/AddRecipe.html"));
	server.post("/AddRecipe", new AddRecipeHandler(this));
	server.get("/DeleteRecipe", new ShowPage("static/DeleteRecipe.html"));
	server.post("/DeleteRecipe", new DeleteRecipeHandler(this));
	server.get("/SuccessfullyAdded", new SuccessfullyAdded(this));
	server.get("/SuccessfullyDeleted", new SuccessfullyDeleted(this));
	server.get("/SuccessfullyRated", new ShowPage("static/SuccessfullyRated.html"));
	server.get("/RecipeInfo", new RecipeInfoHandler(this));
	server.get("/Rate", new RatingHandler(this));
	server.get("/ShelfInfo", new ShelfInfoHandler(this));
	server.get("/AddShelf", new ShowPage("static/AddShelf.html"));
	server.post("/AddShelf", new AddShelfHandler(this));
	server.get("/AddOrDeleteRecipe", new AddOrDeleteRecipe(this));
	server.post("/AddRecipeToshelf", new AddRecipeToshelf(this));
	server.post("/DeleteRecipeFromshelf", new DeleteRecipeFromshelf(this));
	server.get("/RecipeCompeleteInfo", new RecipeCompeleteInfo(this));
	server.run();
}

void Goodeats::addShelves(std::string shelfName, User* user) {
	Shelves* temp = new Shelves(shelfName, shelvesId++);
	for (User* normalUser : users) {
		if (normalUser->getUsername() == user->getUsername())
			dynamic_cast<NormalUser*>(user)->addShelves(temp);
	}
}

Recipes* Goodeats::findRecipe(std::string id) {
	for (int i = 0; i < recipes.size(); i++) {
		if (to_string(recipes[i]->getId()) == id)
			return recipes[i];
	}
	return nullptr;
}

string Goodeats::printRecipesInfo(std::string id) {
	ostringstream body;
	for (int i = 0; i < recipes.size(); i++) {
		if (to_string(recipes[i]->getId()) == id) {
			body << "<h6 style = 'color:white;'>Id:  " << recipes[i]->getId() << "</h6>"
				<< "<h6 style = 'color:white;'>Title:  " << recipes[i]->getTitle() << "</h6>"
				<< "<h6 style = 'color:white;'>Vegetarian:  " << recipes[i]->getVegetarian() << "</h6>"
				<< "<h6 style = 'color:white;'>Ingredients:  " << recipes[i]->getIngredients() << "</h6>"
				<< "<h6 style = 'color:white;'>Minutes To Ready:  " << recipes[i]->getMinutesToReady() << "</h6>"
				<< "<h6 style = 'color:white;'>Tags:  " << recipes[i]->getTags() << "</h6>"
				<< "<h6 style = 'color:white;'>Rating:  " << recipes[i]->getFinalRate() << "</h6><br><br>"
				<< "<img src='" << recipes[i]->getImageAddress() << "'alt='Food'><br>" << endl;;
		}
	}
	return body.str();
}

string Goodeats::printRecipes() {
	ostringstream body;
	for (int i = 0; i < recipes.size(); i++) {
		body << "<h6 style = 'color:white;'>Id:  " << "<a href='/RecipeInfo?id=" << recipes[i]->getId() << "'>" << recipes[i]->getId() << "</h6></a>"
			<< "<h6 style = 'color:white;'>Title:  " << recipes[i]->getTitle() << "</h6>"
			<< "<h6 style = 'color:white;'>Vegetarian:  " << recipes[i]->getVegetarian() << "</h6>"
			<< "<h6 style = 'color:white;'>Minutes To Ready:  " << recipes[i]->getMinutesToReady() << "<br><br></h6>" << endl;
	}
	
	return body.str();
}

User* Goodeats::searchForRecipes(std::string id) {
	for (User* user : users) {
		if (user->getId() == id)
			return user;
	}
}

void Goodeats::deleteChefRecipe(std::string id, std::string deleteRecipeId) {
	for (User* user : users) {
		if (user->getId() == id)
			dynamic_cast<Chef*>(user)->deleteRecipes(deleteRecipeId);
	}
	for (int i = 0; i < recipes.size(); i++) {
		if (to_string(recipes[i]->getId()) == deleteRecipeId) {
			recipes.erase(recipes.begin() + i);
		}
	}
}

void Goodeats::AddRecipe(std::string id, std::string title, std::string vegetarian,
	std::string minutesToReady, std::string ingredients, std::string tags, std::string imageAddress) {
	Recipes* recipe = new Recipes(title, ingredients,
		vegetarian, minutesToReady, tags, imageAddress, recipesId++);
	recipes.push_back(recipe);
	for (User* user : users) {
		if(user->getId() == id)
			dynamic_cast<Chef*>(user)->addRecipes(recipe);
	}
}

User* Goodeats::findUserById(std::string id) {
	for (User* user : users) {
		if (user->getId() == id)
			return user;
	}
	return nullptr;
}

User* Goodeats::findUserByUsername(std::string username) {
	for (User* user : users) {
		if (user->getUsername() == username)
			return user;
	}
	return nullptr;
}

void Goodeats::checkForAvaibleUser(std::string username) {
	User* userByUsername = findUserByUsername(username);
	if (userByUsername != nullptr) {
		throw BadRequestEx();
	}
}

User* Goodeats::signup(std::string username, std::string password, std::string type) {
	if (username == "" || password == "")
		throw BadRequestEx();
	checkForAvaibleUser(username);
	User* user;
	if (type == "user") 
		user = new NormalUser(username, password,userId++);
	else 
		user = new Chef(username, password,chefId++);
	users.push_back(user);
	return user;
}

User* Goodeats::login(std::string username, std::string password) {
	User *user = findUserByUsername(username);
	if (user == nullptr)
		throw BadRequestEx();
	if (user->getPassword() != password)
		throw BadRequestEx();
	return user;
}
