#ifndef ENEMY_H
#define ENEMY_H

#include<SFML/Graphics.hpp>

class Enemy
{
private:
	sf::CircleShape shape;
	int type;
	float speed;
	int hpMax;
	int hp;
	int damage;
	int points;

	void initShape();
	void initVariables();
public:
	Enemy(float pos_x, float pos_y);
	virtual ~Enemy();

	//Accessors
	const sf::FloatRect Enemy::getBounds() const;

	//functions
	void update();
	void render(sf::RenderTarget* target);
};

#endif