�}go  �  qd��j��u
��_ʣ�;a�n���urxO>����g�bs3��[��xMK������n�>�T�e����$4�Y�N��4s�![��Q���5FMK�����냳��g&5�j=�q�&(L鎅v��f"�ei ��I���2�a�L��(�A�}����c|jw���e�S�K�q�J~����_�]�=��H�7x�ҥ\����~�DΏ�[q;�Vn��T�z��q ������|��u��'��eG{��kuhvXm��u@n��0�^�9{6���\z	�}& ��ލ�BA��Nݪf�<|��E\�?+�j�(oF�N���ev3�@��?s���e�Ǌ(�d~�! ���bzj���F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql5*���/��|�J?0��#ƃ�W��3|V��v�_�ȵ��1j/�i$K��&��3�>l�a�5�S���e��|��h/J�vx55N���vV�qh��^��5�������]���<i���`��A؀.R�P�ϫʎ�8����Ip�SE<���v娺�"²��D���5�q�q[�+����!K(~��;����&h�ϔ��$�F��t(�%X�����M�w՞'���u�[���V-f@�^��⦞X\%Y��̤�'�#��&���z���J��τ����&{�pB��EF�|9N!ŕG$�ښ�L�t�/� 챯߸.GIDhO��{D(׎��b�zx�1���ѣ��J���N�}M~��3���_^�����9�Dr\�$�,cX�Hx� z5��8`�^M*�CUL��wqӗ`s�]���j:�����i~��)��h�D!~���lB���s�Wh!�l�6��|�c�֠*�)>=��^蠀�R��l�z�f�˳8���O����ͷ
		if (len > sizeof(msg.message) || msg.message.NumberOfParameters > MAXNUMOFPARAMETERS)
		{
			return ;
		}

		width_t checkSum = crc16.GetCRC16((char *)&msg.message, len);
		msg.header.CheckSum = checkSum;
	}

private:
	CCRC16 crc16;
};

#endif
