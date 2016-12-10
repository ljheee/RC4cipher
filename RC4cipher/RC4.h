//对称加密体制
//原理：异或2次得明文
void SetKey(unsigned char* key, int nKeyLen);
void Setup();
void Encrypt(unsigned char *pData, int nLength);