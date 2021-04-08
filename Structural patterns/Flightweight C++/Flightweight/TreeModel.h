#pragma once
class TreeModel
{
	string _mesh;
	string _leafTexture;
	string _barkTexture;
public:
	TreeModel();
	~TreeModel();

	void Draw(int x, int y, int height)
	{
		cout << "Tree(" << x << ", " << y << "): " << endl;
		cout << _mesh << endl;
		cout << _leafTexture << endl;
		cout << _barkTexture << endl;
	}
};

