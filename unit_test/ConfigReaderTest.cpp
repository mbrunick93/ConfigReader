/**
 * @file ConfigReaderTest.cpp
 * @author Mike Brunick
 * @brief Code that unit tests the ConfigReader
 * @version 0.1
 * @date 2023-07-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <gtest/gtest.h>
#include <filesystem>
#include <string>
#include "../ConfigReader.hpp"
/**
 * @brief Checks if getInstance() returns null. 
 * If yes, fail test
 */
TEST(ConfigReaderTest, getInstance)
{
    ConfigReader* p = ConfigReader::getInstance();  
    EXPECT_TRUE(p != nullptr);
}
/**
 * @brief Checks if parseFile() can succesfully parse test_config.ini.
 * If no, fail test
 */
TEST(ConfigReaderTest, parseFile)
{
    ConfigReader* p = ConfigReader::getInstance();  
    bool test = false;
    test = p->parseFile("../../unit_test/test_config.ini");
    EXPECT_TRUE(test);
}
/**
 * @brief Checks if getValue() can succesfully return int value.
 * If no, fail test;
 */
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
/**
 * @brief Checks if getValue() can succesfully return string value.
 * If no, fail test;
 */
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


