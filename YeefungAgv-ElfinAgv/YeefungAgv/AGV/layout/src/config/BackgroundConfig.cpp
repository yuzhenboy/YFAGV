�}�o  J  zZ`��mٝ��u
�� ʣ�$�����%jH4��uʞ8-�G�Xv�u�S0��˭�7`�?��:��∥	������kL��?!�I
�>H~�[��Sjr�0���D��R��H.�� 5��V�s��	�N�ҀI����Ùf�"vz��i�&u�&?�Ec�,<����/e�w�Ud,� �{5���4�}�����B�*���6��������g�oOn�)���q(��3R�d��lR`��-�T�h:|
����
�Cn���,��%L�L]�n�yd�5_ukJ�x��b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qturn true;
		case 1:
			_strBgdFilePath = strValue;
			break;
		}
	}

	return false;
}

void BackgroundConfig::Write(std::ofstream& fout)
{
	fout<<"0"<<std::endl;
	fout<<"BACKGROUND CONFIG"<<std::endl;
	fout<<"1"<<std::endl;
	fout<<_strBgdFilePath<<std::endl;
}
