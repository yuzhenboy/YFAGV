�}zo  �  5o�B�
��u
��#ʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5� ڴ�Kg+��ox�5��k��﷦�^�j��+�+�S�)�O��o�� �(��;G�J��/P����A=�\d� �;;��o��E�eh]i�>�Z����p�L��u��u���~���Dv*j��o���
wRL�8�A�T�2��ך��~�e/[�U�|�G��7849���� 0��\<�QU�~yYI4n��8Bu�q���0SgJsb-]�a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql�'3T̈=�.�k:N�i��-F)�����,3�;1�<��狰
���E���:�$3M,{X��D46�����8���'�v�8Æ��\��r�
�<:{��h�J@�sK��a~��K<�Ȁ*���Q*�0�XyK�s��H?tTK�ދ"T����`��	��I�i�-r�!���#�:{b�)���p��g�1�N8b�&���P���%1h\��F �Y���m�U�(GK������m�Ś��'���Y������Lȭ2����n��m[�H�:��sn��mY��}�?B�j! �orޟ�U	D�� �x64���ƛ�m7��$;�ي���4���q�LQ󽷀Ņ�ֵ��+m{mTR��(�9��@(�2���-�I�D6�cޑ��z$�0�6?l{L�Ν�&
�>�D������ʫsy��c�GtK����S�y�hC~k��`��(	_�(ا�>C�W��)%����N���l~b�l�_��RE9[��͒.F��"�testBox);
	virtual CRect GetBoundRect();

	virtual void SetOpCodeList(const std::list<COpCode>* pCode);                   //Why use pointer????
	virtual std::list<COpCode>* GetOpCodeList() {return &_listActiveOpCode;}

private:
	CBoundBox GetBoundBox();

private:
	std::list<COpCode> _listActiveOpCode;
};

}



