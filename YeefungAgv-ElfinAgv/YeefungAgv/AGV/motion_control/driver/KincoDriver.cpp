�}!o  b  k��[������u
��ʣ{$�n���%|dX��9U�m�%�ƹ�����N���xI%I4�����92�k��ے!�݃h�A�ѐ��]R��Eݰ�
2����������2�RZU)Ij=uT݄�s�U�_�	���0�o��@�4dǽ�.�{k��ʽ�x�S�i̟y0�_���b+���[�U���`4ge;��ؤa������"���Ir=�J/���-�=A24У��Ā����}�rǕ/�sd�0'N~vK��_��j~!����GM%d���pGƤ�@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qSPEED_CONVERSION_FACTOR;

	/*if(!_isEnabled[id-1])
	{
		SendEnableDriverMsg(id, true);
		Sleep(1);
	}*/

	//SendSetSpeedMsg(id, convertSpd);
}

void KincoDriver::SetWorkMode(int id, char mode)
{
	//SendSetWorkModeMsg(id, mode);
}

void KincoDriver::Enable(int id, bool flag)
{
	if(_isEnabled[id-1] != flag)
	{
		//SendEnableDriverMsg(id, flag);
		//_isEnabled[id-1] = flag;
	}
}

