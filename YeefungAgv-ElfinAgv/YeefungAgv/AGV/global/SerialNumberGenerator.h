�}:o  �  K1X��1<C��u
��ʣ�$��i���%\tzKtygA�ߕ��U4�9���ݶg���J�أ����p�~��tA{�z)f�F"���q80�FZ�/��q�%�9���h�=N�#��T�c�Mx�|�M`r2�}菡�SyT[�Z/&j�0��ѻ�����|Ԡ&���<v�2�	i�V,\��W��J�_��R oy-��b���Q`��������9���{�
6l��[l��8 h�^h���כF߅�h��A5^���O��Ǉ���ܦ ό��g9xg����@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql� ���ȍ�ECij0K-����<)n��{�����꾃�Z6��܍�p���ʠ9��gU�1�d)�P�����������7�GA���d3vS����� }-[�����\a8�Lp%����NB:��Z[<vH�4-2�n���\����a���Q�6�-l��T5���_�DR�t^
B�����O�3Wi���9�w\�:�	�O:_���ٔ�C!�`�!oVs�	q���4�Y:2�濢��!-���C)���^߬��B��W��}v4�E|^P>J�Tf��K1� 	e�s�1������b
C��A&�����L��[�t���.O�ʟt[L�tx4�y)�(�F��Ql���82���U�,�k�Lǀ��S#��oc�A���n�{r�H�/F:�<_4KU�I4�5��������)���W{�����=�̮K���&2Q�)m\\�*�F{��~��{��~��,�����Vhu�E!�J��A�<�;���)N�f�өcurrIndex;
	}

	void RecycleIndex(unsigned int index)
	{
		CSingleLock lock(&indexsMtx, TRUE);
		if (index > 0 && index <= indexs.size())
		{
			indexs[index-1] = false;
		}
	}

private:
	std::vector<bool> indexs;

	CSemaphore indexsMtx;

	int Counter;

	unsigned int currIndex;		//��ǰ�ѷ����ID
};
