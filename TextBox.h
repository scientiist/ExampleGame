#pragma once
#include "UIRootObject.h"
class TextBox : public UIRootObject {
public:
	TextBox();
	~TextBox();

	void SetText();
	void GetText();

	void SetTextColor();
	void GetTextColor();
};

