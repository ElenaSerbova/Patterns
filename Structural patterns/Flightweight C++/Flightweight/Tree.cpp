#include "pch.h"
#include "Tree.h"


Tree::Tree(TreeModel* model, int x, int y, int height)
{
	_model = model;
	_x = x;
	_y = y;
	_height = height;
}


Tree::~Tree()
{
}
