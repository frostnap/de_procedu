#include "../googletest-master/googletest/include/gtest/gtest.h"
#include "../../container.h"

using namespace testing;

int main(int argc, char *argv[]) {
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(Tests, functionInTest) {
    std::ifstream ifstr("inputTest1.txt");

    namesp::container c{};
    namesp::In(c, ifstr);
    EXPECT_EQ(c.currentAmount, 2);
    auto testFigure1 = static_cast<namesp::figure *>(c.hash[0].data);
    EXPECT_TRUE(testFigure1->type == namesp::mType::SPHERE);
    EXPECT_EQ(testFigure1->density, 123);
    EXPECT_EQ(testFigure1->temperatureOfMelting, 21);
    auto testSphere1 = testFigure1->s;
    EXPECT_EQ(testSphere1->radius, 5);
}

TEST(Tests, functionOutTest) {
    std::ifstream ifstr("inputTest1.txt");
    std::ofstream ofstr("outputTest1.txt");

    namesp::container c{};
    namesp::In(c, ifstr);
    namesp::Out(c, ofstr);
    EXPECT_TRUE(ofstr.is_open());
}

TEST(Tests, functionSortTest) {
    std::ifstream ifstr("inputTest1.txt");

    namesp::container c{};
    namesp::In(c, ifstr);
    namesp::Sort(c);

    for(int i = 1; i < namesp::container::MAXSIZE; i++) { // Проход по основным индексам
        EXPECT_TRUE(namesp::FigureFunct((namesp::figure*)c.hash[i-1].data) <
                             namesp::FigureFunct((namesp::figure*)c.hash[i].data));
    }
}

TEST(Tests, functionTest) {
    std::ifstream ifstr("inputTest2.txt");

    namesp::container c{};
    namesp::In(c, ifstr);
    EXPECT_TRUE(namesp::FigureFunct((namesp::figure*)c.hash[0].data) == 12);
}