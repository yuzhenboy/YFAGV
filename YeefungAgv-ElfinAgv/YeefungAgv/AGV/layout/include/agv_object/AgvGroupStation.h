�}So    9LZ��q��u
��'ʣk��n��;\���a2���p�@����v��O�w^Ǔ\���3ޡD�s1��G��?~ptP���x��y4*<�����{�Xx{m��҄3�͠7��6�~�a�����r��C��A��%�(�7Փ��l��4���Y����⪥}Q8X�w|�(�l�p�+Iq!�uHZ�:���� ��Eհ��m��
������[R4��J�J����Yd'ZFo�;��iJI&7�f�c��$�f���]X�Y��m�`Vj���ݝ�`]d\��6�F�r���ۼIT�'��b���[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��q::string& strValue);
	virtual void GetDrawParam(CAgvDrawParam* drawParam);
	virtual bool Pick(const Vector2 &pos);
	virtual bool IsIntersect(const CBoundBox& testBox);
	virtual CRect GetBoundRect();

	virtual void SetOpCodeList(const std::list<COpCode>* pCode);
	virtual std::list<COpCode>* GetOpCodeList(){return &_listOpCode;}

private:
	CBoundBox GetBoundBox();

private:
	std::list<COpCode> _listOpCode;
};

}



