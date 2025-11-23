#pragma once
class MyString
{
private:
	char* data;
	int size;
	static const int maxLen=100;
	static int instanceCount;

public:
	MyString();
	MyString(const char* s, int size);
	MyString(const MyString& other);
	MyString(MyString&& obj) noexcept;
	MyString& operator=(const MyString& other);
	MyString& operator=(MyString&& other) noexcept;
	~MyString();
	const char* getData() const;
	void setData(const char* new_data, int size);
	static int getInstanceCount();

};

