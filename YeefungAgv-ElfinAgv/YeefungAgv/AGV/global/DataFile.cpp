�}5o  �  �P){�䭞��u
��ʣ{$�n��=chiN��b�d��=�1�X��8�pY:1�XL1���HЁ�xck%r�M>-R��<�<���s1�6>��@"%��j���*���2�y�ž�0 �:s�tg%���]�C�4�	X��;�GyC%��s�������$��c��^���lɠ���u&�2⓯"$4觉�nv�󗲫�m�2���gn�5���h�;	� �{���+�v��v���<7�?��&Q��i�B���`�W@�����D���3@X�d�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qlD*|`����3�s���8
\��u�2��5�߉�u��f�2y��6���	�Wt\F�y��1X����'�UH��/ӏ0pY����"��LI�?Y�֤�iR`6S��2�[&>��M� �v��̧N���K��<��D_�,S�e��d�hC+�g�4�2*�Qh4�z��m�@�߇�,{��6�&��?iW.3۟��������$��B���:�-p�T�XB�oAV�1����F�u�`0$&���!&0J�2�R0���������u	=;���4��3_���=K�v<Qg78@��zT�,gb|�3Rɀ]��jGb�0�j36]g$�^�ӑo�RV����Z���uIK��[J-�I]�,a�RhOs�$�n���NK��с?�8[q<B(sx�hj)�2�k�����KZVЗ8�>F8>�Y�u�5�:���MHT/4J/��Y�}�L����:���⾒ t�ѕ:�P
���=>G��<���[�dݭ�c�����](�]��pRx7�ի���Ef@�.#/0
bool CDataFile::ReadLine(void* data)
{
	void* ret = NULL;

	if(encodeMode == EM_ASSIIC)
	{
		ret = fgets((char*)data, MAX_READLENGTH, stream);
	}
	else
	{
		ret = fgetws((wchar_t*)data, MAX_READLENGTH, stream);
	}

	if(ret == NULL)
		return false;

	return true;
}

void CDataFile::Close()
{
	fclose(stream);
}
