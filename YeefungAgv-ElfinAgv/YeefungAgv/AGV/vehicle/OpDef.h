�}o  �  �N�Y�S���u
��zʣMzw���b�wh}�KN�	;T??]�ͮ�i&��.V`����W���q6�L����{~4a�շa&vZCJ�G]��ĥ��/b��V��X{�+�.��E�YDn`��\�֬����
9�\�&<�o)Yk���%����a�m�|�;AQ0W�	&�It������:ß�)�6��[�!tȫϹɤ�1pP�r]m��8vE6���f�U��#M��P�J1������ �N�ռ��j�f�HW�Yзj6q`tyK�vspB�h{�K������ۧE%��s�T�}��y���I[VTCH�C�A�W��I+�_Oi����U�+p�E�ǩ8?+ϵ���A�ab�����/�S*�J&m�b��Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qle;
};

struct OpControl
{
	OP_TYPE type;		//����
	//AgvMode_t mode;		//��ǰ������ģʽ����δȷ���Ƿ���Ҫ���ֶ�
	union				//Я��������
	{
		int speed;
		int angle;
	};
};

#endif