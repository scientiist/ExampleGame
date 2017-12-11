#pragma once
#include <SFML/Graphics.hpp>
#include <utility>
#include <vector>
#include <memory>

class UIRootObject {
	
public:
	sf::RectangleShape BoundingBox;
	std::vector<UIRootObject*> Children;
	UIRootObject * Parent = nullptr;

	UIRootObject();
	~UIRootObject();

	void Render(sf::RenderWindow&);
	virtual void Update();
	void RenderChildren(sf::RenderWindow&);
	virtual void UpdateChildren();

	void SetColor(sf::Color);
	sf::Color GetColor();

	void SetBorderColor(sf::Color);
	sf::Color GetBorderColor();

	void SetBorderThickness(float);
	float GetBorderThickness();

	void SetSize(sf::Vector2f);
	sf::Vector2f GetSize();

	void SetPosition(sf::Vector2f);
	sf::Vector2f GetPosition();

	void SetParent(UIRootObject *parent);
	UIRootObject* GetParent();

	std::vector<UIRootObject*> GetChildren();




};

