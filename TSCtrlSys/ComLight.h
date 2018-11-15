#pragma once
class CComLight
{
public:
	CComLight(void);
	~CComLight(void);

	// 配置光源连接的COM口
	SerialPort* m_pComPort;
	int SetComPort(SerialPort* pPort);

	int m_nLightType;	// 光源类型  0,1

	int SetLightPower(int nVal);
	int GetLightPower(int &nVal);
};

