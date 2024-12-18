#include "pch.h"
#include "Task.h"
#include <iostream>
#include <fstream>
using namespace std;


TEST(TestTask, BadFileName) {
	string fileNameIn = "testIn.txt";
	string fileNameOut = "testOut.txt";
	bool res = Solve(fileNameIn, fileNameOut);
	EXPECT_FALSE(res);
}

TEST(TestTask, Test6Equations) {
	string fileNameIn = "testIn1.txt";
	string fileNameOut = "testOut1.txt";
	string fileNameTest = "test.txt";
	bool res = Solve(fileNameIn, fileNameOut);
	EXPECT_TRUE(res);
	ifstream f1(fileNameOut);
	ifstream f2("test.txt");
	double a, b, c, x1, x2;
	double a1, b1, c1, x1_1, x2_1;
	std::string s;
	std::string s1;

	f1 >> a >> b >> c >> x1 >> x2;
	f2 >> a1 >> b1 >> c1 >> x1_1 >> x2_1;
	EXPECT_NEAR(a, a1, 0.001);
	EXPECT_NEAR(b, b1, 0.001);
	EXPECT_NEAR(c, c1, 0.001);
	EXPECT_NEAR(x1, x1_1, 0.001);
	EXPECT_NEAR(x2, x2_1, 0.001);
	EXPECT_TRUE(f1.good());
	EXPECT_TRUE(f2.good());

	f1 >> a >> b >> c >> x1;
	f2 >> a1 >> b1 >> c1 >> x1_1;
	EXPECT_NEAR(a, a1, 0.001);
	EXPECT_NEAR(b, b1, 0.001);
	EXPECT_NEAR(c, c1, 0.001);
	EXPECT_NEAR(x1, x1_1, 0.001);
	EXPECT_TRUE(f1.good());
	EXPECT_TRUE(f2.good());

	f1 >> a >> b >> c >> s;
	f2 >> a1 >> b1 >> c1 >> s1;
	EXPECT_NEAR(a, a1, 0.001);
	EXPECT_NEAR(b, b1, 0.001);
	EXPECT_NEAR(c, c1, 0.001);
	EXPECT_EQ(s, s1);
	EXPECT_TRUE(f1.good());
	EXPECT_TRUE(f2.good());

	f1 >> a >> b >> c >> s;
	f2 >> a1 >> b1 >> c1 >> s1;
	EXPECT_NEAR(a, a1, 0.001);
	EXPECT_NEAR(b, b1, 0.001);
	EXPECT_NEAR(c, c1, 0.001);
	EXPECT_EQ(s, s1);
	EXPECT_TRUE(f1.good());
	EXPECT_TRUE(f2.good());

	f1 >> a >> b >> c >> x1 >> x2;
	f2 >> a1 >> b1 >> c1 >> x1_1 >> x2_1;
	EXPECT_NEAR(a, a1, 0.001);
	EXPECT_NEAR(b, b1, 0.001);
	EXPECT_NEAR(c, c1, 0.001);
	EXPECT_NEAR(x1, x1_1, 0.001);
	EXPECT_NEAR(x2, x2_1, 0.001);
	EXPECT_TRUE(f1.good());
	EXPECT_TRUE(f2.good());

	f1 >> a >> b >> c >> s;
	f2 >> a1 >> b1 >> c1 >> s1;
	EXPECT_NEAR(a, a1, 0.001);
	EXPECT_NEAR(b, b1, 0.001);
	EXPECT_NEAR(c, c1, 0.001);
	EXPECT_EQ(s, s1);
	EXPECT_TRUE(f1.good());
	EXPECT_TRUE(f2.good());
}
