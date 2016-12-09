#include "resource/Resource.h"

struct Station;

//Using smart point???
//TODO:How to control memory?

class PersonRequest{
    public:
        PersonRequest(Station begin,Station end);
        ~PersonRequest();

        bool SendRequestSearch(Station Begin,Station End);
        bool SendRequestBuy(Station Begin,Station End);
        unsigned int GetResult() const { return m_statues;}
        void setFlag(bool Buy) { m_flg_search_or_buy = Buy;}

    private:
        Station m_begin;
        Station m_end;
        static unsigned int m_statues; //default: 0  send : 1  waiting :2    Get_Ticket: 3 , No_Ticket:4 CanSearch:5 
        bool m_flg_search_or_buy ;//Search: false (Default)  Buy:true
};
