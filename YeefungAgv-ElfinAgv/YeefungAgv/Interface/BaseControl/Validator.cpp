�}Bo  �  #C�C�����u
��ʣC��.��xE���������L�R�}d�,1�����7���~|��B+|ɤM
5�b�d��~�?(6lv�QgF����F�\�H�/�ɼh����)�]�\�0�Sb��΍��đ�z#�y? a#��f&�~�,� �,3�
G'�J���y��	ڊ��q!S�ՠv��_�@h���U
������!���Ȁ�*���J��+�[�hm�G-�ᘺ�5��=��w��;�T������N�`�i�7���~'8X�;��s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql�.��BM�DA��ә�,S�#�pQ@���x5��$�7�n�..{J ��!��hTO�9��uyL&�27 ~��@l�PZ�&��Sw8�z|�8^��K�L�x2�,I=85��3o��A3IU��x�'Xk��!�̚�zU�FaX���x͏�=�?DԩlB�f�WH^t��3�j�����GN�K����|-$n�F�H���P����oi�3�D*����N�>1<�%,VG�!�2_�[�Db���s��F�=JA�h��)�J= 춶�����؍,��r������*&���ODQ�!���ty���G���4+��;0�˧���?���\6J۱hoT.�1E`���@�9��٫���\�]E��e���5e�	�����Irf �)�b����<�f_�t�@��P8��Տ��O����ò���J����D�UQ�!�H���T�1~�z��n}��1/���-Y�S����U��Ǒ��LsiCಚ��צ�]-�64k0:.��q���"MO�l-�K=(ld�+�7��R�yZ<W���n?A1���p����Hި�n|W���$�Շ�W����.�!�5��}�YԾ����܀2�N�
K�t��(z�4l��)4��NXp���Km��g5�(�*QW�@*~8��@t�4f	T��D���T���iZwRѢ������rg��E}
�
s�76�gKG3���1��dc�����?o��4����w�)1��b�ҷY�c�Bm 9���O�G��]q�D2�����O���Q-2�Ċ�7�~�R�AC:��O�W��$�w���P	SI�rj�I@K��{)��_��bj w%�uɤ���r�'�2UV#\���|c��C>6�|�b��ZTt,�T艅��9YW��B�NwK̴�lN��R��5˃�_��_����ܾ�OeGb^:�WmQ���/¢�<:_&rCPz�]��Xk�q����F9s�A ڿM��9yl�%���R�-O�{7m�ğ��ě;�=��9void)
{

}

bool CFloatValidator::CheckValidation(tstring _dst)
{
	bool rtn = false;
	char strtemp[256];//@ce

	if (this->CValidator::CheckValidation(_dst))
	{
		WideCharToMultiByte(CP_ACP, 0, _dst.c_str(), -1,strtemp, MAX_PATH, NULL, NULL);//@ce
		
		
		double  val = atof(strtemp);//@ce		
		
		if (val >= m_minValue && val <= m_maxValue)
		{
			rtn = true;
		}
	}	
	return rtn;
}
#pragma endregion