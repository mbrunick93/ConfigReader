# ConfigReader



## Example code 

**main.cpp**
include "configreader.hpp" 
int main()
{
   ConfigReader* p = ConfigReader::getInstance();
   p->parseFile();
   p->getValue("localIP", nicip);
   p->getValue("mcast_recv_addr", recv_addr);
   p->getValue("mcast_recv_port", recvport);

}

**config.ini**
*localIP = 0.0.0.0
mcast_recv_addr = 224.1.17.18
mcast_recv_port = 51301*

