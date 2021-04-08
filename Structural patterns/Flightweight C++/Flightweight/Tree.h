#pragma once
class Tree
{
	int _x;
	int _y;
	int _height;

	TreeModel* _model;
public:
	Tree(TreeModel* model, int x, int y, int height);
	~Tree();

	void Draw()
	{
		_model->Draw(_x, _y, _height);
	}
};

