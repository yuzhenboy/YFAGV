�}�o  
  dO6�n���u
��ʣ���n��{����#r`��xS̷n��ڹ<�5,0�ْ�H�()���ܞ�wƔw��跫���Ѣ�����4s�t��c����v���t^����E 諭��0r�������`���Xx�^6��6c���� ���qj�g��K��DX8/�k�P/V��u��I�{��FV����o7d�|��h�^�&����P��a�FWb�B����K�hu�W�� cd/��q47;q��C���c�/�.�lIbm�3s���bdg�d:��Vq�#X�����
S�O�V��4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qValue);

	//Property Settings
	virtual CString GetName() const {return _name;}
	virtual void SetName(CString strName){_name = strName;}

	int GetAngle() {return _angle;}
	void SetAngle(int angle) {this->_angle = angle;}

	int GetPlcBit(){return _plcBit;}
	void SetPlcBit(int bit){_plcBit = bit;}

private:
	CString _name;
	int _angle;
	int _plcBit;
};

}


