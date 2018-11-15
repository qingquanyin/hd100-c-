// mvFunction.h : main header file for the mvFunction DLL
//

#pragma once

class CFunction
{
public:
	CFunction();
	~CFunction();
	static CString GetVerion();

public:
	//////////////////////////////////////////////////////////////////////////
	static void DoEvents();
	static void DelaySec(double dTime/*S*/);
	static void DelayExSec(double dTime/*S*/);
	static void AppendEdit(CEdit *pEdit, LPCSTR pText);

	static void GetDirectory(LPCSTR  pExcutePath);
	static CString GetDirectory();

	static LONGLONG GetCurrentCounter();
	static LONGLONG GetCurrentFrequency();
	static double GetCurrentTimeEx();//S

	//////////////////////////////////////////////////////////////////////////
	static void HandleStruct(BOOL bReadParam, LPCSTR lpszSection, LPCSTR lpszKey, LPVOID lpStruct,  UINT uSizeStruct, LPCSTR szFileName);
	static void HandleInt(BOOL bReadParam, LPCSTR lpAppName, LPCSTR lpKeyName, INT &nValueDefault, LPCSTR lpFileName);
	static void HandleLong(BOOL bReadParam, LPCSTR lpAppName, LPCSTR lpKeyName, long &nValueDefault, LPCSTR lpFileName);
	static void HandleDWord(BOOL bReadParam, LPCSTR lpAppName, LPCSTR lpKeyName, DWORD &nValueDefault, LPCSTR lpFileName);
	static void HandleByte(BOOL bReadParam, LPCSTR lpAppName, LPCSTR lpKeyName, BYTE &nValueDefault, LPCSTR lpFileName);
	static void HandleString(BOOL bReadParam, LPCSTR lpAppName, LPCSTR lpKeyName, LPCSTR lpValueDefault, LPCSTR lpFileName);
	static void HandleDouble(BOOL bReadParam, LPCSTR lpAppName, LPCSTR lpKeyName, double &lpValueDefault, LPCSTR lpFileName);
	static void HandleFloat(BOOL bReadParam, LPCSTR lpAppName, LPCSTR lpKeyName, float &lpValueDefault, LPCSTR lpFileName);

	//By the digital characters composition the string  
	static bool IsNumber(CString strText);

	//记录日志
	enum
	{
		LEV_INFO,
		LEV_WARN,
		LEV_ERROR,
		LEV_FATAL,
		LEV_OPERAE,
	};
	static BOOL WriteLog(const CString csFileFullName, const int iLineNo, const CString csContent, const int iLevel);

	// 删除路径以及路径下的文件
	static bool DeleteDirectory(char* DirName);
};