�}o  �  �T�u�{����u
��Sʣ�c��Ml+����!�����
�_	�:z��
��/�	����D �L�^Y�@���_���r�^�܄�5Jm5��S��S��R��H�#�`�m�Ϊ��C����~�����"C� N�Y�&sdWi>i��-��z���a�WOJ(�Ct��/Gm�؅�x~�Bq��
&����S�=�UP�.��J�� %C��bИ�6zW����X�$��tӅ�-��f������z�U	��*q�7��t���6B�����Y�����o�.jy�U~�(>����To���W��dޒ/�-Ca��1�f��6��g���n��������٩6�����ǾG	'd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql�,na]0h�̎��*��ߕ"��C0�,�Ŋ	��|���C�<�L����HT};�@^�|����$����X��L7�#k���F&����QJ���U�I�"� ���՘��~d<y=p�����G/�,���dS��8)*v�֧���u�kx��kU�/�oa1��t�u��~�iz	WL��p��U�^�t��tADr C2�à��]%���F���:�o�S<�*|n1�=?>g�=kA\V�p��w���k�軱�BC���䀓do���}ݭG��(��Dw�qaN�����ކ�.F����}T��k�2U���>2<};�,�����2��j����4�������߅�+�TIC�bH�ۡ�)�$Z��'sK>c�Mj��At	�����wҼ�����^�Խ����O��|���D6%�<��	=)�^���Qy��b�j
���?aMXv,J]L\M����}��T���R'\�WSf��M���?c���CH�HNl�(O��~?��(~����,Ow�Lގڈ�P��A��cE�<"�<�-h3�YJ�sQ�S�>����o��	�h�yQx�bB���! V���+�Zi��-�b�o�d*G�b�*���Z�Lr0O�s[m��7���ri�4/qK����[���8��:3ܤ�T�@�����x�kqi��+��	���q�F�[TR�E������'9����	^�pfN��ؑ��At�����W~+�ߐ�i�D��͝c~Rj���	w��˷��A��{k�<l�^�xh�\\"��z�j�n�����P%Q��D��0tvP�iGe�����m��1杬�+;ht�NY4�]Ȍ�o>�����",U�+%z<B��e<
lN rP��F
󸸵	K)�!��Зif;��uG���|V��2�'�e��*��ۚ�94�	`(T��0�L	�}���م�
\�1
�,b��)��wL��N�<-1��l�X8_�ۀ%Ki�� �� ٽ7�k\��D�& frame);

	byte GetCheckSum(const FrameData& frame);
	int ParseDataProcess(void* param);


	bool _isUpdated;
	bool _isReady;

	int _currAngle;
	int _prevAngle;
	int _naviAngle;

	SerialPort _serialPort;
	MessageBuffer* _messageBuffer;
	CThread<YeefungGyro> _parseDataThread;

	SensorData _sensorData;
	ofstream _outputFile;
};
#endif // __LOCATOR_YEEFUNGGYRO_H__
