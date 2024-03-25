#pragma once

#include<map>
#include "Player.h"
#include "Bullet.h"
#include "Enemy.h"


class Game
{
private:

	//Window
	sf::RenderWindow* window;

	//Resources
	std::map<std::string, sf::Texture*> textures;
	std::vector<Bullet*> bullets;

	//Player
	Player* player;

	//Enemies
	float spawnTimer;
	float spawnTimerMax;
	std::vector<Enemy*>enemies;

	//Private function
	void initWindow();
	void initTexture();

	void initPlayer();
	void initEnemies();

public:
	Game();
	virtual ~Game();

	//Fuctions
	void run();

	void updatePollEvents();
	void updateInput();
	void updateBullets();
	void updateEnemies();
	void update();
	void render();
};
