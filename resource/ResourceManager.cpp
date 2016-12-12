//#include "resource/Station.h"
#include <iostream>
#include <vector>

#include "ResourceManager.h"

using namespace std;

ResourceManager::ResourceManager(){
}

ResourceManager::~ResourceManager(){
}
void ResourceManager::initStationName()
{
    m_station_name.push_back("BJ"); //0
    m_station_name.push_back("SH"); //1
    m_station_name.push_back("TJ"); //2 
    m_station_name.push_back("HZ"); //3
    m_station_name.push_back("GZ"); //4
    m_station_name.push_back("NJ"); //5
    m_station_name.push_back("SZ"); //6
    m_station_name.push_back("WH"); //7
    m_station_name.push_back("CQ"); //8
    m_station_name.push_back("CD"); //9
    m_station_name.push_back("DL"); //10
    m_station_name.push_back("XM"); //11
    m_station_name.push_back("ZZ"); //12
}

void ResourceManager::initStation()
{
    initStationName();
    
    for(int i =0; i< m_station_name.size();i++)
    {
        m_station_map.push_back(Station(true,i,m_station_name[i]));
    }
    
    m_station_map[0]->setNextStation("HZ",3);
    m_station_map[0]->setNextStation("SH",1);
    m_station_map[0]->setNextStation("GZ",4);
    
    m_station_map[1]->setNextStation("HZ",3);
    m_station_map[1]->setNextStation("BJ",0);
    m_station_map[1]->setNextStation("ZZ",12);
    m_station_map[1]->setNextStation("CQ",8);
    
    m_station_map[2]->setNextStation("CQ",8);
    m_station_map[2]->setNextStation("GZ",4);

    m_station_map[3]->setNextStation("BJ",0);
    m_station_map[3]->setNextStation("SH",1);
    m_station_map[3]->setNextStation("ZZ",12);

    m_station_map[4]->setNextStation("BJ",0);
    m_station_map[4]->setNextStation("CQ",8);
    m_station_map[4]->setNextStation("TJ",2);

    m_station_map[5]->setNextStation("SZ",6);
    m_station_map[5]->setNextStation("ZZ",12);
    m_station_map[5]->setNextStation("DL",10);
    m_station_map[5]->setNextStation("WH",7);

    m_station_map[6]->setNextStation("ZZ",12);
    m_station_map[6]->setNextStation("NJ",5);
    m_station_map[6]->setNextStation("CD",9);
    m_station_map[6]->setNextStation("CQ",8);

    m_station_map[7]->setNextStation("DJ",10);
    m_station_map[7]->setNextStation("NJ",5);
    m_station_map[7]->setNextStation("CD",9);
    m_station_map[7]->setNextStation("XM",11);

    m_station_map[8]->setNextStation("GZ",4);
    m_station_map[8]->setNextStation("TJ",2);
    m_station_map[8]->setNextStation("SH",1);
    m_station_map[8]->setNextStation("SZ",6);

    m_station_map[9]->setNextStation("WH",7);
    m_station_map[9]->setNextStation("SZ",6);
    
    m_station_map[10]->setNextStation("WH",7);
    m_station_map[10]->setNextStation("NJ",5);

    m_station_map[11]->setNextStation("WH",7);
    
    m_station_map[12]->setNextStation("NJ",5);
    m_station_map[12]->setNextStation("SZ",6);
    m_station_map[12]->setNextStation("SH",1);
    m_station_map[12]->setNextStation("HZ",3);

    //Test : make sure stationMap OK 
    for(vector<Station>::iterator it_map = m_station_map.begin();it_map != m_station_map.end(); ++it_map ) 
    {
        cout<<"station name:"<<it_map->getStationName()<<endl;
    }
}

//Designed for only one state 
void ResourceManager::initMap()
{
    vector<Station> 
}
int main()
{
    ResourceManager temp = ResourceManager();
    temp.initStation();
    return 0;
}
