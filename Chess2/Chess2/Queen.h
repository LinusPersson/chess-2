#ifndef QUEEN_H_
#define QUEEN_H_

#include <SFML\Graphics.hpp>
#include "Piece.h"

class Queen :public Piece
{
private:
	Queen();
public:
	Queen(Vector2f, bool, Sprite, Color);
	~Queen();
	Vector2f Move(Vector2f);
};
#endif