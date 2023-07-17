/**
 * @file ConfigReader.hpp
 * @author Mike Brunick
 * @brief 
 * @version 0.1
 * @date 2023-07-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#ifndef CONFIGREADER_HPP
#define CONFIGREADER_HPP

#include <iostream>
#include <map>


class ConfigReader
{
      public:
         /**
          * @brief Dynamically creates a new instance of the config reader and 
          * returns it
          * 
          * @return Newly created pointer instance
          */
         static ConfigReader* getInstance();
         /**
          * @brief Parses the config file thats passed to it and store data in a map
          * 
          * @param fileName - path and name of the file to be parsed
          * @return true - If file is succesfully parsed
          * @return false -If file isn't succesfully parsed
          */
         bool parseFile(std::string fileName = "config/config.ini");
         /**
          * @brief Reads the config file for integer values
          * 
          * @param tag - name of item to be read out of config file
          * @param value - in/out that will contain read value
          * @return true - value was succesfully returned
          * @return false - value was not successfully returned
          */
         bool getValue(std::string tag, int& value);
         /**
          * @brief Reads the config file for string values
          * 
          * @param tag - name of item to be read out of config file
          * @param value - in/out that will contain read value
          * @return true - value was succesfully returned
          * @return false - value was not successfully returned
          */
         bool getValue(std::string tag, std::string& value);

      private:
         ConfigReader();
         ~ConfigReader();
         ConfigReader(const ConfigReader& obj){}
         void operator=(const ConfigReader& obj){}
         std::string trim(const std::string& str, const std::string& whitespace = " \t");
         std::string reduce(const std::string& str,
         const std::string& fill = " ",
         const std::string& whitespace = " \t");
         std::map<std::string, std::string> m_ConfigSettingMap;
         static ConfigReader* m_pInstance;

};




#endif
