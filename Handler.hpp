#ifndef HANDLER_HPP
#define HANDLER_HPP "HANDLER_HPP"

#include "server\server.hpp"
#include "exceptions.hpp"
#include "Recipes.hpp"
#include <exception>

class Goodeats;

class SuccessfullyAdded :public RequestHandler {
public:
	SuccessfullyAdded(Goodeats* goodeats_) : goodeats(goodeats_) {};
	Response *callback(Request *req);
private:
	Goodeats* goodeats;
};

class SuccessfullyDeleted :public RequestHandler {
public:
	SuccessfullyDeleted(Goodeats* goodeats_) : goodeats(goodeats_) {};
	Response *callback(Request *req);
private:
	Goodeats* goodeats;
};

class PermissionDenied :public RequestHandler {
public:
	PermissionDenied(Goodeats* goodeats_) : goodeats(goodeats_) {};
	Response *callback(Request *req);
private:
	Goodeats* goodeats;
};

class BadRequest :public RequestHandler {
public:
	BadRequest(Goodeats* goodeats_) : goodeats(goodeats_) {};
	Response *callback(Request *req);
private:
	Goodeats* goodeats;
};

class SignupHandler :public RequestHandler {
public:
	SignupHandler(Goodeats* goodeats_) : goodeats(goodeats_) {};
	Response *callback(Request *req);
private:
	Goodeats* goodeats;
};

class LoginHandler : public RequestHandler {
public:
	LoginHandler(Goodeats* goodeats_) : goodeats(goodeats_) {};
	Response *callback(Request *req);
private:
	Goodeats* goodeats;
};

class LogoutHandler :public RequestHandler {
public:
	LogoutHandler(Goodeats* goodeats_) : goodeats(goodeats_) {};
	Response *callback(Request *req);
private:
	Goodeats* goodeats;
};

class UserHomeHandler :public RequestHandler {
public:
	UserHomeHandler(Goodeats* goodeats_) : goodeats(goodeats_) {};
	Response *callback(Request *req);
private:
	Goodeats* goodeats;
};

class ChefHomeHandler :public RequestHandler {
public:
	ChefHomeHandler(Goodeats* goodeats_) : goodeats(goodeats_) {};
	Response *callback(Request *req);
private:
	Goodeats* goodeats;
};

class RecipeHandler :public RequestHandler {
public:
	RecipeHandler(Goodeats* goodeats_) : goodeats(goodeats_) {};
	Response *callback(Request *req);
private:
	Goodeats* goodeats;
};

class AddRecipeHandler :public RequestHandler {
public:
	AddRecipeHandler(Goodeats* goodeats_) : goodeats(goodeats_) {};
	Response *callback(Request *req);
private:
	Goodeats* goodeats;
};

class DeleteRecipeHandler :public RequestHandler {
public:
	DeleteRecipeHandler(Goodeats* goodeats_) : goodeats(goodeats_) {};
	Response *callback(Request *req);
private:
	Goodeats* goodeats;
};

class RecipeInfoHandler :public RequestHandler {
public:
	RecipeInfoHandler(Goodeats* goodeats_) : goodeats(goodeats_) {};
	Response *callback(Request *req);
private:
	Goodeats* goodeats;
};

class RatingHandler :public RequestHandler {
public:
	RatingHandler(Goodeats* goodeats_) : goodeats(goodeats_) {};
	Response *callback(Request *req);
private:
	Goodeats* goodeats;
};

class ShelfInfoHandler :public RequestHandler {
public:
	ShelfInfoHandler(Goodeats* goodeats_) : goodeats(goodeats_) {};
	Response *callback(Request *req);
private:
	Goodeats* goodeats;
};

class ShelvesHandler :public RequestHandler {
public:
	ShelvesHandler(Goodeats* goodeats_) : goodeats(goodeats_) {};
	Response *callback(Request *req);
private:
	Goodeats* goodeats;
};

class AddShelfHandler :public RequestHandler {
public:
	AddShelfHandler(Goodeats* goodeats_) : goodeats(goodeats_) {};
	Response *callback(Request *req);
private:
	Goodeats* goodeats;
};

class AddOrDeleteRecipe :public RequestHandler {
public:
	AddOrDeleteRecipe(Goodeats* goodeats_) : goodeats(goodeats_) {};
	Response *callback(Request *req);
private:
	Goodeats* goodeats;
};

class AddRecipeToshelf :public RequestHandler {
public:
	AddRecipeToshelf(Goodeats* goodeats_) : goodeats(goodeats_) {};
	Response *callback(Request *req);
private:
	Goodeats* goodeats;
};

class DeleteRecipeFromshelf :public RequestHandler {
public:
	DeleteRecipeFromshelf(Goodeats* goodeats_) : goodeats(goodeats_) {};
	Response *callback(Request *req);
private:
	Goodeats* goodeats;
};

class RecipeCompeleteInfo :public RequestHandler {
public:
	RecipeCompeleteInfo(Goodeats* goodeats_) : goodeats(goodeats_) {};
	Response *callback(Request *req);
private:
	Goodeats* goodeats;
};
#endif