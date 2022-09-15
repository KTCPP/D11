#include "pch.h"
#include "Mensch.h"

TEST(Mensch, Konstruktor) {
	Mensch Max;
	EXPECT_EQ(Max.name.compare("Max Mustermann"),0);
}

TEST(Mensch, essen) {
	Mensch Max;
	Max.essen(1);
	EXPECT_EQ(Max.gewicht, 1);
	Max.essen(2);
	EXPECT_EQ(Max.gewicht, 3);
}

TEST(Mensch, drucke) {
	Submensch Max;
	Max.drucke();
	EXPECT_EQ(Max.text, "1 0.000000 0.000000 Max Mustermann ");
}