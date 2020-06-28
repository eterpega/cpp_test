#pragma once

class TestClass
{
private: 
  int aa;
  int bb;

public:
  int fn1(int &pp, int qq){pp=qq; return pp;}
  
};
