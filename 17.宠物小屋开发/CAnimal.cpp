#include"CAnimal.h"
#include<iostream>
using namespace std;

CAnimal::CAnimal()
{
	m_strName = " ";
	m_strColor = " ";
	m_nAge = 0;
}
CAnimal::~CAnimal(){}

void CAnimal::InitAnimal(string& name,string& color,int age)
{
	m_strName = name;
	m_strColor = color;
	m_nAge = age;
}

void CAnimal::ShowAnimal()
{
	cout << "Animal info::name=" << m_strName << ",color= " << m_strColor << ",age=" << m_nAge << endl;
}

