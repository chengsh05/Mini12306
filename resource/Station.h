#include<string>
#include<vector>

using namespace std;


class Station
{
    public:
        Station(bool is_head,int map_key,string station_name);
        ~Station();

        string getStationName() { return m_station_name; }
        void setNextStation(string nextStation,int map_key);
        Station * getNextStation() { return m_next_station; }
    private:
        bool m_is_head;
        int m_map_key;
        string m_station_name;
        Station * m_next_station; 
};

