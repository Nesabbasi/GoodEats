#include "Recipes.hpp"
#include "User.hpp"

Recipes::Recipes(string title_, string ingredients_, string vegetarian_,
	string minutes_, string tags_, string imageAddress_, int id_) {
	title = title_;
	ingredients = ingredients_;
	vegetarian = vegetarian_;
	minutesToReady = minutes_;
	tags = tags_;
	imageAddress = imageAddress_;
	id = id_;
}

Recipes::~Recipes() {
	for (Rating* rate : rating) {
		delete rate;
	}
}

void Recipes::getScore(string score, User *user) {
	int scores = stoi(score);
	for (int i = 0; i < rating.size(); i++) {
		if (rating[i]->getUsers()->getUsername() == user->getUsername()) {
			rating.erase(rating.begin() + i);
			Rating* Score = new Rating(scores, user);
			rating.push_back(Score);
		}
	}
	Rating* Score = new Rating(scores, user);
	rating.push_back(Score);
	float rates = calculateRatings();
	rates = ceil(rates * 10) / 10;
	finalRating(rates);
}

void Recipes::finalRating(float rate) {
	finalRate = rate;
}

float Recipes::calculateRatings() {
	if (rating.size() == 0)
		return 0;
	float finalRating = 0;
	int i;
	for (i = 0; i < rating.size(); i++) {
		finalRating += rating[i]->getScore();
	}
	return finalRating / i;
}