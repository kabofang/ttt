#pragma once

class CSecure{
protected:
	void* m_pKey;
	int m_Keylen;
protected:
	virtual bool SetKeylen();
	virtual bool Char2Key(char*,int);
public:
	bool Init(char*);
	bool Init(char*,int);
	virtual bool Release();
	int GetKeylen();

	virtual int Encrypt(int lenplaintext, char* pplaintext, char** pciphertext) = 0;
	virtual int Decrypt(int lenciphertext, char* pciphertext, char** pplaintext) = 0;
	
	~CSecure();
};
