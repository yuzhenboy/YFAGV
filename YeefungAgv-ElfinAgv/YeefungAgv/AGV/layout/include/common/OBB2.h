�}�o    1c�
��<��u
��ʣc;�n���%wrx�t�E��%>���/�T�S2d�&��S��r�L��>��t�����(UL,6N�A��r��D=����JA-p�Y�"�}At|���	�sZw�s�W���w��L6�uW���V�@�.Q�(DO��"��������oX�����=��7\�ߠ{N����z�t�A����R27Z]E-�L��8a�ӽ;-p��߮���)���#�$��>���^D�cF�"��=���6�sG	7=�>sH\��fѰ�ƒ�V�����P�jT�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qject) const;
	static bool IsOBBsIntersect(const COBB2& box1, const COBB2& box2);

	void SetCenter(const Vector2& pos){_center = pos;}
	long GetLength() const{return _halfWidth * 2;}

private:
	//��άOBB��Χ�����ݽṹ һ�����ĵ㣬 ����1/2�߳��� ������ת��
	Vector2 _center;
	long _halfWidth;
	long _halfHeight;
	Vector2 _axis1;
	Vector2 _axis2;
};

}



