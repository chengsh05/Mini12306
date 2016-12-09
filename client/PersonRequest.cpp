#include <iostream>
using namespace std;

#include "client/PersonRequest.h"

PersonRequest::PersonRequest(Station a_begin,Station b_end)
    :m_begin(a_begin)
    ,m_end(b_end)
    ,m_statues(false)
{
    cout<<"PersonRequest::PersonRequest Init()"<<endl;    
}

PersonRequest::~PersonRequest()
{
    cout<<"PersonRequest::~PersonRequest destory()"<<endl;    
}

bool PersonRequest::SendRequestSearch(Station Begin,Station End)
{
    return false;
}

bool PersonRequest::SendRequestBuy(Station Begin,Station End)
{
    return false;
}
