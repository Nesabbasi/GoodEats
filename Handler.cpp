#include "Handler.hpp"
#include "Goodeats.hpp"

Response* SuccessfullyAdded::callback(Request *req) {
	Response *res = new Response;
	res->setHeader("Content-Type", "text/html");
	string id = req->getSessionId();
	ostringstream body;
	body << "<!DOCTYPE html>" << endl
		<< "<html>" << endl
		<< "<title>" << "Successfull" << "</title>" << endl
		<< "<style>" << "body{" << endl << "background-image: url('Goodeats.png');" << endl << "}" << endl
		<< "</style>" << endl << "</head>" << endl
		<< "<link rel='stylesheet' href='https://www.w3schools.com/w3css/4/w3.css'>" << endl
		<< "<body>" << endl << "<div class='w3-panel w3-border-left w3-pale-gray' style='position:absolute; left: 150px;; top:250px;'>" << endl
		<< "<h1 style='color:white; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "Successfully Added</h1>" << "</div>" << "</body>" << endl
		<< " <div style='position:absolute; left:1230px; top:600px; background-color:LightGray; border-radius: 4px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl;
	if (id[0] == 'U') {
		body << "<a href='/ShelvesTitle'>back</a>" << endl << "</div>" << endl << "</html>" << endl;
	}
	else if (id[0] == 'C') {
		body<< "<a href='/ChefHome'>back</a>" << endl << "</div>" << endl << "</html>" << endl;
	}
	res->setBody(body.str());
	return res;
}

Response* SuccessfullyDeleted::callback(Request *req) {
	Response *res = new Response;
	res->setHeader("Content-Type", "text/html");
	string id = req->getSessionId();
	ostringstream body;
	body << "<!DOCTYPE html>" << endl
		<< "<html>" << endl
		<< "<title>" << "Deleted" << "</title>" << endl
		<< "<style>" << "body{" << endl << "background-image: url('Goodeats.png');" << endl << "}" << endl
		<< "</style>" << endl << "</head>" << endl
		<< "<link rel='stylesheet' href='https://www.w3schools.com/w3css/4/w3.css'>" << endl
		<< "<body>" << endl << "<div class='w3-panel w3-border-left w3-pale-gray' style='position:absolute; left: 150px;; top:250px;'>" << endl
		<< "<h1 style='color:white; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "Successfully Deleted</h1>" << "</div>" << "</body>" << endl 
		<< " <div style='position:absolute; left:1230px; top:600px; background-color:LightGray; border-radius: 4px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl;
	if (id[0] == 'U') {
		body << "<a href='/ShelvesTitle'>back</a>" << endl << "</div>" << endl << "</html>" << endl;
	}
	else if (id[0] == 'C') {
		body << "<a href='/ChefHome'>back</a>" << endl << "</div>" << endl << "</html>" << endl;
	}
	res->setBody(body.str());
	return res;
}

Response* PermissionDenied::callback(Request *req) {
	Response *res = new Response;
	res->setHeader("Content-Type", "text/html");
	string id = req->getSessionId();
	ostringstream body;
	body << "<!DOCTYPE html>" << endl
		<< "<html>" << endl
		<< "<title>" << "Successfull" << "</title>" << endl
		<< "<style>" << "body{" << endl << "background-image: url('Goodeats.png');" << endl << "}" << endl
		<< "</style>" << endl << "</head>" << endl
		<< "<link rel='stylesheet' href='https://www.w3schools.com/w3css/4/w3.css'>" << endl
		<< "<body>" << endl << "<div class='w3-panel w3-border-left w3-pale-gray' style='position:absolute; left: 150px;; top:250px;'>" << endl 
		<< "<h1 style='color:white; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'" << endl
		<< "PermissionDenied</h1>" << "</div>" << "</body>" << endl
		<< " <div style='position:absolute; left:1230px; top:600px; background-color:LightGray; border-radius: 4px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl;
	if (id[0] == 'U') {
		body << "<a href='/ShelvesTitle'>back</a>" << endl << "</div>" << endl << "</html>" << endl;
	}
	else if (id[0] == 'C') {
		body << "<a href='/DeleteRecipe'>back</a>" << endl << "</div>" << endl << "</html>" << endl;
	}
	res->setBody(body.str());
	return res;
}

Response* BadRequest::callback(Request *req) {
	Response *res = new Response;
	res->setHeader("Content-Type", "text/html");
	string id = req->getSessionId();
	ostringstream body;
	body << "<!DOCTYPE html>" << endl
		<< "<html>" << endl
		<< "<title>" << "BadRequest" << "</title>" << endl
		<< "<style>" << "body{" << endl << "background-image: url('Goodeats.png');" << endl << "}" << endl
		<< "</style>" << endl << "</head>" << endl
		<< "<link rel='stylesheet' href='https://www.w3schools.com/w3css/4/w3.css'>" << endl
		<< "<body>" << endl << "<div class='w3-panel w3-border-left w3-pale-gray' style='position:absolute; left: 150px;; top:250px;'>" << endl 
		<< "<h1 style='color:white; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "Bad Request</h1>" << "</div>" << "</body>" << endl
		<< " <div style='position:absolute; left:1230px; top:600px; background-color:LightGray; border-radius: 4px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl;
	if (id[0] == 'U') {
		body << "<a href='/ShelvesTitle'>back</a>" << endl << "</div>" << endl << "</html>" << endl;
	}
	else if (id[0] == 'C') {
		body << "<a href='/DeleteRecipe'>back</a>" << endl << "</div>" << endl << "</html>" << endl;
	}
	else {
		body << "<a href='/Login'>back</a>" << endl << "</div>" << endl << "</html>" << endl;
	}
	res->setBody(body.str());
	return res;
}

Response* SignupHandler::callback(Request *req) {
	Response *res=new Response;
	std::string username = req->getBodyParam("sUsername");
	std::string password = req->getBodyParam("sPword");
	std::string userType = req->getBodyParam("userType");
	try {
		User* user = goodeats->signup(username, password, userType);
		if (userType == "user") {
			res = Response::redirect("/UserHome");
			res->setSessionId(user->getId());
		}
		else if(userType == "chef") {
			res = Response::redirect("/ChefHome");
			res->setSessionId(user->getId());
		}
	}
	catch(exception& e){
		res = Response::redirect("/BadRequest");
	}
	return res;
}

Response* LoginHandler::callback(Request *req) {
	Response *res=new Response; string id;
	std::string username = req->getBodyParam("lUsername");
	std::string password = req->getBodyParam("lPword");
	try {
		User* user = goodeats->login(username, password);
		std::string userType = user->getUserType();
		if (userType == "user") {
			res = Response::redirect("/UserHome");
			res->setSessionId(user->getId());
			id = req->getSessionId();
		}
		else if (userType == "chef") {
			res = Response::redirect("/ChefHome");
			res->setSessionId(user->getId());
			id = req->getSessionId();
		}
	}
	catch (exception& e) {
		res = Response::redirect("/BadRequest");
	}
	return res;
}

Response* LogoutHandler::callback(Request *req) {
	Response *res = new Response;
	res = Response::redirect("/Login");
	res->setSessionId("");
	return res;
}

Response* UserHomeHandler::callback(Request *req) {
	Response *res = new Response;
	return res;
}

Response* ChefHomeHandler::callback(Request* req) {
	Response *res = new Response;
	res->setHeader("Content-Type", "text/html");
	string id = req->getSessionId();
	User* user = goodeats->searchForRecipes(id);
	ostringstream body;
	body << "<!DOCTYPE html>" << endl
		<< "<html>" << endl
		<< "<title>" << "Chef Home" << "</title>" << endl
		<< "<style>" << "body{" << endl << "background-image: url('Goodeats.png');" << endl << "}" << endl
		<< "</style>" << endl << "</head>" << endl
		<< "<meta name='viewport' content='width=device-width, initial-scale=1'>" << endl
		<< "<link rel='stylesheet' href='https://www.w3schools.com/w3css/4/w3.css'>" << endl
		<< "<body>" << endl
		<< "<form action='ChefHome' method='GET'>" << endl
		<< "<div style='position:absolute; left:110px; top:50px; font-family:'Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "<h1 style='color:white;'>Recipes</h1>" << endl << "</div>" << endl
		<< "<div class='w3-panel w3-border-left w3-pale-gray' style='position:absolute; color:white; left:110px; top:90px; font-family:'Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< dynamic_cast<Chef*>(user)->getRecipes()
		<< "<p style='color:white;'>Do you want to Add or Delete recipe? <a href='/AddRecipe'>Add</a>  <a href='/DeleteRecipe'>Delete</a></p>" << endl
		<< "</div>"<<endl<< "</form>" << endl
		<< "<div style='position:absolute; left:1230px; top:600px; background-color:LightGray; border-radius: 4px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "<a href = '/Logout'>Logout</a>" << endl << "</div>" << endl << "</body>" << endl << "</html>" << endl;
	res->setBody(body.str());
	return res;
}

Response* AddRecipeHandler::callback(Request* req) {
	Response *res = new Response; 
	std::string title = req->getBodyParam("title");
	std::string vegetarian = req->getBodyParam("vegetarian");
	std::string minutesToReady = req->getBodyParam("time");
	std::string ingredients = req->getBodyParam("ingredients");
	std::string tags = req->getBodyParam("tags");
	std::string image = req->getBodyParam("image");
	string id = req->getSessionId();
	goodeats->AddRecipe(id, title, vegetarian, minutesToReady, ingredients, tags, image);
	res = Response::redirect("/SuccessfullyAdded");
	return res;
}

Response* DeleteRecipeHandler::callback(Request* req) {
	Response *res = new Response;
	std::string deleteId = req->getBodyParam("Delete");
	string id = req->getSessionId();
	try {
		goodeats->deleteChefRecipe(id, deleteId);
		res = Response::redirect("/SuccessfullyDeleted");
	}
	catch (exception& e) {
		res = Response::redirect("/PermissionDenied");
	}
	return res;
}

Response* RecipeHandler::callback(Request* req) {
	Response *res = new Response;
	res->setHeader("Content-Type", "text/html");
	string id = req->getSessionId();
	ostringstream body;
	body << "<!DOCTYPE html>" << endl
		<< "<html>" << endl
		<< "<title>" << "Recipe Information" << "</title>" << endl
		<< "<style>" << "body{" << endl << "background-image: url('Goodeats.png');" << endl << "}" << endl
		<< "</style>" << endl << "</head>" << endl
		<< "<meta name='viewport' content='width=device-width, initial-scale=1'>" << endl
		<< "<link rel='stylesheet' href='https://www.w3schools.com/w3css/4/w3.css'>" << endl
		<< "<body>" << endl << "<div style='position:absolute; left:110px; top:50px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "<h1 style = 'color:white;'>Recipes</h1>" << endl << "</div>" << endl
		<< "<div style='position:absolute; left:1190px; top:600px; background-color:LightGray; border-radius: 4px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "<a href='/UserHome'>back</a>" << endl << "</div>" << endl
		<< "<div style='position:absolute; left:1230px; top:600px; background-color:LightGray; border-radius: 4px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "<a href='/Logout'>Logout</a>" << endl << "</div>" << endl
		<< "<div class='w3-panel w3-border-left w3-pale-gray' style = 'position:absolute; color:white; left:110px; top:100px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< goodeats->printRecipes() << endl << "</body>" << endl << "</html>" << endl;
	res->setBody(body.str());
	return res;
}

Response *RecipeInfoHandler::callback(Request* req) {
	Response *res = new Response;
	res->setHeader("Content-Type", "text/html");
	std::string id = req->getQueryParam("id");
	ostringstream body;
	body << "<!DOCTYPE html>" << endl
		<< "<html>" << endl
		<< "<title>" << "Recipe Information" << "</title>" << endl
		<< "<style>" << "body{" << endl << "background-image: url('Goodeats.png');" << endl << "}" << endl
		<< "</style>" << endl << "</head>" << endl
		<< "<meta name='viewport' content='width=device-width, initial-scale=1'>" << endl
		<< "<link rel='stylesheet' href='https://www.w3schools.com/w3css/4/w3.css'>" << endl
		<< "<body>" << endl
		<< "<div style='position:absolute; left:110px; top:50px; font-family:'Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "<h1 style='color:white;'>Information</h1>" << endl << "</div>" << endl
		<< "<div class='w3-panel w3-border-left w3-pale-gray' style='position:absolute; color:white; left:110px; top:90px; font-family:'Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< goodeats->printRecipesInfo(id) << "</div>" << endl
		<< "<div style='position:absolute; left:1190px; top:600px; background-color:LightGray; border-radius: 4px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "<a href='/UserHome'>back</a>" << endl << "</div>" << endl
		<< "<div style='position:absolute; left:1230px; top:600px; background-color:LightGray; border-radius: 4px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "<a href='/Logout'>Logout</a>" << endl << "</div>" << endl
		<< "<form action='Rate'>" << endl
		<< "<div style='position:absolute; left:125px; top:360px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>"<<endl
		<< "<label style='color:white; font-size:medium' for='rate'>rate:</label><br>"<<endl<<"</div>"<<endl
		<< "<input type='hidden' name='RecipeId' value='" << id << "'>" << endl
		<< "<div style='position:absolute; font-size:small; left:170px; top:362px;'>" << endl
		<< "<input type='text' id='Rate' name='Rate' placeholder='Enter rate'><br>" << "</div>" << endl
		<< "<div style='position:absolute; left:370px; top:362px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "<input type='submit' value='Rate' style='font-size:small; background-color:LightGray; border-radius: 4px;'>" << endl << "</form>" << endl << "</body>" << endl << "</html>" << endl;
	res->setBody(body.str());
	return res;
}

Response *RatingHandler::callback(Request* req) {
	Response *res = new Response;
	std::string rate = req->getQueryParam("Rate");
	std::string id = req->getQueryParam("RecipeId");
	Recipes *recipe = goodeats->findRecipe(id);
	User* user = goodeats->findUserById(req->getSessionId());
	recipe->getScore(rate, user);
	res = Response::redirect("/SuccessfullyRated");
	return res;
}

Response *ShelfInfoHandler::callback(Request* req) {
	Response *res = new Response;
	res->setHeader("Content-Type", "text/html");
	std::string id = req->getQueryParam("id");
	User* user = goodeats->findUserById(req->getSessionId());
	ostringstream body;
	body << "<!DOCTYPE html>" << endl
		<< "<html>" << endl
		<< "<title>" << "Shelf Information" << "</title>" << endl
		<< "<style>" << "body{" << endl << "background-image: url('Goodeats.png');" << endl << "}" << endl
		<< "</style>" << endl << "</head>" << endl
		<< "<meta name='viewport' content='width=device-width, initial-scale=1'>" << endl
		<< "<link rel='stylesheet' href='https://www.w3schools.com/w3css/4/w3.css'>" << endl
		<< "<body>" << endl
		<< "<div style='position:absolute; left:110px; top:50px; font-family:'Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "<h1 style='color:white;'>Information</h1>" << endl << "</div>" << endl
		<< "<div class='w3-panel w3-border-left w3-pale-gray' style='position:absolute; color:white; left:110px; top:90px; font-family:'Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< dynamic_cast<NormalUser*>(user)->printShelfInfo(id) << endl
		<< "<p style='color:white;'>Do you want to Add or Delete Recipe? <a href='/AddOrDeleteRecipe?id=" << id <<"'>Add/Delete</a></p>" << endl
		<< "</div>" << endl
		<< "<div style='position:absolute; left:1190px; top:600px; background-color:LightGray; border-radius: 4px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "<a href='/ShelvesTitle'>back</a>" << endl << "</div>" << endl
		<< "<div style='position:absolute; left:1230px; top:600px; background-color:LightGray; border-radius: 4px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "<a href='/Logout'>Logout</a>" << endl
		<< "</div>" << endl << "</html>" << endl;

	res->setBody(body.str());
	return res;
}

Response *ShelvesHandler::callback(Request* req) {
	Response *res = new Response;
	res->setHeader("Content-Type", "text/html");
	string id = req->getSessionId();
	User* user = goodeats->findUserById(req->getSessionId());
	ostringstream body;
	body << "<!DOCTYPE html>" << endl
		<< "<html>" << endl
		<< "<title>" << "Shelves Information" << "</title>" << endl
		<< "<style>" << "body{" << endl << "background-image: url('Goodeats.png');" << endl << "}" << endl
		<< "</style>" << endl << "</head>" << endl
		<< "<script>" << endl << "function addShelf(){" << endl
		<< " var add = document.getElementById('a');" << endl
		<< " if (add.style.display == 'block'){" << endl
		<< "    add.style.display = 'none';" << endl << "}" << endl
		<< "else{" << endl << "    add.style.display = 'block';" << endl << "}" << endl << "}" << endl
		<< "</script>" << endl << "</head>" << endl
		<< "<meta name='viewport' content='width=device-width, initial-scale=1'>" << endl
		<< "<link rel='stylesheet' href='https://www.w3schools.com/w3css/4/w3.css'>" << endl
		<< "<body>" << endl << "<div style='position:absolute; left:110px; top:50px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "<h1 style = 'color:white;'>Shelves</h1>" << endl << "</div>" << endl
		<< "<div style='position:absolute; left:1190px; top:600px; background-color:LightGray; border-radius: 4px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "<a href='/UserHome'>back</a>" << endl << "</div>" << endl
		<< "<div style='position:absolute; left:1230px; top:600px; background-color:LightGray; border-radius: 4px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "<a href='/Logout'>Logout</a>" << endl << "</div>" << endl
		<< "<div class='w3-panel w3-border-left w3-pale-gray' style = 'position:absolute; color:white; left:110px; top:100px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< dynamic_cast<NormalUser*>(user)->printShelves()
		<< "<p style='color:white;'>Do you want to Add shelf? <a href='/AddShelf'>Add Shelf</a></p>" << endl
		<< "</div>" << endl << "</html>" << endl;
	res->setBody(body.str());
	return res;
}

Response *AddShelfHandler::callback(Request* req) {
	Response *res = new Response;
	std::string title = req->getBodyParam("Shelf");
	User* user = goodeats->findUserById(req->getSessionId());
	goodeats->addShelves(title, user);
	res = Response::redirect("/SuccessfullyAdded");
	return res;
}

Response *AddOrDeleteRecipe::callback(Request* req) {
	Response *res = new Response;
	res->setHeader("Content-Type", "text/html");
	std::string id = req->getQueryParam("id");
	ostringstream body;
	body << "<!DOCTYPE html>" << endl
		<< "<html>" << endl
		<< "<title>" << "Shelves Information" << "</title>" << endl
		<< "<style>" << "body{" << endl << "background-image: url('Goodeats.png');" << endl << "}" << endl
		<< "div.relative {" << endl << "position: absolute; top: 250px; left: 250px; width: 300px; height: 250px; border: 3px white;} " << endl
		<< "</style>" << endl << "</head>" << endl
		<< "<body>" << endl << "<div style='position:absolute; left:260px; top:260px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "<h1 style='color:white;'>Add/Delete Recipe</h1>" << endl << "<\div>" << endl << "</body" << endl
		<< "<div class='relative'>" << endl
		<< "<form action='AddRecipeToshelf' method='POST'>" << endl
		<< "<input type='hidden' name='ShelfId' value='" << id << "'>" << endl
		<< "<div style='position:absolute; left:5px; top:73px;'>" << endl
		<< "<input type='text' id='Add' name='Add' placeholder='Enter recipe id'><br>" << endl << "</div>" << endl
		<< "<div style='position:absolute; left:5px; top:100px;'>" << endl
		<< "<input type='submit' value='Add'>" << endl<<"</div>" << "</form>" << endl
		<< "<form action='DeleteRecipeFromshelf' method='POST'>" << endl
		<< "<input type='hidden' name='ShelfId' value='" << id << "'>" << endl
		<< "<div style='position:absolute; left:5px; top:140px;'>" << endl
		<< "<input type='text' id='Delete' name='Delete' placeholder='Enter recipe id'><br>" << endl << "</div>" << endl
		<< "<div style='position:absolute; left:5px; top:167px;'>" << endl
		<< "<input type='submit' value='Delete'>" << endl << "</div>" << endl << "</form>" << endl 
		<< "<div style='position:absolute; left:960px; top:340px; background-color:LightGray; border-radius: 4px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "<a href='/ShelvesTitle'>back</a>" << endl << "</div>" << endl
		<< "<div style='position:absolute; left:1000px; top:340px; background-color:LightGray; border-radius: 4px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "<a href='/Logout'>Logout</a>" << endl << "</div>" << endl << "</html>" << endl;
	res->setBody(body.str());
	return res;
}

Response *AddRecipeToshelf::callback(Request* req) {
	Response *res = new Response;
	std::string recipeId = req->getBodyParam("Add");
	std::string shelfId = req->getBodyParam("ShelfId");
	std::string userId = req->getSessionId();
	User* user = goodeats->findUserById(userId);
	Recipes* recipe = goodeats->findRecipe(recipeId);
	try {
		if (recipe == nullptr)
			throw NotFoundEx();
		dynamic_cast<NormalUser*>(user)->findShelves(shelfId, recipeId, recipe);
		res = Response::redirect("/SuccessfullyAdded");
	}
	catch (BadRequestEx& e) {
		res = Response::redirect("/BadRequest");
	}
	catch (PermissionDeniedEx& e) {
		res = Response::redirect("PermissionDenied");
	}
	catch (NotFoundEx& e) {
		res = Response::redirect("/NotFound");
	}
	return res;
}

Response *DeleteRecipeFromshelf::callback(Request* req) {
	Response *res = new Response;
	std::string recipeId = req->getBodyParam("Delete");
	std::string shelfId = req->getBodyParam("ShelfId");
	std::string userId = req->getSessionId();
	User* user = goodeats->findUserById(userId);
	Recipes* recipe = goodeats->findRecipe(recipeId);
	try {
		if (recipe == nullptr)
			throw NotFoundEx();
		dynamic_cast<NormalUser*>(user)->searchInShelves(shelfId, recipeId);
		res = Response::redirect("/SuccessfullyDeleted");
	}
	catch (BadRequestEx& e) {
		res = Response::redirect("/BadRequest");
	}
	catch (NotFoundEx& e) {
		res = Response::redirect("/NotFound");
	}
	return res;
}

Response *RecipeCompeleteInfo::callback(Request* req) {
	Response *res = new Response;
	res->setHeader("Content-Type", "text/html");
	std::string id = req->getQueryParam("id");
	ostringstream body;
	body << "<!DOCTYPE html>" << endl
		<< "<html>" << endl
		<< "<title>" << "Recipe Information" << "</title>" << endl
		<< "<style>" << "body{" << endl << "background-image: url('Goodeats.png');" << endl << "}" << endl
		<< "</style>" << endl << "</head>" << endl
		<< "<meta name='viewport' content='width=device-width, initial-scale=1'>" << endl
		<< "<link rel='stylesheet' href='https://www.w3schools.com/w3css/4/w3.css'>" << endl
		<< "<body>" << endl
		<< "<div style='position:absolute; left:110px; top:50px; font-family:'Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "<h1 style='color:white;'>Information</h1>" << endl << "</div>" << endl
		<< "<div class='w3-panel w3-border-left w3-pale-gray' style='position:absolute; color:white; left:110px; top:90px; font-family:'Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< goodeats->printRecipesInfo(id) << "</div>" << endl
		<< "<div style='position:absolute; left:1190px; top:600px; background-color:LightGray; border-radius: 4px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "<a href='/ShelvesTitle'>back</a>" << endl << "</div>" << endl
		<< "<div style='position:absolute; left:1230px; top:600px; background-color:LightGray; border-radius: 4px; font-family:''Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif'>" << endl
		<< "<a href='/Logout'>Logout</a>" << endl << "</div>" << endl << "</body>" << "</html>";
	res->setBody(body.str());
	return res;
}