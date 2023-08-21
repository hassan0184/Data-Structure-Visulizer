#include <SFML/Graphics.hpp>
#include<string>
#include<string.h>
#include<conio.h>
#include <thread>
#include <chrono>
#include<iostream>
#include <stdlib.h>
#include <sstream>
#include <windows.h> 
#include<dos.h> 
using namespace std;
using std::flush;
using std::string;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;
using namespace sf;
int s = 0;
string* arrr;
int kj = 0;
int kj2 = 0;
int p = 0;
int sj = 0, st = 0;
int tt = 0;
Text* text5;
int arr5[100];
int arr2[100];
int arr3[100];
int arr4[100];
int x = 0, y = 0;
int jj = 0;
int ij = 0;
int front = -1, rear = -1;
int rear2 = -1;
sf::RenderWindow window(sf::VideoMode(850, 500), "SFML works!");
Text* text;
RectangleShape* box;
RectangleShape box1;
Text* text2;
Text* text3;
RectangleShape* box2;
Font font;
void slow_print(const string& message)
{
	int n = 1;
	for (const char c : message)
	{
		cout << c << flush;

		std::this_thread::sleep_for(std::chrono::milliseconds(100));

	}
}
sf::Vertex line[] =
{
	sf::Vertex(sf::Vector2f(150,40)),
	sf::Vertex(sf::Vector2f(150,130))
};
sf::Text tex;
void arr(int si)
{
	int a = 0;
	system("cls");
	string n1;
	window.clear(Color::White);
	font.loadFromFile("fo/ENGR.TTF");
	text = new Text[si];
	int x = 0, y = 0;
	int jj = 0;
	int ij = 0;
	tex.setFont(font);
	tex.setPosition(5, 10);
	tex.setCharacterSize(30);
	tex.setString("arrayed data");

	tex.setOutlineThickness(1);
	tex.setOutlineColor(sf::Color::Blue);
	if (!font.loadFromFile("fo/ENGR.TTF"))
	{
		std::cout << "Load to failed font" << std::endl;
	}
	line[0].color = sf::Color::Blue;
	line[1].color = sf::Color::Red;
	for (int i = 0; i < si; i++)
	{

		text[i].setFont(font);
		text[i].setOutlineColor(sf::Color::Blue);
		text[i].setOutlineThickness(1);
		text[i].setCharacterSize(35);
		text[i].setPosition(Vector2f(140 + x, 111 + y));
		cout << "Enter The Value In Array : " << endl;
		cin >> n1;
		stringstream gk(n1);
		gk >> jj;

		arr2[ij] = jj;
		ij++;
		text[i].setString(n1);
		y = y + 71;

	}
	box = new RectangleShape[si];
	for (int i = 0; i < si; i++)
	{
		box[i].setSize(Vector2f(100, 60));
		box[i].setFillColor(Color::Black);
		box[i].setOutlineThickness(4);
		box[i].setOutlineColor(Color::Blue);
		box[i].setPosition(Vector2f(100, 100 + a));
		a = a + 70;

	}
}

void dis(int index, int ssi)
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == Event::Closed)
			window.close();
	}

	window.clear();
	window.draw(tex);
	window.draw(line, 2, sf::Lines);
	for (int i = 0; i < ssi; i++)
	{
		if (i == index)
		{
			box[i].setFillColor(Color::Red);
			text[i].setFillColor(sf::Color::White);
		}
		window.draw(box[i]);
	}
	for (int i = 0; i < ssi; i++)
	{
		window.draw(text[i]);
	}

	window.display();
}
//line for stack
sf::Vertex linest[] =
{
	sf::Vertex(sf::Vector2f(150,40)),
	sf::Vertex(sf::Vector2f(150,99))
};
void stack_display(int index, int ssi)
{

	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == Event::Closed)
			window.close();
	}

	window.clear();

	for (int i = 0; i < ssi; i++)
	{
		if (i == index)
		{
			box[i].setFillColor(Color::Red);
			text5[i].setFillColor(sf::Color::Blue);
		}
		window.draw(box[i]);
	}
	for (int i = 0; i < ssi; i++)
	{
		window.draw(text5[i]);
	}
	window.draw(tex);
	window.draw(linest, 2, sf::Lines);
	window.display();
}

int stack_insert(int size, int& k, int& x, int& y)
{
	int a = 0;
	if (k <= size)
	{
		linest[0].color = sf::Color::Blue;
		linest[1].color = sf::Color::Red;
		tex.setFont(font);
		tex.setPosition(5, 10);
		tex.setCharacterSize(30);
		tex.setString("Stacked data");
		//		tex.setColor(sf::Color::Black);
		tex.setOutlineThickness(1);
		tex.setOutlineColor(sf::Color::Blue);
		if (!font.loadFromFile("fo/ENGR.TTF"))
		{
			std::cout << "Load to failed font" << std::endl;
		}
		font.loadFromFile("fo/ENGR.TTF");
		text5[k].setFont(font);
		text5[k].setCharacterSize(35);
		text5[k].setOutlineThickness(1);
		text5[k].setPosition(Vector2f(140 + x, 111 + y));//this pointer......................
		cout << "Enter The Value In STACK : " << endl;
		cin >> arrr[k];
		stringstream gk(arrr[k]);
		gk >> sj;

		arr5[st] = sj;
		//		text5[k].setColor(sf::Color::Black);
		text5[k].setString(arrr[k]);

		text5[k].setOutlineColor(sf::Color::Blue);


		k = k + 1;
		y = y + 71;
		st++;


	}
	else
	{
		system("cls");
		cout << " STACK IS FULL" << endl;
		_getch();
	}
	box = new RectangleShape[size];
	for (int i = 0; i < size; i++)
	{
		box[i].setSize(Vector2f(100, 60));
		box[i].setFillColor(Color::Black);
		box[i].setOutlineThickness(4);
		box[i].setOutlineColor(Color::Blue);
		box[i].setPosition(Vector2f(100, 100 + a));
		a = a + 70;

	}
	return(k);

}


void stack_search(int n, int ssi)
{
	for (int i = 0; i < ssi; i++)
	{
		if (arr5[i] == n)
		{
			stack_display(i, ssi);
			system("Pause>0");
			box[i].setFillColor(Color::Black);
			text5[i].setFillColor(sf::Color::White);
			return;
		}
		else {
			continue;
		}

	}

}
void stack_del(int size, int& k, int& y)
{
	window.clear(Color::White);

	if (k == 0)
	{
		system("cls");
		cout << "STACK IS EMPTY : " << endl;
		_getch();
	}
	for (int i = 0; i < k; i++)
	{

		if (i + 1 == k)
		{
			arrr[i] = " ";
			text5[i].setString(arrr[i]);
			k = k - 1;
			y = y - 71;
		}
		//window.draw(text5[i]);
	}
	//window.display();
}
//line for Queue
sf::Vertex lineq[] =
{
	sf::Vertex(sf::Vector2f(150,40)),
	sf::Vertex(sf::Vector2f(150,99))
};

void en_queue(int si)
{
	int a = 0;
	string n1;
	window.clear(Color::White);
	font.loadFromFile("fo/ENGR.TTF");
	//if (tt == 0)
	//{
	//	text2 = new Text[si];
	//}
	lineq[0].color = sf::Color::Blue;
	lineq[1].color = sf::Color::Red;
	tex.setFont(font);
	tex.setPosition(5, 10);
	tex.setCharacterSize(30);
	tex.setString("Queued data");
	//	tex.setColor(sf::Color::Black);
	tex.setOutlineThickness(1);
	tex.setOutlineColor(sf::Color::Blue);
	if (!font.loadFromFile("fo/ENGR.TTF"))
	{
		std::cout << "Load to failed font" << std::endl;
	}
	if (front == -1 && rear == -1)
	{
		front = rear = 0;
		cout << "Enter The Value : " << endl;
		cin >> n1;

		text2[rear].setFont(font);
		text2[rear].setOutlineColor(sf::Color::Blue);
		text2[rear].setOutlineThickness(1);
		text2[rear].setCharacterSize(35);
		text2[rear].setPosition(Vector2f(140 + x, 111 + y));

		stringstream gk(n1);
		gk >> jj;
		arr3[ij] = jj;
		ij++;
		text2[rear].setString(n1);
		y = y + 71;

		box = new RectangleShape[si];
		for (int i = 0; i < si; i++)
		{
			box[front].setSize(Vector2f(100, 60));
			box[front].setFillColor(Color::Black);
			box[front].setOutlineThickness(4);
			box[front].setOutlineColor(Color::Blue);
			box[front].setPosition(Vector2f(100, 100 + a));
			a = a + 70;
			return;
		}

	}
	else if (rear == si)
	{
		cout << "QUEUE IS FULL:\n";
		return;
	}
	else {
		rear++;
		cout << "Enter The Value : " << endl;
		cin >> n1;

		text2[rear].setFont(font);
		text2[rear].setOutlineColor(sf::Color::Blue);
		text2[rear].setOutlineThickness(1);
		text2[rear].setCharacterSize(35);
		text2[rear].setPosition(Vector2f(140 + x, 111 + y));
		stringstream gk(n1);
		gk >> jj;
		arr3[ij] = jj;
		ij++;
		text2[rear].setString(n1);
		y = y + 71;

		box = new RectangleShape[si];
		for (int i = 0; i < si; i++)
		{
			box[i].setSize(Vector2f(100, 60));
			box[i].setFillColor(Color::Black);
			box[i].setOutlineThickness(4);
			box[i].setOutlineColor(Color::Blue);
			box[i].setPosition(Vector2f(100, 100 + a));
			a = a + 70;

		}
	}

}
void search(int n, int ssi)
{
	for (int i = 0; i < ssi; i++)
	{
		if (arr2[i] == n)
		{
			dis(i, ssi);
			box[i].setFillColor(Color::Black);
			text[i].setFillColor(sf::Color::White);
		}

	}

}
void en_dis(int index, int ssi, bool a)
{


	if (a == true)
	{

		kj++;
	}

	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == Event::Closed)
			window.close();
	}

	window.clear();
	for (int i = kj; i <= rear; i++)
	{
		if (index == i)
		{

			box[i].setFillColor(Color::Red);
			text2[i].setFillColor(sf::Color::Black);
		}
		window.draw(box[i]);
	}
	for (int i = kj; i <= rear; i++)
	{
		window.draw(text2[i]);
	}
	window.draw(tex);
	window.draw(lineq, 2, sf::Lines);
	window.display();
}
void de_search(int n, int ssi)
{

	for (int i = 0; i < ssi; i++)
	{

		if (arr3[i] == n)
		{
			en_dis(i, ssi, false);
			box[i].setFillColor(Color::Black);
			text2[i].setFillColor(sf::Color::White);
		}
		else {
			continue;
		}

	}

}






void push(int si)
{
	int a = 0;
	string n1;
	window.clear(Color::White);
	font.loadFromFile("fo/ENGR.TTF");

	if (front == -1 && rear == -1)
	{
		front = rear = 0;
		cout << "Enter The Value : " << endl;
		cin >> n1;

		text3[rear].setFont(font);
		text3[rear].setOutlineColor(sf::Color::Blue);
		text3[rear].setOutlineThickness(1);
		text3[rear].setCharacterSize(35);
		text3[rear].setPosition(Vector2f(140 + x, 111 + y));

		stringstream gk(n1);
		gk >> jj;
		arr3[ij] = jj;
		ij++;
		text3[rear].setString(n1);
		y = y + 71;

		box = new RectangleShape[si];
		for (int i = 0; i < si; i++)
		{
			box[front].setSize(Vector2f(100, 60));
			box[front].setFillColor(Color::Black);
			box[front].setOutlineThickness(4);
			box[front].setOutlineColor(Color::Blue);
			box[front].setPosition(Vector2f(100, 100 + a));
			a = a + 70;
			return;
		}

	}
	else if (rear == si)
	{
		cout << "QUEUE IS FULL:\n";
		return;
	}
	else {
		rear++;
		cout << "Enter The Value : " << endl;
		cin >> n1;

		text3[rear].setFont(font);
		text3[rear].setOutlineColor(sf::Color::Blue);
		text3[rear].setOutlineThickness(1);
		text3[rear].setCharacterSize(35);
		text3[rear].setPosition(Vector2f(140 + x, 111 + y));
		stringstream geek(n1);
		geek >> jj;
		arr3[ij] = jj;
		ij++;
		text3[rear].setString(n1);
		y = y + 71;

		box = new RectangleShape[si];
		for (int i = 0; i < si; i++)
		{
			box[i].setSize(Vector2f(100, 60));
			box[i].setFillColor(Color::Black);
			box[i].setOutlineThickness(4);
			box[i].setOutlineColor(Color::Blue);
			box[i].setPosition(Vector2f(100, 100 + a));
			a = a + 70;

		}
	}

}


void de_queue(int ssi)
{

	bool aa = true;
	en_dis(100, ssi, aa);

}






int c;
struct node1 {
	Text data;
	RectangleShape* line;
	float x_axis, y_axis;
	int dd;
	node1* new_address;
}*head1 = NULL;
int m_x = 100, m_y = 500;
int sll;
void sll_insert(string d)
{
	tex.setFont(font);
	tex.setPosition(130, 0);
	tex.setCharacterSize(30);
	tex.setString("Singly-linked list data");
	tex.setOutlineThickness(1);
	tex.setOutlineColor(sf::Color::Blue);
	if (!font.loadFromFile("fo/ENGR.TTF"))
	{
		std::cout << "Load to failed font" << std::endl;
	}
	int a = 0;
	int x = 0, y = 0;
	window.clear(Color::White);
	font.loadFromFile("fo/ENGR.TTF");
	node1* new_node = new node1;
	new_node->line = new RectangleShape((sf::Vector2f(110, 2)));
	new_node->data.setString(d);
	stringstream gk(d);
	gk >> sll;
	new_node->dd = sll;
	new_node->new_address = NULL;
	new_node->data.setFont(font);
	new_node->data.setCharacterSize(35);
	new_node->data.setPosition(Vector2f(150 + x, 120 + y));
	new_node->data.setOutlineColor(sf::Color::Blue);
	new_node->data.setOutlineThickness(1);
	new_node->data.setFillColor(sf::Color::Black);
	new_node->data.setStyle(Text::Bold);
	box1.setSize(Vector2f(100, 60));
	box1.setFillColor(Color::Black);
	box1.setOutlineThickness(3);
	box1.setOutlineColor(Color::Blue);
	box1.setPosition(Vector2f(100, 100 + a));
	new_node->line->setFillColor(sf::Color::White);
	new_node->line->setOutlineColor(sf::Color::Blue);
	new_node->line->setOutlineThickness(3.5);
	y = y + 71;

	if (head1 == NULL)
	{
		head1 = new_node;

		return;
	}
	else {
		node1* ptr = head1;
		while (ptr->new_address != NULL)
		{
			ptr = ptr->new_address;

		}
		ptr->new_address = new_node;
	}


}
void sll_pos()
{
	node1* a = head1;
	node1* b = head1;
	while (a != NULL)
	{
		if (a == b)
		{
			a->x_axis = m_x;
			a->y_axis = m_y;
		}
		else {
			a->x_axis = b->x_axis + 210;

			a->y_axis = b->y_axis;
			a->line->setPosition(a->x_axis - 125, b->y_axis - 420);
		}
		b = a;
		a = a->new_address;
	}
}
void sll_display()
{

	sll_pos();
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == Event::Closed)
			window.close();
	}

	window.clear();
	node1* ptr = head1;

	while (ptr != NULL)
	{

		box1.setPosition(Vector2f(ptr->x_axis - 18, ptr->y_axis - 450));
		window.draw(*(ptr->line));
		ptr->data.setPosition(Vector2f(ptr->x_axis + 18, ptr->y_axis - 446));
		window.draw(box1);
		window.draw(ptr->data);

		ptr = ptr->new_address;

	}
	window.draw(tex);
	window.display();
}
void sill_link_del(int d)
{
	node1* ptr = head1;
	if (head1->dd == d)
	{
		node1* temp = head1;
		head1 = temp->new_address;
		free(temp);
		sll_display();
		return;
	}
	node1* t = NULL;
	do
	{


		if (ptr->dd == d)
		{

			t->new_address = ptr->new_address;
			free(ptr);
			sll_display();
			return;
		}
		t = ptr;
		ptr = ptr->new_address;
	} while (ptr != NULL);
	return;
}



void sil_link_search(int d)
{
	node1* ptr = head1;

	while (ptr != NULL)
	{

		if (ptr->dd == d)
		{
			ptr->data.setFillColor(sf::Color::Green);
			sll_display();
			ptr->data.setFillColor(sf::Color::Black);
			return;
		}
		ptr = ptr->new_address;
	}
	return;
}






RectangleShape box22;

int ccc;
int dll;
struct node2 {
	Text data;
	RectangleShape* line;
	RectangleShape* line2;
	float x_axis, y_axis;
	node2* l, * r;
	int dd;
}*head2 = NULL;
int m_x2 = 100, m_y2 = 500;
void dou_insert(string d)
{
	int a = 0;
	int x = 0, y = 0;
	window.clear(Color::White);
	font.loadFromFile("fo/ENGR.TTF");
	tex.setFont(font);
	tex.setPosition(130, 0);
	tex.setCharacterSize(30);
	tex.setString("Doubly-linked list data");
	tex.setOutlineThickness(1);
	tex.setOutlineColor(sf::Color::Blue);
	if (!font.loadFromFile("fo/ENGR.TTF"))
	{
		std::cout << "Load to failed font" << std::endl;
	}
	node2* new_node = new node2;
	new_node->line = new RectangleShape((sf::Vector2f(110, 2)));
	new_node->line2 = new RectangleShape((sf::Vector2f(110, 2)));
	new_node->data.setString(d);
	stringstream gk(d);
	gk >> dll;
	new_node->dd = dll;
	new_node->r = NULL; new_node->l = NULL;
	new_node->data.setFont(font);
	new_node->data.setCharacterSize(35);
	new_node->data.setPosition(Vector2f(140 + x, 111 + y));
	new_node->data.setFillColor(sf::Color::Black);
	new_node->data.setOutlineColor(sf::Color::Blue);
	new_node->data.setOutlineThickness(1);
	box22.setSize(Vector2f(100, 60));
	box22.setFillColor(Color::Black);
	box22.setOutlineThickness(4);
	box22.setOutlineColor(Color::Blue);
	box22.setPosition(Vector2f(100, 100 + a));
	new_node->line->setFillColor(sf::Color::White);
	new_node->line->setOutlineColor(sf::Color::Blue);
	new_node->line->setOutlineThickness(3.5);
	new_node->line2->setFillColor(sf::Color::White);
	new_node->line2->setOutlineColor(sf::Color::Blue);
	new_node->line2->setOutlineThickness(3.5);
	y = y + 71;

	if (head2 == NULL)
	{
		head2 = new_node;

		return;
	}
	else {
		node2* ptr = head2;
		while (ptr->r != NULL)
		{
			ptr = ptr->r;

		}
		ptr->r = new_node;
		new_node->l = ptr;
	}


}
void dou_pos()
{
	node2* a = head2;
	node2* b = head2;
	while (a != NULL)
	{
		if (a == b)
		{
			a->x_axis = m_x2;
			a->y_axis = m_y2;
		}
		else {
			a->x_axis = b->x_axis + 210;

			a->y_axis = b->y_axis;
			a->line->setPosition(a->x_axis - 120, b->y_axis - 440);
			a->line2->setPosition(a->x_axis - 120, b->y_axis - 400);
		}
		b = a;
		a = a->r;
	}
}
void dou_display()
{
	dou_pos();
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == Event::Closed)
			window.close();
	}

	window.clear();
	node2* ptr = head2;

	while (ptr != NULL)
	{

		box22.setPosition(Vector2f(ptr->x_axis - 18, ptr->y_axis - 450));
		window.draw(*(ptr->line));
		window.draw(*(ptr->line2));
		ptr->data.setPosition(Vector2f(ptr->x_axis + 18, ptr->y_axis - 446));
		window.draw(box22);
		window.draw(ptr->data);

		ptr = ptr->r;

	}
	window.draw(tex);
	window.display();
}

void dou_link_del(int d)
{
	node2* ptr = head2;
	if (head2->dd == d)
	{
		node2* temp = head2;
		head2 = temp->r;
		free(temp);
		dou_display();
		return;
	}
	do
	{


		if (ptr->dd == d)
		{
			if (ptr->r == NULL)
			{
				ptr->l->r = NULL;
				dou_display();
				return;

			}
			ptr->l->r = ptr->r;
			ptr->r->l = ptr->l;

			free(ptr);
			dou_display();
			return;
		}
		ptr = ptr->r;
	} while (ptr != head2->l);
	return;
}



void dou_link_search(int d)
{
	node2* ptr = head2;

	while (ptr != NULL)
	{

		if (ptr->dd == d)
		{
			ptr->data.setFillColor(sf::Color::Green);
			dou_display();
			ptr->data.setFillColor(sf::Color::Black);
			return;
		}
		ptr = ptr->r;
	}
	return;
}



RectangleShape box3;
int scl = 0;
int c3 = 120;
int pp = 0;
struct node3 {
	Text data;
	int dd;
	RectangleShape* line;
	RectangleShape* line3;
	RectangleShape* line4;
	RectangleShape* line5;
	float x_axis, y_axis;
	node3* new_address;
}*head3 = NULL;
int m_x3 = 100, m_y3 = 500;
void scl_insert(string d)
{
	int a = 0;
	int x = 0, y = 0;
	window.clear(Color::White);
	font.loadFromFile("fo/ENGR.TTF");
	tex.setFont(font);
	tex.setPosition(10, 0);
	tex.setCharacterSize(30);
	tex.setString("Circular-Singly-linked list data");
	tex.setOutlineThickness(1);
	tex.setOutlineColor(sf::Color::Blue);
	node3* new_node = new node3;
	new_node->line = new RectangleShape((sf::Vector2f(110, 2)));
	new_node->line3 = new RectangleShape((sf::Vector2f(110, 2)));
	new_node->line3->rotate(90);
	new_node->line3->setFillColor(sf::Color::White);
	new_node->line5 = new RectangleShape((sf::Vector2f(66, 2)));
	new_node->line4 = new RectangleShape((sf::Vector2f(110 + c, 2)));
	new_node->line5->rotate(90);
	new_node->line5->setFillColor(sf::Color::White);
	new_node->data.setString(d);
	stringstream gk(d);
	gk >> scl;
	///////////////////////////////////////
	new_node->line3->setFillColor(sf::Color::White);
	new_node->line3->setOutlineColor(sf::Color::Blue);
	new_node->line3->setOutlineThickness(3.5);

	new_node->line4->setFillColor(sf::Color::White);
	new_node->line4->setOutlineColor(sf::Color::Blue);
	new_node->line4->setOutlineThickness(3.5);

	new_node->line5->setFillColor(sf::Color::White);
	new_node->line5->setOutlineColor(sf::Color::Blue);
	new_node->line5->setOutlineThickness(3.5);
	new_node->line->setFillColor(sf::Color::White);
	new_node->line->setOutlineColor(sf::Color::Blue);
	new_node->line->setOutlineThickness(3.5);

	new_node->dd = scl;
	new_node->new_address = NULL;
	new_node->data.setFont(font);
	new_node->data.setCharacterSize(35);
	new_node->data.setPosition(Vector2f(140 + x, 111 + y));
	new_node->data.setFillColor(sf::Color::Black);
	new_node->data.setOutlineColor(sf::Color::Blue);
	new_node->data.setOutlineThickness(1);
	box3.setSize(Vector2f(100, 60));
	box3.setFillColor(Color::Black);
	box3.setOutlineThickness(4);
	box3.setOutlineColor(Color::Blue);
	box3.setPosition(Vector2f(100, 100 + a));
	y = y + 71;
	c3 += 20;
	if (head3 == NULL)
	{
		head3 = new_node;

		return;
	}
	else {
		node3* ptr = head3;
		while (ptr->new_address != NULL)
		{
			ptr = ptr->new_address;

		}
		ptr->new_address = new_node;
	}

	c3 = c3 + 120;
}
void scl_pos()
{
	node3* a = head3;
	node3* b = head3;
	while (a != NULL)
	{
		if (a == b)
		{
			a->x_axis = m_x3;
			a->y_axis = m_y3;
		}
		else {
			a->x_axis = b->x_axis + 208;

			a->y_axis = b->y_axis;
			a->line->setPosition(a->x_axis - 113, b->y_axis - 420);
			a->line3->setPosition(a->x_axis + 60, b->y_axis - 430);
			a->line5->setPosition(113, 114);
			a->line4 = new RectangleShape((sf::Vector2f(250, 2)));
			a->line4->setPosition(a->x_axis - 190, b->y_axis - 320);
		}
		b = a;
		a = a->new_address;
	}
}
void scl_display()
{

	scl_pos();

	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == Event::Closed)
			window.close();
	}
	window.clear();

	node3* ptr = head3;

	while (ptr != NULL)
	{

		if (ptr->new_address == NULL)
		{

			window.draw(*(ptr->line3));

		}

		box3.setPosition(Vector2f(ptr->x_axis - 10, ptr->y_axis - 450));
		window.draw(*(ptr->line));
		ptr->data.setPosition(Vector2f(ptr->x_axis + 21, ptr->y_axis - 446));
		window.draw(tex);
		window.draw(box3);
		window.draw(ptr->data);
		window.draw(*(ptr->line4));
		window.draw(*(ptr->line5));

		ptr = ptr->new_address;

	}
	window.display();
}
void scl_link_search(int d)
{
	node3* ptr = head3;

	while (ptr != NULL)
	{

		if (ptr->dd == d)
		{
			ptr->data.setFillColor(sf::Color::Green);
			scl_display();
			ptr->data.setFillColor(sf::Color::Black);
			return;
		}
		ptr = ptr->new_address;
	}
	return;
}
void scl_link_del(int d)
{
	node3* ptr = head3;
	if (head3->dd == d)
	{
		node3* temp = head3;
		head3 = temp->new_address;
		free(temp);
		scl_display();
		return;
	}
	node3* tt = NULL;
	do
	{


		if (ptr->dd == d)
		{

			tt->new_address = ptr->new_address;
			free(ptr);
			scl_display();
			return;
		}
		tt = ptr;
		ptr = ptr->new_address;
	} while (ptr != NULL);
	return;
}
RectangleShape box4;
int qq = 0;
int c4 = 120;
int p4 = 0;
struct node4 {
	Text data;
	int dd;
	RectangleShape* line;
	RectangleShape* line2;
	RectangleShape* line3;
	RectangleShape* line4;
	RectangleShape* line5;
	float x_axis, y_axis;
	node4* l, * r;
}*head4 = NULL;
int m_x4 = 100, m_y4 = 500;
void cir_insert(string d)
{
	int a = 0;
	int x = 0, y = 0;
	window.clear(Color::White);
	node4* new_node = new node4;
	font.loadFromFile("fo/ENGR.TTF");
	tex.setFont(font);
	tex.setPosition(10, 0);
	tex.setCharacterSize(30);
	tex.setString("Circular-Doubly-linked list data");
	tex.setOutlineThickness(1);
	tex.setOutlineColor(sf::Color::Blue);
	new_node->line = new RectangleShape((sf::Vector2f(110, 2)));
	new_node->line2 = new RectangleShape((sf::Vector2f(110, 2)));
	new_node->line3 = new RectangleShape((sf::Vector2f(110, 2)));
	new_node->line3->rotate(90);
	new_node->line5 = new RectangleShape((sf::Vector2f(66, 2)));
	new_node->line4 = new RectangleShape((sf::Vector2f(110 + c, 2)));
	new_node->line5->rotate(90);
	new_node->data.setString(d);
	stringstream gk(d);
	gk >> qq;
	new_node->dd = qq;
	new_node->r = NULL; new_node->l = NULL;
	new_node->data.setFont(font);
	new_node->data.setCharacterSize(35);
	new_node->data.setPosition(Vector2f(140 + x, 111 + y));
	new_node->data.setFillColor(sf::Color::White);
	new_node->data.setOutlineColor(sf::Color::Blue);
	new_node->data.setOutlineThickness(1);
	box4.setSize(Vector2f(100, 60));
	box4.setFillColor(Color::Black);
	box4.setOutlineThickness(4);
	box4.setOutlineColor(Color::Blue);
	box4.setPosition(Vector2f(100, 100 + a));
	y = y + 71;
	c4 += 20;
	/////////////////////////////////////////////////////////////////////////////////

	new_node->line3->setFillColor(sf::Color::White);
	new_node->line3->setOutlineColor(sf::Color::Blue);
	new_node->line3->setOutlineThickness(3.5);

	new_node->line4->setFillColor(sf::Color::White);
	new_node->line4->setOutlineColor(sf::Color::Blue);
	new_node->line4->setOutlineThickness(3.5);

	new_node->line5->setFillColor(sf::Color::White);
	new_node->line5->setOutlineColor(sf::Color::Blue);
	new_node->line5->setOutlineThickness(3.5);
	new_node->line->setFillColor(sf::Color::White);
	new_node->line->setOutlineColor(sf::Color::Blue);
	new_node->line->setOutlineThickness(3.5);
	new_node->line2->setFillColor(sf::Color::White);
	new_node->line2->setOutlineColor(sf::Color::Blue);
	new_node->line2->setOutlineThickness(3.5);





	///////////////////////////////////////////////////////////////////////////////
	if (head4 == NULL)
	{
		head4 = new_node;

		return;
	}
	else {
		node4* ptr = head4;
		while (ptr->r != head4->l)
		{
			ptr = ptr->r;

		}
		ptr->r = new_node;
		new_node->l = ptr;
		new_node->r = head4->l;
	}

	c4 = c4 + 120;
}
void dcl_pos()
{
	node4* a = head4;
	node4* b = head4


		;
	while (a != NULL)
	{
		if (a == b)
		{
			a->x_axis = m_x4;
			a->y_axis = m_y4;
		}
		else {
			a->x_axis = b->x_axis + 210;

			a->y_axis = b->y_axis;
			a->line->setPosition(a->x_axis - 117, b->y_axis - 440);
			a->line2->setPosition(a->x_axis - 117, b->y_axis - 400);
			a->line3->setPosition(a->x_axis + 60, b->y_axis - 430);
			a->line5->setPosition(113, 114);
			a->line4 = new RectangleShape((sf::Vector2f(250, 2)));

			/*a->line4->setFillColor(sf::Color::Red);*/
			a->line4->setPosition(a->x_axis - 190, b->y_axis - 320);
		}
		b = a;
		a = a->r;
	}
}
void cir_display()
{

	dcl_pos();

	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == Event::Closed)
			window.close();
	}
	window.clear();

	node4* ptr = head4;

	while (ptr != NULL)
	{

		if (ptr->r == NULL)
		{

			window.draw(*(ptr->line3));

		}


		if (head4->l == NULL)
		{

			ptr->line5->setFillColor(sf::Color::White);


		}
		window.draw(tex);
		box4.setPosition(Vector2f(ptr->x_axis - 10, ptr->y_axis - 450));
		window.draw(*(ptr->line));
		window.draw(*(ptr->line2));
		ptr->data.setPosition(Vector2f(ptr->x_axis + 10, ptr->y_axis - 450));
		window.draw(box4);
		window.draw(ptr->data);
		window.draw(*(ptr->line4));
		window.draw(*(ptr->line5));

		ptr = ptr->r;

	}
	window.display();
}
void cir_link_search(int d)
{
	node4* ptr = head4;

	while (ptr != NULL)
	{

		if (ptr->dd == d)
		{
			ptr->data.setFillColor(sf::Color::Green);
			cir_display();
			ptr->data.setFillColor(sf::Color::Blue);
			return;
		}
		ptr = ptr->r;
	}
	return;
}
void cir_link_del(int d)
{
	node4* ptr = head4;
	if (head4->dd == d)
	{
		node4* temp = head4;
		head4 = temp->r;
		free(temp);
		cir_display();
		return;
	}
	while (ptr->r != NULL)
	{


		if (ptr->dd == d)
		{
			if (ptr->r == head4)
			{
				ptr->l->r = ptr->r;
				ptr->r->l = ptr->l;
				free(ptr);
				return;
			}
			ptr->l->r = ptr->r;
			ptr->r->l = ptr->l;
			free(ptr);
			cir_display();
			return;
		}
		ptr = ptr->r;
	}
	return;
}




struct nodet
{
	int info;
	nodet* root, * left, * right;
}*root;
int x_side = 100, y_side = 100;

CircleShape circle;
Text text11;
string temp_string;
bool isEmpty()
{
	if (!root)
		return true;
	return false;
}
void insert_bst(int d, nodet* Node = root)
{
	window.clear(sf::Color(10, 20, 2, 25));
	text11.setCharacterSize(18);
	text11.setPosition(sf::Vector2f(0, 0));
	text11.setString("Inserting " + to_string(d));
	text11.setFillColor(sf::Color::Red);
	window.draw(text11);
	x_side = 100;
	//this->output(1, root);
	window.display();
	//this_thread::sleep_for(chrono::milliseconds(200));
	nodet* new_node = new nodet;
	new_node->left = new_node->right = new_node->root = NULL;
	new_node->info = d;
	if (!root)
	{
		root = new_node;
		return;
	}

	if (d >= Node->info)
	{
		if (Node->right)
			insert_bst(d, Node->right);
		else
		{
			Node->right = new_node;
			new_node->root = Node;
		}
	}
	else if (d < Node->info)
	{
		if (Node->left)
			insert_bst(d, Node->left);
		else
		{
			Node->left = new_node;
			new_node->root = Node;
		}
	}
}
void display_bst(int level = 1, nodet* Root = root)
{
	y_side = 100;
	int i;
	if (Root != NULL)
	{
		display_bst(level + 1, Root->left);
		for (i = 0; i < level && Root != root; i++)
			y_side = y_side + 50;
		circle.setRadius(20);
		circle.setFillColor(sf::Color::Black);
		circle.setPosition(sf::Vector2f(x_side, y_side));
		text11.setCharacterSize(14);
		text11.setStyle(sf::Text::Bold);
		temp_string = to_string(Root->info);
		text11.setString(temp_string);
		text11.setPosition(sf::Vector2f(x_side + 8, y_side + 8));
		x_side = x_side + 50;
		window.draw(circle);
		window.draw(text11);
		temp_string = to_string(level);
		temp_string = "Level " + temp_string;
		text11.setString(temp_string);
		text11.setPosition(sf::Vector2f(0, y_side + 10));
		window.draw(text11);
		display_bst(level + 1, Root->right);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
sf::Vertex lineh[] =
{
	sf::Vertex(sf::Vector2f(150,40)),
	sf::Vertex(sf::Vector2f(150,99))
};
int hsh_arr2[100];
Text* hsh_text;
RectangleShape* hsh_box;
void hsh_arr(int si)
{
	int a = 0;
	system("cls");
	string n1;
	window.clear(Color::White);
	font.loadFromFile("fo/ENGR.TTF");
	hsh_text = new Text[si];
	int x = 0, y = 0;
	int jj = 0;
	int ij = 0;
	tex.setFont(font);
	tex.setPosition(10, 10);
	tex.setCharacterSize(30);
	tex.setString("Hashed data");
	//	tex.setColor(sf::Color::Black);
	tex.setOutlineThickness(1);
	tex.setOutlineColor(sf::Color::Blue);
	if (!font.loadFromFile("fo/ENGR.TTF"))
	{
		std::cout << "Load to failed font" << std::endl;
	}
	lineh[0].color = sf::Color::Blue;
	lineh[1].color = sf::Color::Red;
	for (int i = 0; i < si; i++)
	{

		hsh_text[i].setFont(font);
		hsh_text[i].setCharacterSize(35);
		hsh_text[i].setFillColor(sf::Color::Black);
		hsh_text[i].setOutlineColor(sf::Color::Blue);
		hsh_text[i].setOutlineThickness(1);
		hsh_text[i].setPosition(Vector2f(139 + x, 110 + y));
		cout << "Enter The Value In Array : " << endl;
		cin >> n1;
		stringstream gk(n1);
		gk >> jj;

		hsh_arr2[ij] = jj;
		ij++;
		hsh_text[i].setString(n1);


		y = y + 71;

	}
	hsh_box = new RectangleShape[si];
	for (int i = 0; i < si; i++)
	{
		hsh_box[i].setSize(Vector2f(100, 60));
		hsh_box[i].setFillColor(Color::Black);
		hsh_box[i].setOutlineThickness(4);
		hsh_box[i].setOutlineColor(Color::Red);
		hsh_box[i].setPosition(Vector2f(100, 100 + a));
		a = a + 70;

	}
}

void hsh_dis(int index, int ssi)
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == Event::Closed)
			window.close();
	}

	window.clear();

	for (int i = 0; i < ssi; i++)
	{
		if (i == index)
		{
			box[i].setFillColor(Color::Black);
			hsh_text[i].setFillColor(sf::Color::Black);
		}
		window.draw(hsh_box[i]);
	}
	for (int i = 0; i < ssi; i++)
	{
		if (hsh_arr2[i] == hsh_arr2[i + 1])
		{
			i++;
		}
		window.draw(hsh_text[i]);
	}
	window.draw(lineh, 2, sf::Lines);
	window.draw(tex);
	window.display();
}
int* minarr1;
string* minarr;
Text* mintext;
RectangleShape* minbox;

sf::Vertex linem[] =
{
	sf::Vertex(sf::Vector2f(150,40)),
	sf::Vertex(sf::Vector2f(150,99))
};

void min_display(int size)
{


	window.clear(Color::Black);
	for (int i = 0; i < size; i++)
	{
		window.draw(minbox[i]);
	}
	for (int i = 0; i < size; i++)
	{

		window.draw(mintext[i]);
	}
	window.draw(linem, 2, sf::Lines);
	window.draw(tex);
	window.display();

}

void min_insert(int size, int& k, int& x, int& y, int& heapsize)
{
	tex.setFont(font);
	tex.setPosition(10, 10);
	tex.setCharacterSize(30);
	tex.setString("min-heaped data");
	//	tex.setColor(sf::Color::Black);
	tex.setOutlineThickness(1);
	tex.setOutlineColor(sf::Color::Blue);
	if (!font.loadFromFile("fo/ENGR.TTF"))
	{
		std::cout << "Load to failed font" << std::endl;
	}
	if (k != size)
	{
		if (k == 0)
		{
			font.loadFromFile("fo/ENGR.TTF");
			mintext[k].setFont(font);
			//			mintext[k].setColor(sf::Color::White);
			mintext[k].setOutlineColor(sf::Color::Blue);
			mintext[k].setCharacterSize(35);
			mintext[k].setPosition(Vector2f(140 + x, 111 + y));//this pointer......................
			cout << "Enter The Value In Array : " << endl;
			cin >> minarr1[k];
			string s;
			stringstream ss;
			ss << minarr1[k];
			ss >> s;
			minarr[k] = s;
			//mintext[k].setFillColor(sf::Color::Black);
			mintext[k].setString(minarr[k]);
			linem[0].color = sf::Color::Blue;
			linem[1].color = sf::Color::Red;
			k = k + 1;
			y = y + 71;

		}
		else
		{
			int str_int = 0;
			font.loadFromFile("fo/ENGR.TTF");
			mintext[k].setFont(font);
			mintext[k].setCharacterSize(35);
			mintext[k].setPosition(Vector2f(140 + x, 111 + y));
			cout << "Enter The Value In Array : " << endl;
			cin >> minarr1[k];
			for (int i = 0; i <= k; i++)
			{
				if (minarr1[0] > minarr1[i])
				{
					swap(minarr1[0], minarr1[i]);
				}
			}

			for (int i = 0; i <= k; i++)
			{
				string t;
				stringstream ss;
				ss << minarr1[i];
				ss >> t;
				mintext[i].setString(t);

			}
			mintext[k].setFillColor(sf::Color::White);


			k = k + 1;
			y = y + 71;

		}
	}
	else
	{
		system("cls");
		cout << "THE ARRAY IS FULL" << endl;
		return;
	}

}

void create(int size)
{
	int a = 0;



	window.clear(Color::White);


	minbox = new RectangleShape[size];
	mintext = new Text[size];
	for (int i = 0; i < size; i++)
	{
		minbox[i].setSize(Vector2f(100, 60));
		minbox[i].setFillColor(Color::Black);
		minbox[i].setOutlineThickness(4);
		minbox[i].setOutlineColor(Color::Blue);
		minbox[i].setPosition(Vector2f(100, 100 + a));
		a = a + 70;

	}


}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
sf::Vertex linemax[] =
{
	sf::Vertex(sf::Vector2f(150,40)),
	sf::Vertex(sf::Vector2f(150,99))
};




int* maxarr1;
string* maxarr;
Text* maxtext;
RectangleShape* maxbox;


void max_display(int size)
{


	window.clear(Color::Black);
	for (int i = 0; i < size; i++)
	{
		window.draw(maxbox[i]);
	}
	for (int i = 0; i < size; i++)
	{

		window.draw(maxtext[i]);
	}
	window.draw(linemax, 2, sf::Lines);
	window.draw(tex);
	window.display();

}
void max_insert(int size, int& k, int& x, int& y, int& heapsize)
{
	linemax[0].color = sf::Color::Blue;
	linemax[1].color = sf::Color::Red;
	font.loadFromFile("fo/ENGR.TTF");
	tex.setFont(font);
	tex.setPosition(5, 10);
	tex.setCharacterSize(30);
	tex.setString("Max-heaped data");
	tex.setOutlineThickness(1);
	tex.setOutlineColor(sf::Color::Blue);

	if (k != size)
	{
		if (k == 0)
		{
			font.loadFromFile("fo/ENGR.TTF");
			maxtext[k].setFont(font);
			maxtext[k].setCharacterSize(35);
			maxtext[k].setOutlineColor(sf::Color::Blue);
			maxtext[k].setPosition(Vector2f(140 + x, 111 + y));
			cout << "Enter The Value In Array : " << endl;
			cin >> minarr1[k];
			string s;
			stringstream ss;
			ss << maxarr1[k];
			ss >> s;
			maxarr[k] = s;
			maxtext[k].setString(maxarr[k]);



			k = k + 1;
			y = y + 71;

		}
		else
		{
			int str_int = 0;
			font.loadFromFile("fo/ENGR.TTF");
			maxtext[k].setFont(font);
			maxtext[k].setCharacterSize(35);
			maxtext[k].setOutlineColor(sf::Color::Blue);
			maxtext[k].setPosition(Vector2f(140 + x, 111 + y));//this pointer......................
			cout << "Enter The Value In Array : " << endl;
			cin >> maxarr1[k];
			for (int i = 0; i <= k; i++)
			{
				if (maxarr1[0] < maxarr1[i])
				{
					swap(maxarr1[0], maxarr1[i]);
				}
			}

			for (int i = 0; i <= k; i++)
			{
				string t;
				stringstream ss;
				ss << maxarr1[i];
				ss >> t;
				maxtext[i].setString(t);

			}
			maxtext[k].setOutlineColor(sf::Color::Blue);


			k = k + 1;
			y = y + 71;

		}
	}
	else
	{
		system("cls");
		cout << "THE ARRAY IS FULL" << endl;
		return;
	}

}

void max_create(int size)
{
	int a = 0;



	window.clear(Color::White);


	maxbox = new RectangleShape[size];
	maxtext = new Text[size];
	for (int i = 0; i < size; i++)
	{
		maxbox[i].setSize(Vector2f(100, 60));
		maxbox[i].setFillColor(Color::Black);
		maxbox[i].setOutlineThickness(4);
		maxbox[i].setOutlineColor(Color::Blue);
		maxbox[i].setPosition(Vector2f(100, 100 + a));
		a = a + 70;

	}


}


int main()
{

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	int si;
	cout << "ENTER THE SIZE FOR (ARRAY),(STACK)AND(QUEUE):\n";
	cin >> si;
	int k = 0;
	int x = 0;
	int y = 0;

	text2 = new Text[si];
	text3 = new Text[si];
	int z = 0;
	arrr = new string[si];
	text5 = new Text[si];
	minarr = new string[si];
	minarr1 = new int[si];
	for (int i = 0; i < si; i++)
	{
		minarr1[i] = 0;
	}

	int mink = 0;
	int minx = 0;
	int miny = 0;
	int minheapify = 0;
	int mintemp_size = si;
	create(si);



	maxarr = new string[si];
	maxarr1 = new int[si];
	for (int i = 0; i < si; i++)
	{
		maxarr1[i] = 0;
	}

	int maxk = 0;
	int maxx = 0;
	int maxy = 0;
	int maxheapify = 0;
	int maxtemp_size = si;
	max_create(si);
	system("cls");
	system("color 79");
	string message = "\t\t\t\t***M-E-N-U***\n\n";
	system("color 00");
	slow_print(message);

	{

		while (1)
		{

			int kc = 1;
			int c;
			FlushConsoleInputBuffer(hConsole);
			SetConsoleTextAttribute(hConsole, kc);
			cout << "\t\t\t1.FOR (ARRAY) INSERTION:\n";
			cout << "\t\t\t2.FOR (ARRAY) DISPLAY:\n";
			cout << "\t\t\t3.FOR (ARRAY) SEARCHING:\n\n\n";
			kc++;
			FlushConsoleInputBuffer(hConsole);
			SetConsoleTextAttribute(hConsole, kc);
			cout << "\t\t\t4.FOR (QUEUE) EN-QUEUE :\n";
			cout << "\t\t\t5.FOR (QUEUE) DE-QUEUE :\n";
			cout << "\t\t\t6.FOR (QUEUE) DISPLAY :\n";
			cout << "\t\t\t8.FOR (QUEUE) SEARCHING :\n\n\n";
			kc++;
			FlushConsoleInputBuffer(hConsole);
			SetConsoleTextAttribute(hConsole, kc);
			cout << "\t\t\t9.FOR (STACK)  PUSH :\n";
			cout << "\t\t\t10.FOR (STACK) POP :\n";
			cout << "\t\t\t11.FOR (STACK) DISPLAY :\n";
			cout << "\t\t\t12.FOR (STACK) SEARCHING :\n\n\n";
			kc++;
			FlushConsoleInputBuffer(hConsole);
			SetConsoleTextAttribute(hConsole, kc);
			cout << "\t\t\t13.FOR (SINGLY-LINKLIST) INSERTION:\n";
			cout << "\t\t\t14.FOR (SINGLY-LINKLIST) DISPLAY:\n";
			cout << "\t\t\t15.FOR (SINGLY-LINKLIST) SEARCHING:\n";
			cout << "\t\t\t16.FOR (SINGLY-LINKLIST) DELETEION:\n\n\n";
			kc++;
			FlushConsoleInputBuffer(hConsole);
			SetConsoleTextAttribute(hConsole, kc);
			cout << "\t\t\t17.FOR (DOUBLY-LINKLIST) INSERTION:\n";
			cout << "\t\t\t18.FOR (DOUBLY-LINKLIST) DISPLAY:\n";
			cout << "\t\t\t19.FOR (DOUBLY-LINKLIST) SEARCHING:\n";
			cout << "\t\t\t20.FOR (DOUBLY-LINKLIST) DELETE:\n\n\n";
			kc++;
			FlushConsoleInputBuffer(hConsole);
			SetConsoleTextAttribute(hConsole, kc);
			cout << "\t\t\t21.FOR (SINGLYCIRCULAR-LINKLIST) INSERTION:\n";
			cout << "\t\t\t22.FOR (SINGLYCIRCULAR-LINKLIST) DISPLAY:\n";
			cout << "\t\t\t23.FOR (SINGLYCIRCULAR-LINKLIST) SEARCHING:\n";
			cout << "\t\t\t24.FOR (SINGLYCIRCULAR-LINKLIST) DELETE:\n\n\n";
			kc++;
			FlushConsoleInputBuffer(hConsole);
			SetConsoleTextAttribute(hConsole, kc);

			cout << "\t\t\t25.FOR (DOUBLYCIRCULAR-LINKLIST) INSERTION:\n";
			cout << "\t\t\t26.FOR (DOUBLYCIRCULAR-LINKLIST) DISPLAY:\n";
			cout << "\t\t\t27.FOR (DOUBLYCIRCULAR-LINKLIST) SEARCHING:\n";
			cout << "\t\t\t28.FOR (DOUBLYCIRCULAR-LINKLIST) DELETE:\n\n\n";
			kc++;
			FlushConsoleInputBuffer(hConsole);
			SetConsoleTextAttribute(hConsole, kc);

			cout << "\t\t\t29.FOR (BST) INSERTION:\n";
			cout << "\t\t\t30.FOR (BST) DISPLAY:\n\n\n";
			kc++;
			FlushConsoleInputBuffer(hConsole);
			SetConsoleTextAttribute(hConsole, kc);
			cout << "\t\t\t31.FOR (HASHING) INSERTION:\n";
			cout << "\t\t\t32.FOR (HASHING) DISPLAY:\n\n\n";
			kc++;
			FlushConsoleInputBuffer(hConsole);
			SetConsoleTextAttribute(hConsole, kc);
			cout << "\t\t\t33.FOR (MIN_HEAP) INSERTION:\n";
			cout << "\t\t\t34.FOR (MIN_HEAP) DISPLAY:\n\n\n";
			kc++;
			FlushConsoleInputBuffer(hConsole);
			SetConsoleTextAttribute(hConsole, kc);
			cout << "\t\t\t35.FOR (MAX_HEAP) INSERTION:\n";
			cout << "\t\t\t36.FOR (MAX_HEAP) DISPLAY:\n\n\n";
			kc++;
			FlushConsoleInputBuffer(hConsole);
			SetConsoleTextAttribute(hConsole, kc);
			cout << "\t\t\t37.FOR EXIT:\n";
			cin >> c;
			system("pause>0");
			system("cls");
			switch (c) {
			case 1:
			{

				p = si;
				arr(si);
				system("pause>0");
				system("cls");
				break;

			}
			case 2:
			{

				dis(100, si);
				system("pause>0");
				system("cls");
				break;

			}
			case 3:
			{

				cout << "\t\t\tENTER THE DATA YOU WANT TO SEARCH:\n";
				int d;
				cin >> d;
				search(d, si);
				system("pause>0");
				system("cls");
				break;

			}
			case 4:
			{
				en_queue(si);
				system("pause>0");
				system("cls");
				break;
			}
			case 5:
			{

				de_queue(si);
				system("pause>0");
				system("cls");
				break;

			}
			case 6:
			{

				en_dis(100, si, false);
				system("pause>0");
				system("cls");
				break;

			}
			case 8:
			{

				cout << "\t\t\tENTER THE DATA YOU WANT TO SEARCH:\n";
				int d;
				cin >> d;
				de_search(d, si);
				system("pause>0");
				system("cls");
				break;

			}
			case 9:
			{
				z = stack_insert(si, k, x, y);
				system("pause>0");
				system("cls");
				break;
			}
			case 10:
			{

				stack_del(si, k, y);
				system("pause>0");
				system("cls");
				break;

			}
			case 11:
			{

				stack_display(si, k);
				system("pause>0");
				system("cls");
				break;

			}
			case 12:
			{

				cout << "\t\t\tENTER THE DATA YOU WANT TO SEARCH:\n";
				int d;
				cin >> d;
				stack_search(d, si);

				system("pause>0");
				system("cls");
				break;

			}
			case 13:
			{
				cout << "\t\t\tENTER THE DATA YOU WANT TO INSERT:\n";
				string d;
				cin >> d;
				sll_insert(d);
				system("pause>0");
				system("cls");
				break;

			}
			case 14:
			{

				sll_display();
				system("pause>0");
				system("cls");
				break;

			}
			case 15:
			{
				cout << "\t\t\tENTER THE DATA YOU WANT TO SEARCH:\n";
				int d;
				cin >> d;
				sil_link_search(d);
				system("pause>0");
				system("cls");
				break;

			}
			case 16:
			{
				cout << "\t\t\tENTER THE DATA YOU WANT TO DELETE:\n";
				int d;
				cin >> d;
				sill_link_del(d);
				system("pause>0");
				system("cls");
				break;

			}
			case 17:
			{
				cout << "\t\t\tENTER THE DATA YOU WANT TO INSERT:\n";
				string d;
				cin >> d;
				dou_insert(d);
				system("pause>0");
				system("cls");
				break;

			}
			case 18:
			{

				dou_display();
				system("pause>0");
				system("cls");
				break;

			}
			case 19:
			{
				cout << "\t\t\tENTER THE DATA YOU WANT TO SEARCH:\n";
				int d;
				cin >> d;
				dou_link_search(d);
				system("pause>0");
				system("cls");
				break;

			}
			case 20:
			{
				cout << "\t\t\tENTER THE DATA YOU WANT TO DELETE:\n";
				int d;
				cin >> d;
				dou_link_del(d);
				system("pause>0");
				system("cls");
				break;

			}
			case 21:
			{
				cout << "\t\t\tENTER THE DATA YOU WANT TO INSERT:\n";
				string d;
				cin >> d;
				scl_insert(d);
				system("pause>0");
				system("cls");
				break;

			}
			case 22:
			{

				scl_display();
				system("pause>0");
				system("cls");
				break;

			}
			case 23:
			{
				int a;
				cin >> a;
				scl_link_search(a);
				system("pause>0");
				system("cls");
				break;

			}
			case 24:
			{
				int a;
				cin >> a;
				scl_link_del(a);
				system("pause>0");
				system("cls");
				break;

			}
			case 25:
			{
				cout << "\t\t\tENTER THE DATA YOU WANT TO INSERT:\n";
				string d;
				cin >> d;
				cir_insert(d);
				system("pause>0");
				system("cls");
				break;

			}
			case 26:
			{

				cir_display();
				system("pause>0");
				system("cls");
				break;

			}
			case 27:
			{
				int a;
				cin >> a;
				cir_link_search(a);
				system("pause>0");
				system("cls");
				break;

			}
			case 28:
			{
				int a;
				cin >> a;
				cir_link_del(a);
				system("pause>0");
				system("cls");
				break;

			}
			case 29:
			{

				if (!font.loadFromFile("arial.ttf"))
					cout << "Failed to load" << endl;
				text11.setFont(font);
				text11.setFillColor(sf::Color::Black);
				int n;

				x_side = 100;
				display_bst();
				window.display();
				cout << "Enter Number to Insert: ";
				cin >> n;
				insert_bst(n);
				sf::Event event;
				while (window.pollEvent(event))
				{
					if (event.type == sf::Event::Closed)
						window.close();
				}
				window.clear(sf::Color::White);


			}
			case 30:
			{


				display_bst();
				window.display();




				system("pause>0");
				system("cls");
				break;

			}
			case 31:
			{

				p = si;
				hsh_arr(si);
				system("pause>0");
				system("cls");
				break;

			}
			case 32:
			{

				hsh_dis(100, si);
				system("pause>0");
				system("cls");
				break;

			}
			case 33:
			{

				min_insert(si, mink, minx, miny, minheapify);
				system("pause>0");
				system("cls");
				break;

			}
			case 34:
			{
				min_display(si);
				system("pause>0");
				system("cls");
				break;

			}
			case 35:
			{

				max_insert(si, maxk, maxx, maxy, maxheapify);
				system("pause>0");
				system("cls");
				break;

			}
			case 36:
			{
				max_display(si);
				system("pause>0");
				system("cls");
				break;

			}
			case 37:
			{
				exit(1);
			}

			}
		}
	}
	system("pause>0");
	return 0;
}
