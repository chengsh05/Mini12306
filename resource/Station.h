#include<string>
#include<vector>

using namespace std;


class Station
{
    public:
        Station(bool ishead,int mapkey,string stationname);
        ~Station();
        string getStationName() { return m_station_name; }

    private:
        bool m_is_head;
        int m_map_key;
        string m_station_name;
        Station * m_next_station; 
};

