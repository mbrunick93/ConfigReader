#include <gtest/gtest.h>
#include <filesystem>
#include <string>
#include "../ConfigReader.hpp"

TEST(ConfigReaderTest, getInstance)
{
    ConfigReader* p = ConfigReader::getInstance();  
    EXPECT_TRUE(p != nullptr);
}

TEST(ConfigReaderTest, parseFile)
{
    ConfigReader* p = ConfigReader::getInstance();  
    bool test = false;
    test = p->parseFile("../../unit_test/test_config.ini");
    EXPECT_TRUE(test);
}

TEST(ConfigReaderTest, getValueInt )
{
    ConfigReader* p = ConfigReader::getInstance();
    p->parseFile("../../unit_test/test_config.ini");
    bool test = false;
    int testval = 0;
    test = p->getValue("test_int",testval);

    EXPECT_TRUE(test);
    EXPECT_EQ(1234,testval);
}

TEST(ConfigReaderTest, getValueString )
{
    ConfigReader* p = ConfigReader::getInstance();
    p->parseFile("../../unit_test/test_config.ini");
    bool test = false;
    std::string testval = "";
    test = p->getValue("test_string",testval);

    EXPECT_TRUE(test);
    EXPECT_EQ("test",testval);
}


