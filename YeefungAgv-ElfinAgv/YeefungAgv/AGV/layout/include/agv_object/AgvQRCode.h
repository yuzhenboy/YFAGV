�}oo    ��^{���u
��0ʣs;�n���u&h����o�*��F9���j�Y��zt��O2�+��1��wڃ�_�+f�2���Xu�����.���l�.Ш}��'a�#^V�����G�6��a�\*/t���T��6��¾)LB��#�	7i=��\�fK�yF����C�0DI��5E.H3Pn��������ݥ&D�'�q��u�TM�"���io��|YjR���J��-��?�]�/��Z�DiV�)�S}F6��ti3���<�I��ti��x��ې�����ֽ\p@e`͍�������f�ި�6��FY���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qct();

	//�ļ�����
	virtual bool Read(std::ifstream& fin, int& code, std::string& strValue);
	virtual void Write(std::ofstream& fout);

	Vector2 GetPosition() const {return _position;}
	void SetPosition(const Vector2& pos) {_position = pos;}

	double GetAngle() const{return _angle;}
	void SetAngle(double ang){_angle = ang;}

private:
	CBoundBox GetBoundBox();

private:
	Vector2 _position;
	double _angle;
};

}

