#include "UIRootObject.h"
#include <SFML/Graphics.hpp>

UIRootObject::UIRootObject() {
	BoundingBox.setSize(sf::Vector2f(200, 50));
	BoundingBox.setPosition(sf::Vector2f(0, 0));
	
}


UIRootObject::~UIRootObject() {
	
}

void UIRootObject::RenderChildren(sf::RenderWindow& window) {
	for (UIRootObject *child : Children) {
		child->Render(window);
	}
}

void UIRootObject::UpdateChildren() {
	for (UIRootObject *child : Children) {
		child->Update();
	}
}

void UIRootObject::Render(sf::RenderWindow& RenderWindow) {
	RenderWindow.draw(BoundingBox);
	RenderChildren(RenderWindow);
}


void UIRootObject::Update() {
	UpdateChildren();
}



void UIRootObject::SetColor(sf::Color color) {
	BoundingBox.setFillColor(color);
}

sf::Color UIRootObject::GetColor() {
	return BoundingBox.getFillColor();
}

void UIRootObject::SetBorderColor(sf::Color color) {
	BoundingBox.setOutlineColor(color);
}

sf::Color UIRootObject::GetBorderColor() {
	return BoundingBox.getOutlineColor();
}

void UIRootObject::SetBorderThickness(float thickness) {
	BoundingBox.setOutlineThickness(thickness);
}

float UIRootObject::GetBorderThickness() {
	return BoundingBox.getOutlineThickness();
}

void UIRootObject::SetSize(sf::Vector2f size) {
	BoundingBox.setSize(size);
}

sf::Vector2f UIRootObject::GetSize() {
	return BoundingBox.getSize();
}

void UIRootObject::SetPosition(sf::Vector2f position) {
	BoundingBox.setPosition(position);
}

sf::Vector2f UIRootObject::GetPosition() {
	return BoundingBox.getPosition();
}

void UIRootObject::SetParent(UIRootObject *parent) {
	Parent = parent;
	Parent->Children.push_back(this);
}

UIRootObject* UIRootObject::GetParent() {
	return Parent;
}

std::vector<UIRootObject*> UIRootObject::GetChildren() {
	return Children;
}